
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_6__ {size_t size; int * data; int direction; TYPE_1__* conn; int complete1; scalar_t__ addr; } ;
struct xfer_transaction {TYPE_3__ transaction; struct xfer_state* xfer_state; } ;
struct xfer_state {scalar_t__ pos; scalar_t__ status; int budget; int inflight_count; int error_count; int done_count; int start_count; TYPE_2__* xfer; } ;
struct TYPE_5__ {scalar_t__ addr; size_t size; TYPE_1__* conn; int direction; int * data; } ;
struct TYPE_4__ {int fdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct xfer_transaction*) ;
 struct xfer_transaction* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*,size_t,int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,char*,int,int ,int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_6(struct xfer_state *VAR_9)
{
 struct xfer_transaction *VAR_10;
 size_t VAR_11, VAR_12, VAR_13;
 u64 VAR_14, VAR_15;
 u8 *VAR_16;
 int VAR_17 = 0;

 VAR_15 = FUNC_3(VAR_9->xfer->conn->fdev);
 VAR_13 = (VAR_9->xfer->addr + VAR_9->pos < VAR_15) ?
      sizeof(u32) : (1 << VAR_7);

 do {
  if (VAR_9->status != VAR_5) {
   VAR_17 = -VAR_1;
   break;
  }

  VAR_11 = VAR_9->xfer->size - VAR_9->pos;
  if (!VAR_11)
   break;

  VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_3);
  if (!VAR_10) {
   VAR_17 = -VAR_2;
   break;
  }

  VAR_14 = VAR_9->xfer->addr + VAR_9->pos;
  VAR_16 = VAR_9->xfer->data + VAR_9->pos;


  VAR_12 = VAR_13 - (VAR_14 & (VAR_13 - 1));
  if (VAR_12 > VAR_6)
   VAR_12 = VAR_6;
  if (VAR_12 > VAR_11)
   VAR_12 = VAR_11;

  VAR_10->xfer_state = VAR_9;
  VAR_10->transaction.addr = VAR_14;
  VAR_10->transaction.complete1 = VAR_8;
  VAR_10->transaction.conn = VAR_9->xfer->conn;
  VAR_10->transaction.data = VAR_16;
  VAR_10->transaction.direction = VAR_9->xfer->direction;
  VAR_10->transaction.size = VAR_12;

  VAR_9->start_count++;
  VAR_9->inflight_count++;
  FUNC_2(VAR_9->xfer->conn->fdev, "Starting %zu bytes at %p done; %u started %u inflight %u done %u error\n",
         VAR_10->transaction.size,
         VAR_10->transaction.data,
         VAR_9->start_count,
         VAR_9->inflight_count,
         VAR_9->done_count,
         VAR_9->error_count);
  VAR_17 = FUNC_4(&VAR_10->transaction);
  if (VAR_17) {
   VAR_9->start_count--;
   VAR_9->inflight_count--;
   if (VAR_17 == -VAR_0)
    VAR_17 = 0;

   if (VAR_17) {
    FUNC_5(VAR_9->xfer->conn->fdev, "Transfer failed to start transaction: %d. %u started %u done %u error\n",
            VAR_17, VAR_9->start_count,
            VAR_9->done_count,
            VAR_9->error_count);
    VAR_9->status = VAR_4;
   }
   FUNC_0(VAR_10);
   break;
  }
  VAR_9->pos += VAR_12;
  if (VAR_9->inflight_count >= VAR_9->budget)
   break;
 } while (VAR_12 != VAR_11);

 return VAR_17;
}
