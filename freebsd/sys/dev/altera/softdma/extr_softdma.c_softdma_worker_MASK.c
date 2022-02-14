
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ transferred; scalar_t__ error; } ;
typedef TYPE_1__ xdma_transfer_status_t ;
struct softdma_softc {int dummy; } ;
struct softdma_channel {scalar_t__ run; int mtx; int xchan; struct softdma_softc* sc; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct softdma_channel*,int *,int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct softdma_channel*,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1)
{
 xdma_transfer_status_t VAR_2;
 struct softdma_channel *VAR_3;
 struct softdma_softc *VAR_4;

 VAR_3 = VAR_1;

 VAR_4 = VAR_3->sc;

 while (1) {
  FUNC_0(&VAR_3->mtx);

  do {
   FUNC_1(VAR_3, &VAR_3->mtx, 0, "softdma_wait", VAR_0 / 2);
  } while (VAR_3->run == 0);

  VAR_2.error = 0;
  VAR_2.transferred = 0;

  FUNC_3(VAR_3, &VAR_2);


  VAR_3->run = 0;
  FUNC_4(VAR_3->xchan, &VAR_2);

  FUNC_2(&VAR_3->mtx);
 }

}
