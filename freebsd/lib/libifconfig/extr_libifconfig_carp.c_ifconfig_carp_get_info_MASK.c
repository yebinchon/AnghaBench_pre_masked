
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {scalar_t__ ifr_data; int ifr_name; } ;
struct carpreq {int carpr_count; } ;
typedef int ifconfig_handle_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct carpreq*,int) ;
 scalar_t__ FUNC_1 (int *,int ,int ,struct ifreq*) ;
 int FUNC_2 (int ,char const*,int) ;

int
FUNC_3(ifconfig_handle_t *VAR_2, const char *VAR_3,
    struct carpreq *VAR_4, int VAR_5)
{
 struct ifreq VAR_6;

 FUNC_0(VAR_4, sizeof(struct carpreq) * VAR_5);
 VAR_4[0].carpr_count = VAR_5;
 FUNC_2(VAR_6.ifr_name, VAR_3, sizeof(VAR_6.ifr_name));
 VAR_6.ifr_data = (caddr_t)VAR_4;

 if (FUNC_1(VAR_2, VAR_0, VAR_1, &VAR_6) != 0) {
  return (-1);
 }

 return (0);
}
