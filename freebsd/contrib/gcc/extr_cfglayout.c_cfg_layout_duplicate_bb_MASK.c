
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* rtx ;
typedef TYPE_3__* basic_block ;
struct TYPE_15__ {int prev_bb; } ;
struct TYPE_13__ {TYPE_1__* rtl; } ;
struct TYPE_14__ {TYPE_2__ il; } ;
struct TYPE_12__ {void* global_live_at_end; void* global_live_at_start; void* footer; void* header; } ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 void* FUNC_2 (TYPE_3__*) ;
 void* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (void*,void*) ;
 TYPE_7__* VAR_0 ;
 void* FUNC_5 (void*) ;
 TYPE_3__* FUNC_6 (void*,int *,int ) ;
 void* FUNC_7 (void*,void*) ;
 int * FUNC_8 () ;
 int VAR_1 ;
 void* FUNC_9 (void*,int *) ;

basic_block
FUNC_10 (basic_block VAR_2)
{
  rtx VAR_3;
  basic_block VAR_4;

  VAR_3 = FUNC_7 (FUNC_3 (VAR_2), FUNC_2 (VAR_2));
  VAR_4 = FUNC_6 (VAR_3,
          VAR_3 ? FUNC_8 () : ((void*)0),
          VAR_0->prev_bb);

  FUNC_1 (VAR_4, VAR_2);
  if (VAR_2->il.rtl->header)
    {
      VAR_3 = VAR_2->il.rtl->header;
      while (FUNC_5 (VAR_3))
 VAR_3 = FUNC_5 (VAR_3);
      VAR_3 = FUNC_7 (VAR_2->il.rtl->header, VAR_3);
      if (VAR_3)
 VAR_4->il.rtl->header = FUNC_9 (VAR_3, FUNC_8 ());
    }

  if (VAR_2->il.rtl->footer)
    {
      VAR_3 = VAR_2->il.rtl->footer;
      while (FUNC_5 (VAR_3))
 VAR_3 = FUNC_5 (VAR_3);
      VAR_3 = FUNC_7 (VAR_2->il.rtl->footer, VAR_3);
      if (VAR_3)
 VAR_4->il.rtl->footer = FUNC_9 (VAR_3, FUNC_8 ());
    }

  if (VAR_2->il.rtl->global_live_at_start)
    {
      VAR_4->il.rtl->global_live_at_start = FUNC_0 (&VAR_1);
      VAR_4->il.rtl->global_live_at_end = FUNC_0 (&VAR_1);
      FUNC_4 (VAR_4->il.rtl->global_live_at_start,
      VAR_2->il.rtl->global_live_at_start);
      FUNC_4 (VAR_4->il.rtl->global_live_at_end,
      VAR_2->il.rtl->global_live_at_end);
    }

  return VAR_4;
}
