
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_flags; int ifr_flagshigh; int ifr_name; } ;
typedef int my_ifr ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int FUNC_5 (struct ifreq*,int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_3, int VAR_4)
{
 struct ifreq VAR_5;
 int VAR_6;

 FUNC_5(&VAR_5, 0, sizeof(VAR_5));
 (void) FUNC_7(VAR_5.ifr_name, VAR_3, sizeof(VAR_5.ifr_name));
 if (VAR_4 < 0) {
  if ((VAR_6 = FUNC_6(VAR_0, VAR_2, 0)) < 0)
   FUNC_2(1, "socket(family AF_LOCAL,SOCK_DGRAM");
 } else
  VAR_6 = VAR_4;
  if (FUNC_4(VAR_6, VAR_1, (caddr_t)&VAR_5) < 0) {
   FUNC_0("ioctl (SIOCGIFFLAGS)");
   FUNC_3(1);
  }
 if (VAR_4 < 0)
  FUNC_1(VAR_6);
 return ((VAR_5.ifr_flags & 0xffff) | (VAR_5.ifr_flagshigh << 16));
}
