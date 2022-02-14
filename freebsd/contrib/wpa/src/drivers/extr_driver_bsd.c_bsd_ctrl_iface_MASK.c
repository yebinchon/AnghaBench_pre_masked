
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifreq {int ifr_flags; int ifr_name; } ;
struct bsd_driver_data {int flags; TYPE_1__* global; int ifname; } ;
typedef int ifr ;
struct TYPE_2__ {int sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,struct ifreq*) ;
 int FUNC_1 (struct ifreq*,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_5(void *VAR_5, int VAR_6)
{
 struct bsd_driver_data *VAR_7 = VAR_5;
 struct ifreq VAR_8;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 FUNC_2(VAR_8.ifr_name, VAR_7->ifname, sizeof(VAR_8.ifr_name));

 if (FUNC_0(VAR_7->global->sock, VAR_2, &VAR_8) < 0) {
  FUNC_4(VAR_1, "ioctl[SIOCGIFFLAGS]: %s",
      FUNC_3(VAR_4));
  return -1;
 }
 VAR_7->flags = VAR_8.ifr_flags;

 if (VAR_6) {
  if (VAR_8.ifr_flags & VAR_0)
   return 0;
  VAR_8.ifr_flags |= VAR_0;
 } else {
  if (!(VAR_8.ifr_flags & VAR_0))
   return 0;
  VAR_8.ifr_flags &= ~VAR_0;
 }

 if (FUNC_0(VAR_7->global->sock, VAR_3, &VAR_8) < 0) {
  FUNC_4(VAR_1, "ioctl[SIOCSIFFLAGS]: %s",
      FUNC_3(VAR_4));
  return -1;
 }

 VAR_7->flags = VAR_8.ifr_flags;
 return 0;
}
