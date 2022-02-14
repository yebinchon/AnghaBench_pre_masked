
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_flags; int ifr_flagshigh; int ifr_name; } ;
struct afswtch {int dummy; } ;
typedef int my_ifr ;
typedef int caddr_t ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct ifreq*,int ,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2, int VAR_3, int VAR_4, const struct afswtch *VAR_5)
{
 struct ifreq VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_1, VAR_4);
 if (VAR_3 < 0) {
  VAR_3 = -VAR_3;
  VAR_7 &= ~VAR_3;
 } else
  VAR_7 |= VAR_3;
 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 (void) FUNC_4(VAR_6.ifr_name, VAR_1, sizeof(VAR_6.ifr_name));
 VAR_6.ifr_flags = VAR_7 & 0xffff;
 VAR_6.ifr_flagshigh = VAR_7 >> 16;
 if (FUNC_2(VAR_4, VAR_0, (caddr_t)&VAR_6) < 0)
  FUNC_0(VAR_2);
}
