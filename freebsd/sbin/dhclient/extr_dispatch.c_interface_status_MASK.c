
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interface_info {char* name; int rfdesc; int noifmedia; } ;
struct ifreq {int ifr_flags; int ifm_status; int ifm_active; int ifm_name; int ifr_name; } ;
struct ifmediareq {int ifr_flags; int ifm_status; int ifm_active; int ifm_name; int ifr_name; } ;
typedef int ifr ;
typedef int ifmr ;
typedef struct ifreq* caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,char*,char*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 (int,int ,struct ifreq*) ;
 int FUNC_2 (struct ifreq*,int ,int) ;
 int FUNC_3 (int ,char*,int) ;

int
FUNC_4(struct interface_info *VAR_12)
{
 char *VAR_13 = VAR_12->name;
 int VAR_14 = VAR_12->rfdesc;
 struct ifreq VAR_15;
 struct ifmediareq VAR_16;


 FUNC_2(&VAR_15, 0, sizeof(VAR_15));
 FUNC_3(VAR_15.ifr_name, VAR_13, sizeof(VAR_15.ifr_name));
 if (FUNC_1(VAR_14, VAR_8, &VAR_15) < 0) {
  FUNC_0(VAR_10, VAR_7, "ioctl(SIOCGIFFLAGS) on %s: %m",
      VAR_13);
  goto inactive;
 }





 if ((VAR_15.ifr_flags & (VAR_2|VAR_1)) != (VAR_2|VAR_1))
  goto inactive;


 if (VAR_12->noifmedia)
  goto active;
 FUNC_2(&VAR_16, 0, sizeof(VAR_16));
 FUNC_3(VAR_16.ifm_name, VAR_13, sizeof(VAR_16.ifm_name));
 if (FUNC_1(VAR_14, VAR_9, (caddr_t)&VAR_16) < 0) {
  if (VAR_11 != VAR_0) {
   FUNC_0(VAR_10, VAR_6,
       "ioctl(SIOCGIFMEDIA) on %s: %m", VAR_13);
   VAR_12->noifmedia = 1;
   goto active;
  }




  VAR_12->noifmedia = 1;
  goto active;
 }
 if (VAR_16.ifm_status & VAR_4) {
  switch (VAR_16.ifm_active & VAR_5) {
  case 129:
  case 128:
   if (VAR_16.ifm_status & VAR_3)
    goto active;
   else
    goto inactive;
   break;
  default:
   goto inactive;
  }
 }
inactive:
 return (0);
active:
 return (1);
}
