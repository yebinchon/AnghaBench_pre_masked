
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg_a; } ;
struct vrtc {scalar_t__ base_rtctime; TYPE_1__ rtcdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct vrtc*) ;

__attribute__((used)) static __inline bool
FUNC_2(struct vrtc *VAR_1)
{






 if (!FUNC_0(VAR_1->rtcdev.reg_a))
  return (0);

 if (FUNC_1(VAR_1))
  return (0);

 if (VAR_1->base_rtctime == VAR_0)
  return (0);

 return (1);
}
