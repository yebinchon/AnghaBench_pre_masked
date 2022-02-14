
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int buf ;
typedef int VCHIQ_STATE_T ;
struct TYPE_5__ {scalar_t__ use_count; scalar_t__ release_count; } ;
typedef TYPE_1__ VCHIQ_SLOT_INFO_T ;
struct TYPE_6__ {int slot_first; int slot_last; int tx_pos; int slot_queue_recycle; int* debug; } ;
typedef TYPE_2__ VCHIQ_SHARED_STATE_T ;


 size_t VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int,char*,...) ;
 int FUNC_2 (void*,char*,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, VCHIQ_STATE_T *VAR_2,
 VCHIQ_SHARED_STATE_T *VAR_3, const char *VAR_4)
{
 static const char *const VAR_5[] = {
  "<entries>",
  "SLOT_HANDLER_COUNT",
  "SLOT_HANDLER_LINE",
  "PARSE_LINE",
  "PARSE_HEADER",
  "PARSE_MSGID",
  "AWAIT_COMPLETION_LINE",
  "DEQUEUE_MESSAGE_LINE",
  "SERVICE_CALLBACK_LINE",
  "MSG_QUEUE_FULL_COUNT",
  "COMPLETION_QUEUE_FULL_COUNT"
 };
 int VAR_6;

 char VAR_7[80];
 int VAR_8;
 VAR_8 = FUNC_1(VAR_7, sizeof(VAR_7),
  "  %s: slots %d-%d tx_pos=%x recycle=%x",
  VAR_4, VAR_3->slot_first, VAR_3->slot_last,
  VAR_3->tx_pos, VAR_3->slot_queue_recycle);
 FUNC_2(VAR_1, VAR_7, VAR_8 + 1);

 VAR_8 = FUNC_1(VAR_7, sizeof(VAR_7),
  "    Slots claimed:");
 FUNC_2(VAR_1, VAR_7, VAR_8 + 1);

 for (VAR_6 = VAR_3->slot_first; VAR_6 <= VAR_3->slot_last; VAR_6++) {
  VCHIQ_SLOT_INFO_T VAR_9 = *FUNC_0(VAR_2, VAR_6);
  if (VAR_9.use_count != VAR_9.release_count) {
   VAR_8 = FUNC_1(VAR_7, sizeof(VAR_7),
    "      %d: %d/%d", VAR_6, VAR_9.use_count,
    VAR_9.release_count);
   FUNC_2(VAR_1, VAR_7, VAR_8 + 1);
  }
 }

 for (VAR_6 = 1; VAR_6 < VAR_3->debug[VAR_0]; VAR_6++) {
  VAR_8 = FUNC_1(VAR_7, sizeof(VAR_7), "    DEBUG: %s = %d(%x)",
   VAR_5[VAR_6], VAR_3->debug[VAR_6], VAR_3->debug[VAR_6]);
  FUNC_2(VAR_1, VAR_7, VAR_8 + 1);
 }
}
