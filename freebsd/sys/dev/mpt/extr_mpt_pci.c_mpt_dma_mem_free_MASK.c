
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {int * request_pool; int * reply_dmat; int * parent_dmat; int reply_dmap; int reply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct mpt_softc*,int ,char*) ;

__attribute__((used)) static void
FUNC_5(struct mpt_softc *VAR_2)
{


        if (VAR_2->reply_dmat == 0) {
  FUNC_4(VAR_2, VAR_0, "already released dma memory\n");
  return;
        }

 FUNC_1(VAR_2->reply_dmat, VAR_2->reply_dmap);
 FUNC_2(VAR_2->reply_dmat, VAR_2->reply, VAR_2->reply_dmap);
 FUNC_0(VAR_2->reply_dmat);
 FUNC_0(VAR_2->parent_dmat);
 VAR_2->reply_dmat = ((void*)0);
 FUNC_3(VAR_2->request_pool, VAR_1);
 VAR_2->request_pool = ((void*)0);
}
