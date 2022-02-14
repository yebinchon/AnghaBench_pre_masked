
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct al_udma {int state; scalar_t__ type; TYPE_5__* udma_regs; int name; } ;
typedef enum al_udma_state { ____Placeholder_al_udma_state } al_udma_state ;
struct TYPE_8__ {int change_state; } ;
struct TYPE_9__ {TYPE_3__ s2m; } ;
struct TYPE_6__ {int change_state; } ;
struct TYPE_7__ {TYPE_1__ m2s; } ;
struct TYPE_10__ {TYPE_4__ s2m; TYPE_2__ m2s; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int,...) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,scalar_t__) ;
 int * VAR_5 ;

int FUNC_4(struct al_udma *VAR_6, enum al_udma_state VAR_7)
{
 uint32_t VAR_8;

 FUNC_0(VAR_6 != ((void*)0));
 if (VAR_7 == VAR_6->state)
  FUNC_1("udma [%s]: requested state identical to "
   "current state (%d)\n", VAR_6->name, VAR_7);

 FUNC_1("udma [%s]: change state from (%s) to (%s)\n",
   VAR_6->name, VAR_5[VAR_6->state],
   VAR_5[VAR_7]);

 VAR_8 = 0;
 switch (VAR_7) {
 case 129:
  VAR_8 |= VAR_2;
  break;
 case 128:
  VAR_8 |= VAR_3;
  break;
 case 130:
  VAR_8 |= VAR_1;
  break;
 default:
  FUNC_2("udma: invalid state (%d)\n", VAR_7);
  return -VAR_0;
 }

 if (VAR_6->type == VAR_4)
  FUNC_3(&VAR_6->udma_regs->m2s.m2s.change_state, VAR_8);
 else
  FUNC_3(&VAR_6->udma_regs->s2m.s2m.change_state, VAR_8);

 VAR_6->state = VAR_7;
 return 0;
}
