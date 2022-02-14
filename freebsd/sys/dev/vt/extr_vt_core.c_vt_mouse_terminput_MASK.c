
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vt_device {int dummy; } ;
struct TYPE_4__ {int z; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
struct TYPE_6__ {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 TYPE_3__* VAR_3 ;
 int FUNC_0 (struct vt_device*,int) ;
 int FUNC_1 (struct vt_device*,int) ;

__attribute__((used)) static void
FUNC_2(struct vt_device *VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8,
    int VAR_9)
{

 switch (VAR_5) {
 case 129:
  if (VAR_9 > 0) {

   if (VAR_8 & VAR_0)
    FUNC_1(VAR_4, 0);
   if (VAR_8 & VAR_1)
    FUNC_1(VAR_4, 1);
   if (VAR_8 & VAR_2)
    FUNC_1(VAR_4, 2);
  } else {

   FUNC_1(VAR_4, 3);
  }
  break;
 }
}
