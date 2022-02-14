
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct read_map_ctxt {int tail; int next; int proc; } ;
struct TYPE_2__ {int tail; int head; } ;
typedef TYPE_1__ ldr_context_t ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_3 (struct read_map_ctxt *VAR_3)
{
  CORE_ADDR VAR_4, VAR_5, VAR_6;
  ldr_context_t VAR_7;

  if (FUNC_2 ((CORE_ADDR) VAR_1,
     (char *) &VAR_4,
     sizeof (CORE_ADDR)) != 0)
    return 0;
  if (FUNC_2 (VAR_4,
     (char *) &VAR_7,
     sizeof (ldr_context_t)) != 0)
    return 0;
  VAR_3->next = VAR_7.head;
  VAR_3->tail = VAR_7.tail;

  return 1;
}
