
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int error; int transferred; } ;
typedef TYPE_1__ xdma_transfer_status_t ;
typedef int uint32_t ;
struct xdma_channel {int dummy; } ;
struct softdma_softc {int dummy; } ;
struct softdma_desc {int control; scalar_t__ direction; struct softdma_desc* next; } ;
struct softdma_channel {size_t idx_tail; int descs_used_count; struct softdma_desc* descs; struct xdma_channel* xchan; struct softdma_softc* sc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 size_t FUNC_1 (struct softdma_channel*,size_t) ;
 int FUNC_2 (struct softdma_channel*,struct softdma_desc*) ;
 int FUNC_3 (struct softdma_channel*,struct softdma_desc*) ;
 int FUNC_4 (struct xdma_channel*,TYPE_1__*) ;

__attribute__((used)) static uint32_t
FUNC_5(struct softdma_channel *VAR_2,
    xdma_transfer_status_t *VAR_3)
{
 struct xdma_channel *VAR_4;
 struct softdma_desc *VAR_5;
 struct softdma_softc *VAR_6;
 xdma_transfer_status_t VAR_7;
 int VAR_8;

 VAR_6 = VAR_2->sc;

 VAR_4 = VAR_2->xchan;

 VAR_5 = &VAR_2->descs[VAR_2->idx_tail];

 while (VAR_5 != ((void*)0)) {

  if ((VAR_5->control & VAR_0) == 0) {
   break;
  }

  if (VAR_5->direction == VAR_1) {
   VAR_8 = FUNC_3(VAR_2, VAR_5);
  } else {
   VAR_8 = FUNC_2(VAR_2, VAR_5);
   if (VAR_8 == 0) {

    break;
   }
  }


  VAR_5->control = 0;

  if (VAR_8 >= 0) {
   VAR_7.error = 0;
   VAR_7.transferred = VAR_8;
  } else {
   VAR_7.error = VAR_8;
   VAR_7.transferred = 0;
  }

  FUNC_4(VAR_4, &VAR_7);
  FUNC_0(&VAR_2->descs_used_count, 1);

  if (VAR_8 >= 0) {
   VAR_3->transferred += VAR_8;
  } else {
   VAR_3->error = 1;
   break;
  }

  VAR_2->idx_tail = FUNC_1(VAR_2, VAR_2->idx_tail);


  VAR_5 = VAR_5->next;
 }

 return (0);
}
