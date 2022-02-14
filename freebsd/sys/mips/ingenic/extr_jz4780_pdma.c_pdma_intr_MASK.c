
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ error; } ;
typedef TYPE_1__ xdma_transfer_status_t ;
typedef int xdma_channel_t ;
struct xdma_request {int block_num; } ;
struct pdma_softc {int dummy; } ;
struct pdma_channel {int flags; int cur_desc; int * xchan; int index; struct xdma_request* req; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pdma_softc*,int ) ;
 int FUNC_2 (struct pdma_softc*,int ,int ) ;
 int FUNC_3 (struct pdma_softc*,struct pdma_channel*) ;
 struct pdma_channel* VAR_3 ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_4)
{
 struct xdma_request *VAR_5;
 xdma_transfer_status_t VAR_6;
 struct pdma_channel *VAR_7;
 struct pdma_softc *VAR_8;
 xdma_channel_t *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_8 = VAR_4;

 VAR_10 = FUNC_1(VAR_8, VAR_1);


 FUNC_2(VAR_8, VAR_1, 0);

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (VAR_10 & (1 << VAR_11)) {
   VAR_7 = &VAR_3[VAR_11];
   VAR_9 = VAR_7->xchan;
   VAR_5 = VAR_7->req;




   FUNC_2(VAR_8, FUNC_0(VAR_7->index), 0);

   if (VAR_7->flags & VAR_0) {

    VAR_7->cur_desc = (VAR_7->cur_desc + 1) % VAR_5->block_num;

    FUNC_3(VAR_8, VAR_7);
   }

   VAR_6.error = 0;
   FUNC_4(VAR_7->xchan, &VAR_6);
  }
 }
}
