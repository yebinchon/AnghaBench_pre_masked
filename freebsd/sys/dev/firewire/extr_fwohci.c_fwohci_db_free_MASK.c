
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fwohcidb_tr {int * dma_map; int * buf; } ;
struct TYPE_2__ {int flag; int psize; } ;
struct fwohci_dbch {int flags; int ndb; int db_trq; int am; int dmat; TYPE_1__ xferq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fwohcidb_tr* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct fwohcidb_tr* FUNC_2 (struct fwohcidb_tr*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct fwohcidb_tr*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(struct fwohci_dbch *VAR_4)
{
 struct fwohcidb_tr *VAR_5;
 int VAR_6;

 if ((VAR_4->flags & VAR_0) == 0)
  return;

 for (VAR_5 = FUNC_0(&VAR_4->db_trq), VAR_6 = 0; VAR_6 < VAR_4->ndb;
     VAR_5 = FUNC_2(VAR_5, VAR_3), VAR_6++) {
  if ((VAR_4->xferq.flag & VAR_1) == 0 &&
      VAR_5->buf != ((void*)0)) {
   FUNC_6(VAR_4->dmat, VAR_5->dma_map,
     VAR_5->buf, VAR_4->xferq.psize);
   VAR_5->buf = ((void*)0);
  } else if (VAR_5->dma_map != ((void*)0))
   FUNC_3(VAR_4->dmat, VAR_5->dma_map);
 }
 VAR_4->ndb = 0;
 VAR_5 = FUNC_0(&VAR_4->db_trq);
 FUNC_5(VAR_4->am);
 FUNC_4(VAR_5, VAR_2);
 FUNC_1(&VAR_4->db_trq);
 VAR_4->flags &= ~VAR_0;
}
