
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mly_softc {int mly_sg_table; int mly_sg_dmamap; int mly_sg_dmat; int mly_parent_dmat; } ;
struct mly_sg_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,size_t,int,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,size_t,int ,struct mly_softc*,int ) ;
 scalar_t__ FUNC_2 (int ,void**,int ,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mly_softc*,char*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_5(struct mly_softc *VAR_8)
{
    size_t VAR_9;

    FUNC_3(1);





    VAR_9 = sizeof(struct mly_sg_entry) * VAR_5 *VAR_6;
    if (FUNC_0(VAR_8->mly_parent_dmat,
      1, 0,
      VAR_2,
      VAR_2,
      ((void*)0), ((void*)0),
      VAR_9, 1,
      VAR_3,
      VAR_0,
      ((void*)0), ((void*)0),
      &VAR_8->mly_sg_dmat)) {
 FUNC_4(VAR_8, "can't allocate scatter/gather DMA tag\n");
 return(VAR_4);
    }
    if (FUNC_2(VAR_8->mly_sg_dmat, (void **)&VAR_8->mly_sg_table,
    VAR_1, &VAR_8->mly_sg_dmamap)) {
 FUNC_4(VAR_8, "can't allocate s/g table\n");
 return(VAR_4);
    }
    if (FUNC_1(VAR_8->mly_sg_dmat, VAR_8->mly_sg_dmamap, VAR_8->mly_sg_table,
   VAR_9, VAR_7, VAR_8, VAR_1) != 0)
 return (VAR_4);
    return(0);
}
