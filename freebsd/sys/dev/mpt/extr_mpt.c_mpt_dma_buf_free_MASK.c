
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpt_softc {scalar_t__ request_dmat; scalar_t__ buffer_dmat; int request_dmap; int request; TYPE_1__* request_pool; } ;
struct TYPE_2__ {int dmap; } ;


 int FUNC_0 (struct mpt_softc*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (struct mpt_softc*,int ,char*) ;

__attribute__((used)) static void
FUNC_6(struct mpt_softc *VAR_1)
{
 int VAR_2;

 if (VAR_1->request_dmat == 0) {
  FUNC_5(VAR_1, VAR_0, "already released dma memory\n");
  return;
 }
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
  FUNC_2(VAR_1->buffer_dmat, VAR_1->request_pool[VAR_2].dmap);
 }
 FUNC_3(VAR_1->request_dmat, VAR_1->request_dmap);
 FUNC_4(VAR_1->request_dmat, VAR_1->request, VAR_1->request_dmap);
 FUNC_1(VAR_1->request_dmat);
 VAR_1->request_dmat = 0;
 FUNC_1(VAR_1->buffer_dmat);
}
