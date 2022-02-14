
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
 unsigned short const VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vlanreq*,int) ;
 scalar_t__ FUNC_1 (int *,int ,int ,struct ifreq*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int) ;

int
FUNC_4(ifconfig_handle_t *VAR_3, const char *VAR_4,
    char **VAR_5, const char *VAR_6, const unsigned short VAR_7)
{
 struct ifreq VAR_8;
 struct vlanreq VAR_9;

 if ((VAR_7 == VAR_1) || (VAR_6[0] == '\0')) {

  return (-1);
 }

 FUNC_0(&VAR_9, sizeof(VAR_9));
 (void)FUNC_3(VAR_8.ifr_name, VAR_4, sizeof(VAR_8.ifr_name));
 VAR_9.vlr_tag = VAR_7;
 (void)FUNC_3(VAR_9.vlr_parent, VAR_6, sizeof(VAR_9.vlr_parent));
 VAR_8.ifr_data = (caddr_t)&VAR_9;

 if (FUNC_1(VAR_3, VAR_0, VAR_2, &VAR_8) < 0) {

  return (-1);
 }

 *VAR_5 = FUNC_2(VAR_8.ifr_name);
 return (0);
}
