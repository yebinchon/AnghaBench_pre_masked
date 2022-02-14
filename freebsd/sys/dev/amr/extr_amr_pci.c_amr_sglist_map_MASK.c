
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {int amr_sgbusaddr; struct amr_sgentry* amr_sgtable; struct amr_sg64entry* amr_sg64table; int amr_sg_dmamap; int amr_sg_dmat; int amr_dev; int amr_parent_dmat; } ;
struct amr_sgentry {int dummy; } ;
struct amr_sg64entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct amr_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int,int ,int ,int ,int *,int *,size_t,int,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,void*,size_t,int ,int*,int ) ;
 int FUNC_3 (int ,void**,int ,int *) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(struct amr_softc *VAR_8)
{
    size_t VAR_9;
    void *VAR_10;
    int VAR_11;

    FUNC_5(1);
    if (FUNC_0(VAR_8))
 VAR_9 = sizeof(struct amr_sg64entry) * VAR_1 * VAR_0;
    else
 VAR_9 = sizeof(struct amr_sgentry) * VAR_1 * VAR_0;

    VAR_11 = FUNC_1(VAR_8->amr_parent_dmat,
          512, 0,
          VAR_4,
          VAR_3,
          ((void*)0), ((void*)0),
          VAR_9, 1,
          VAR_5,
          0,
          ((void*)0), ((void*)0),
          &VAR_8->amr_sg_dmat);
    if (VAR_11 != 0) {
 FUNC_6(VAR_8->amr_dev, "can't allocate scatter/gather DMA tag\n");
 return(VAR_6);
    }
retry:
    VAR_11 = FUNC_3(VAR_8->amr_sg_dmat, (void **)&VAR_10, VAR_2, &VAR_8->amr_sg_dmamap);
    if (VAR_11) {
 FUNC_6(VAR_8->amr_dev, "can't allocate s/g table\n");
 return(VAR_6);
    }
    FUNC_2(VAR_8->amr_sg_dmat, VAR_8->amr_sg_dmamap, VAR_10, VAR_9, VAR_7, &VAR_8->amr_sgbusaddr, 0);
    if (VAR_8->amr_sgbusaddr < 0x2000) {
 FUNC_4(1, "s/g table too low (0x%x), reallocating\n", VAR_8->amr_sgbusaddr);
 goto retry;
    }

    if (FUNC_0(VAR_8))
 VAR_8->amr_sg64table = (struct amr_sg64entry *)VAR_10;
    VAR_8->amr_sgtable = (struct amr_sgentry *)VAR_10;

    return(0);
}
