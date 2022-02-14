
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deps {int pending_flush_length; int last_pending_memory_flush; scalar_t__ pending_lists_length; int pending_write_mems; int pending_write_insns; int pending_read_mems; int pending_read_insns; } ;
typedef int rtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3 (struct deps *VAR_3, rtx VAR_4, int VAR_5,
       int VAR_6)
{
  if (VAR_6)
    {
      FUNC_0 (VAR_4, &VAR_3->pending_read_insns, 1,
        VAR_1);
      FUNC_2 (&VAR_3->pending_read_mems);
    }

  FUNC_0 (VAR_4, &VAR_3->pending_write_insns, 1,
    VAR_5 ? VAR_1 : VAR_2);
  FUNC_2 (&VAR_3->pending_write_mems);
  VAR_3->pending_lists_length = 0;

  FUNC_0 (VAR_4, &VAR_3->last_pending_memory_flush, 1,
    VAR_5 ? VAR_1 : VAR_2);
  VAR_3->last_pending_memory_flush = FUNC_1 (VAR_4, VAR_0);
  VAR_3->pending_flush_length = 1;
}
