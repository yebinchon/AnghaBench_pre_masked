
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
struct al_udma {scalar_t__ type; TYPE_5__* udma_regs; } ;
typedef enum al_udma_state { ____Placeholder_al_udma_state } al_udma_state ;
struct TYPE_8__ {int state; } ;
struct TYPE_9__ {TYPE_3__ s2m; } ;
struct TYPE_6__ {int state; } ;
struct TYPE_7__ {TYPE_1__ m2s; } ;
struct TYPE_10__ {TYPE_4__ s2m; TYPE_2__ m2s; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;

enum al_udma_state FUNC_3(struct al_udma *VAR_15)
{
 uint32_t VAR_16;
 uint32_t VAR_17;
 uint32_t VAR_18;
 uint32_t VAR_19;
 uint32_t VAR_20;

 if (VAR_15->type == VAR_14)
  VAR_16 = FUNC_2(&VAR_15->udma_regs->m2s.m2s.state);
 else
  VAR_16 = FUNC_2(&VAR_15->udma_regs->s2m.s2m.state);

 VAR_17 = FUNC_0(VAR_16,
         VAR_2,
         VAR_3);
 VAR_18 = FUNC_0(VAR_16,
         VAR_8,
         VAR_9);
 VAR_19 = FUNC_0(VAR_16,
       VAR_4,
       VAR_5);
 VAR_20 = FUNC_0(VAR_16,
         VAR_6,
         VAR_7);

 FUNC_1(VAR_17 != VAR_13);
 FUNC_1(VAR_18 != VAR_13);
 FUNC_1(VAR_19 != VAR_13);
 FUNC_1(VAR_20 != VAR_13);


 if ((VAR_17 == VAR_11) || (VAR_18 == VAR_11)
   || (VAR_19 == VAR_11)
   || (VAR_20 == VAR_11))
  return VAR_0;


 if ((VAR_17 == VAR_12)
   || (VAR_18 == VAR_12)
   || (VAR_19 == VAR_12)
   || (VAR_20 == VAR_12))
  return VAR_10;

 return VAR_1;
}
