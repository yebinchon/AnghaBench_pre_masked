
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct afswtch {int dummy; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_3__ {scalar_t__ ifr_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int,int ,TYPE_1__*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_3, int VAR_4, int VAR_5, const struct afswtch *VAR_6)
{
 uint32_t VAR_7;

 VAR_2.ifr_data = (caddr_t)&VAR_7;
 if (FUNC_0(VAR_5, VAR_0, &VAR_2) == -1) {
  FUNC_1("ioctl(GREGOPTS)");
  return;
 }

 if (VAR_4 < 0)
  VAR_7 &= ~(-VAR_4);
 else
  VAR_7 |= VAR_4;

 if (FUNC_0(VAR_5, VAR_1, &VAR_2) == -1) {
  FUNC_1("ioctl(GIFSOPTS)");
  return;
 }
}
