
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int scr_stat ;
struct TYPE_6__ {int z; } ;
struct TYPE_8__ {int id; int value; } ;
struct TYPE_7__ {TYPE_1__ data; TYPE_3__ event; } ;
struct TYPE_9__ {int operation; TYPE_2__ u; } ;
typedef TYPE_4__ mouse_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(scr_stat *VAR_3, mouse_info_t *VAR_4)
{

 switch (VAR_4->operation) {
 case 129:
  if (VAR_4->u.event.value > 0) {

   if (VAR_4->u.event.id & VAR_0)
    FUNC_0(VAR_3, 0);
   if (VAR_4->u.event.id & VAR_1)
    FUNC_0(VAR_3, 1);
   if (VAR_4->u.event.id & VAR_2)
    FUNC_0(VAR_3, 2);
  } else {

   FUNC_0(VAR_3, 3);
  }
  break;
 case 128:
  if (VAR_4->u.data.z < 0) {

   FUNC_0(VAR_3, 64);
  } else if (VAR_4->u.data.z > 0) {

   FUNC_0(VAR_3, 65);
  }
  break;
 }
}
