
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union amr_ccb {int dummy; } amr_ccb ;
struct amr_softc {int amr_ccb; int amr_ccb_busaddr; int amr_ccb_dmamap; int amr_ccb_dmat; int amr_dev; int amr_parent_dmat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int ,int,int ,int *,int ) ;
 int FUNC_2 (int ,void**,int ,int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct amr_softc *VAR_6)
{
    int VAR_7, VAR_8;





    VAR_7 = sizeof(union amr_ccb) * VAR_0;
    VAR_8 = FUNC_0(VAR_6->amr_parent_dmat,
    128, 0,
    VAR_3,
    VAR_2,
    ((void*)0), ((void*)0),
    VAR_7,
    1,
    VAR_7,
    0,
    ((void*)0), ((void*)0),
    &VAR_6->amr_ccb_dmat);
    if (VAR_8 != 0) {
 FUNC_4(VAR_6->amr_dev, "can't allocate ccb tag\n");
 return (VAR_4);
    }

    VAR_8 = FUNC_2(VAR_6->amr_ccb_dmat, (void **)&VAR_6->amr_ccb,
        VAR_1, &VAR_6->amr_ccb_dmamap);
    if (VAR_8) {
 FUNC_4(VAR_6->amr_dev, "can't allocate ccb memory\n");
 return (VAR_4);
    }
    FUNC_1(VAR_6->amr_ccb_dmat, VAR_6->amr_ccb_dmamap, VAR_6->amr_ccb,
      VAR_7, VAR_5, &VAR_6->amr_ccb_busaddr, 0);
    FUNC_3(VAR_6->amr_ccb, VAR_7);

    return (0);
}
