
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int token; int enabled; } ;
typedef TYPE_2__ bc_entry ;
typedef int attr_val_fifo ;
struct TYPE_6__ {int i; } ;
struct TYPE_8__ {TYPE_1__ value; struct TYPE_8__* link; } ;
typedef TYPE_3__ attr_val ;


 TYPE_3__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__* VAR_13 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int,int,int *) ;

__attribute__((used)) static void
FUNC_3(
 attr_val_fifo * VAR_14,
 int VAR_15
 )
{
 attr_val *VAR_16;
 int VAR_17;




 for (VAR_16 = FUNC_0(VAR_14);
      VAR_16 != ((void*)0);
      VAR_16 = VAR_16->link) {

  VAR_17 = VAR_16->value.i;
  switch (VAR_17) {

  default:
   FUNC_1(VAR_0,
    "can not apply enable/disable token %d, unknown",
    VAR_17);
   break;

  case 140:
   FUNC_2(VAR_1, VAR_15, 0., ((void*)0));
   break;

  case 138:
   FUNC_2(VAR_2, VAR_15, 0., ((void*)0));
   break;

  case 137:
   FUNC_2(VAR_3, VAR_15, 0., ((void*)0));
   break;

  case 136:
   FUNC_2(VAR_5, VAR_15, 0., ((void*)0));
   break;

  case 134:
   FUNC_2(VAR_7, VAR_15, 0., ((void*)0));
   break;

  case 135:
   FUNC_2(VAR_6, VAR_15, 0., ((void*)0));
   break;

  case 133:
   FUNC_2(VAR_8, VAR_15, 0., ((void*)0));
   break;

  case 132:
   FUNC_2(VAR_9, VAR_15, 0., ((void*)0));
   break;

  case 131:
   FUNC_2(VAR_4, VAR_15, 0., ((void*)0));
   break;

  case 130:
   FUNC_2(VAR_10, VAR_15, 0., ((void*)0));
   break;

  case 129:
   FUNC_2(VAR_11, VAR_15, 0., ((void*)0));
   break;

  case 128:
   FUNC_2(VAR_12, VAR_15, 0., ((void*)0));
   break;
  }
 }
}
