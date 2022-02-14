
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_softc {int io_lock; int data_tag; } ;
struct mrsas_mpt_cmd {int flags; int data_dmamap; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct mrsas_softc *VAR_4, struct mrsas_mpt_cmd *VAR_5)
{
 if (VAR_5->data != ((void*)0)) {
  if (VAR_5->flags & VAR_2)
   FUNC_0(VAR_4->data_tag, VAR_5->data_dmamap, VAR_0);
  if (VAR_5->flags & VAR_3)
   FUNC_0(VAR_4->data_tag, VAR_5->data_dmamap, VAR_1);
  FUNC_2(&VAR_4->io_lock);
  FUNC_1(VAR_4->data_tag, VAR_5->data_dmamap);
  FUNC_3(&VAR_4->io_lock);
 }
}
