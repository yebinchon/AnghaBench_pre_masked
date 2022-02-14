
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ u_long ;


 int EINVAL ;
 int PF_CONFIG_NAME ;
 int VF_PREFIX ;
 int VF_PREFIX_LEN ;
 int isdigit (char const) ;
 scalar_t__ strcasecmp (int ,char const*) ;
 scalar_t__ strncasecmp (char const*,int ,int) ;
 scalar_t__ strtoul (char const*,char**,int) ;

__attribute__((used)) static int
pci_iov_schema_validate_dev_name(const char *name, uint16_t num_vfs)
{
 const char *number_start;
 char *endp;
 u_long vf_num;

 if (strcasecmp(PF_CONFIG_NAME, name) == 0)
  return (0);


 if (strncasecmp(name, VF_PREFIX, VF_PREFIX_LEN) != 0)
  return (EINVAL);

 number_start = name + VF_PREFIX_LEN;


 if (number_start[0] == '\0')
  return (EINVAL);


 if (!isdigit(number_start[0]))
  return (EINVAL);

 vf_num = strtoul(number_start, &endp, 10);
 if (*endp != '\0')
  return (EINVAL);


 if (vf_num != 0 && number_start[0] == '0')
  return (EINVAL);


 if (vf_num == 0 && number_start[1] != '\0')
  return (EINVAL);

 if (vf_num >= num_vfs)
  return (EINVAL);

 return (0);
}
