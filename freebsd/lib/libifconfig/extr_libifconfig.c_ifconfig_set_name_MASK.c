
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ifreq {char* ifr_data; int ifr_name; } ;
typedef int ifr ;
struct TYPE_5__ {int errcode; int errtype; } ;
struct TYPE_6__ {TYPE_1__ error; } ;
typedef TYPE_2__ ifconfig_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int ,struct ifreq*) ;
 int FUNC_2 (struct ifreq*,int ,int) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (int ,char const*,int) ;

int
FUNC_5(ifconfig_handle_t *VAR_4, const char *VAR_5, const char *VAR_6)
{
 struct ifreq VAR_7;
 char *VAR_8;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8 == ((void*)0)) {
  VAR_4->error.errtype = VAR_2;
  VAR_4->error.errcode = VAR_1;
  return (-1);
 }

 (void)FUNC_4(VAR_7.ifr_name, VAR_5, sizeof(VAR_7.ifr_name));
 VAR_7.ifr_data = VAR_8;
 if (FUNC_1(VAR_4, VAR_0, VAR_3, &VAR_7) != 0) {
  FUNC_0(VAR_8);
  return (-1);
 }

 FUNC_0(VAR_8);
 return (0);
}
