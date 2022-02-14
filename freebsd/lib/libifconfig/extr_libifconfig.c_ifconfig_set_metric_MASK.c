
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_metric; int ifr_name; } ;
typedef int ifr ;
typedef int ifconfig_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ,struct ifreq*) ;
 int FUNC_1 (struct ifreq*,int ,int) ;
 int FUNC_2 (int ,char const*,int) ;

int
FUNC_3(ifconfig_handle_t *VAR_2, const char *VAR_3, const int VAR_4)
{
 struct ifreq VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 (void)FUNC_2(VAR_5.ifr_name, VAR_3, sizeof(VAR_5.ifr_name));
 VAR_5.ifr_metric = VAR_4;

 if (FUNC_0(VAR_2, VAR_0, VAR_1, &VAR_5) < 0) {
  return (-1);
 }

 return (0);
}
