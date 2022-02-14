
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_flags; int ifr_name; } ;
typedef int ifr ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct ifreq*,int ,int) ;
 int FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_7(const char *VAR_6, int VAR_7)
{
 struct ifreq VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_2, VAR_4, 0);
 if (VAR_9 < 0) {
  FUNC_6(VAR_1, "socket: %s", FUNC_5(VAR_5));
  return -1;
 }

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 FUNC_3(VAR_8.ifr_name, VAR_6, VAR_0);
 VAR_8.ifr_flags = VAR_7 & 0xffff;
 if (FUNC_1(VAR_9, VAR_3, (caddr_t) &VAR_8) < 0) {
  FUNC_6(VAR_1, "ioctl[SIOCSIFFLAGS]: %s",
      FUNC_5(VAR_5));
  FUNC_0(VAR_9);
  return -1;
 }
 FUNC_0(VAR_9);
 return 0;
}
