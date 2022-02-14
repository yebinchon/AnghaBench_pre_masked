
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct print_buf {int dummy; } ;
struct link {int out_queue_size; scalar_t__ deferred_inqueue_sz; TYPE_3__* newest_deferred_in; TYPE_3__* oldest_deferred_in; TYPE_3__* last_out; TYPE_3__* next_out; TYPE_3__* first_out; scalar_t__ next_in_no; scalar_t__ next_out_no; TYPE_2__* b_ptr; int addr; } ;
struct TYPE_6__ {int * next; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_5__ {TYPE_1__ publ; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct link*) ;
 scalar_t__ FUNC_2 (struct link*) ;
 scalar_t__ FUNC_3 (struct link*) ;
 scalar_t__ FUNC_4 (struct link*) ;
 scalar_t__ FUNC_5 (struct link*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct print_buf*,char const*,...) ;

__attribute__((used)) static void FUNC_9(struct link *VAR_0, struct print_buf *VAR_1,
         const char *VAR_2)
{
 FUNC_8(VAR_1, VAR_2);
 if (FUNC_2(VAR_0) || FUNC_3(VAR_0))
  return;
 FUNC_8(VAR_1, "Link %x<%s>:",
      VAR_0->addr, VAR_0->b_ptr->publ.name);
 FUNC_8(VAR_1, ": NXO(%u):", FUNC_6(VAR_0->next_out_no));
 FUNC_8(VAR_1, "NXI(%u):", FUNC_6(VAR_0->next_in_no));
 FUNC_8(VAR_1, "SQUE");
 if (VAR_0->first_out) {
  FUNC_8(VAR_1, "[%u..", FUNC_7(FUNC_0(VAR_0->first_out)));
  if (VAR_0->next_out)
   FUNC_8(VAR_1, "%u..",
        FUNC_7(FUNC_0(VAR_0->next_out)));
  FUNC_8(VAR_1, "%u]",
       FUNC_7(FUNC_0
          (VAR_0->last_out)), VAR_0->out_queue_size);
  if ((FUNC_6(FUNC_7(FUNC_0(VAR_0->last_out)) -
    FUNC_7(FUNC_0(VAR_0->first_out)))
       != (VAR_0->out_queue_size - 1))
      || (VAR_0->last_out->next != ((void*)0))) {
   FUNC_8(VAR_1, "\nSend queue inconsistency\n");
   FUNC_8(VAR_1, "first_out= %x ", VAR_0->first_out);
   FUNC_8(VAR_1, "next_out= %x ", VAR_0->next_out);
   FUNC_8(VAR_1, "last_out= %x ", VAR_0->last_out);
   FUNC_1(VAR_0);
  }
 } else
  FUNC_8(VAR_1, "[]");
 FUNC_8(VAR_1, "SQSIZ(%u)", VAR_0->out_queue_size);
 if (VAR_0->oldest_deferred_in) {
  u32 VAR_3 = FUNC_7(FUNC_0(VAR_0->oldest_deferred_in));
  u32 VAR_4 = FUNC_7(FUNC_0(VAR_0->newest_deferred_in));
  FUNC_8(VAR_1, ":RQUE[%u..%u]", VAR_3, VAR_4);
  if (VAR_0->deferred_inqueue_sz != FUNC_6((VAR_4 + 1) - VAR_3)) {
   FUNC_8(VAR_1, ":RQSIZ(%u)",
        VAR_0->deferred_inqueue_sz);
  }
 }
 if (FUNC_4(VAR_0))
  FUNC_8(VAR_1, ":WU");
 if (FUNC_2(VAR_0))
  FUNC_8(VAR_1, ":RR");
 if (FUNC_3(VAR_0))
  FUNC_8(VAR_1, ":RU");
 if (FUNC_5(VAR_0))
  FUNC_8(VAR_1, ":WW");
 FUNC_8(VAR_1, "\n");
}
