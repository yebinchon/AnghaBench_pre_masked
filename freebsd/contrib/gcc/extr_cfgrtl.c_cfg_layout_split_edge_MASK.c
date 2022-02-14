
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef TYPE_5__* edge ;
typedef TYPE_6__* basic_block ;
struct TYPE_16__ {TYPE_1__* rtl; } ;
struct TYPE_20__ {TYPE_2__ il; } ;
struct TYPE_19__ {scalar_t__ src; TYPE_10__* dest; } ;
struct TYPE_18__ {TYPE_3__* rtl; } ;
struct TYPE_17__ {int global_live_at_start; } ;
struct TYPE_15__ {void* global_live_at_end; void* global_live_at_start; } ;
struct TYPE_14__ {TYPE_4__ il; } ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (void*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 TYPE_6__* FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_6__*,TYPE_10__*,int ) ;
 int FUNC_7 (TYPE_5__*,TYPE_6__*) ;
 int VAR_3 ;

__attribute__((used)) static basic_block
FUNC_8 (edge VAR_4)
{
  basic_block VAR_5 =
    FUNC_4 (VAR_4->src != VAR_1
   ? FUNC_3 (FUNC_1 (VAR_4->src)) : FUNC_5 (),
   VAR_2, VAR_4->src);



  if (VAR_4->dest->il.rtl->global_live_at_start)
    {
      VAR_5->il.rtl->global_live_at_start = FUNC_0 (&VAR_3);
      VAR_5->il.rtl->global_live_at_end = FUNC_0 (&VAR_3);
      FUNC_2 (VAR_5->il.rtl->global_live_at_start,
      VAR_4->dest->il.rtl->global_live_at_start);
      FUNC_2 (VAR_5->il.rtl->global_live_at_end,
      VAR_4->dest->il.rtl->global_live_at_start);
    }

  FUNC_6 (VAR_5, VAR_4->dest, VAR_0);
  FUNC_7 (VAR_4, VAR_5);

  return VAR_5;
}
