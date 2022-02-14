
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmediareq {int ifm_status; int ifm_active; int ifm_name; } ;
typedef int ifmr ;
typedef int caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,char*,char*) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (struct ifmediareq*,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,char*,int) ;

int
FUNC_7(char *VAR_10)
{
 struct ifmediareq VAR_11;
 int VAR_12;

 if ((VAR_12 = FUNC_5(VAR_0, VAR_7, 0)) == -1)
  FUNC_2("Can't create socket");

 FUNC_4(&VAR_11, 0, sizeof(VAR_11));
 FUNC_6(VAR_11.ifm_name, VAR_10, sizeof(VAR_11.ifm_name));
 if (FUNC_3(VAR_12, VAR_6, (caddr_t)&VAR_11) == -1) {

  if (VAR_9 != VAR_1)
   FUNC_0(VAR_8, VAR_5,
       "ioctl(SIOCGIFMEDIA) on %s: %m", VAR_10);
  FUNC_1(VAR_12);
  return (1);
 }
 FUNC_1(VAR_12);

 if (VAR_11.ifm_status & VAR_3) {
  switch (VAR_11.ifm_active & VAR_4) {
  case 129:
  case 128:
   if (VAR_11.ifm_status & VAR_2)
    return (1);
   else
    return (0);
  }
 }
 return (1);
}
