
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlanreq {unsigned short vlr_tag; int vlr_parent; } ;
struct ifreq {int ifr_name; scalar_t__ ifr_data; } ;
typedef int params ;
typedef int ifconfig_handle_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vlanreq*,int) ;
 int FUNC_1 (int *,int ,int ,struct ifreq*) ;
 int FUNC_2 (int ,char const*,int) ;

int
FUNC_3(ifconfig_handle_t *VAR_2, const char *VAR_3,
    const char *VAR_4, const unsigned short VAR_5)
{
 struct ifreq VAR_6;
 struct vlanreq VAR_7;

 FUNC_0(&VAR_7, sizeof(VAR_7));
 VAR_7.vlr_tag = VAR_5;
 FUNC_2(VAR_7.vlr_parent, VAR_4, sizeof(VAR_7.vlr_parent));

 VAR_6.ifr_data = (caddr_t)&VAR_7;
 (void)FUNC_2(VAR_6.ifr_name, VAR_3, sizeof(VAR_6.ifr_name));
 if (FUNC_1(VAR_2, VAR_0, VAR_1, &VAR_6) == -1) {
  return (-1);
 }
 return (0);
}
