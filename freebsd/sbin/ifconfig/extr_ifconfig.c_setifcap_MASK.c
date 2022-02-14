
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afswtch {int dummy; } ;
typedef int caddr_t ;
struct TYPE_2__ {int ifr_curcap; int ifr_reqcap; } ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_2 (int,int ,int ) ;

void
FUNC_3(const char *VAR_3, int VAR_4, int VAR_5, const struct afswtch *VAR_6)
{
 int VAR_7;

  if (FUNC_2(VAR_5, VAR_0, (caddr_t)&VAR_2) < 0) {
   FUNC_0("ioctl (SIOCGIFCAP)");
   FUNC_1(1);
  }
 VAR_7 = VAR_2.ifr_curcap;
 if (VAR_4 < 0) {
  VAR_4 = -VAR_4;
  VAR_7 &= ~VAR_4;
 } else
  VAR_7 |= VAR_4;
 VAR_7 &= VAR_2.ifr_reqcap;
 VAR_2.ifr_reqcap = VAR_7;
 if (FUNC_2(VAR_5, VAR_1, (caddr_t)&VAR_2) < 0)
  FUNC_0(VAR_3);
}
