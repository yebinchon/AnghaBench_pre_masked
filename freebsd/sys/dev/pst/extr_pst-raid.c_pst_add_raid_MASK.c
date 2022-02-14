
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pst_softc {struct i2o_lct_entry* lct; struct iop_softc* iop; } ;
struct iop_softc {int dev; } ;
struct i2o_lct_entry {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct pst_softc*) ;
 struct pst_softc* FUNC_4 (int,int ,int) ;

int
FUNC_5(struct iop_softc *VAR_4, struct i2o_lct_entry *VAR_5)
{
    struct pst_softc *VAR_6;
    device_t VAR_7 = FUNC_0(VAR_4->dev, "pst", -1);

    if (!VAR_7)
 return VAR_0;
    if (!(VAR_6 = FUNC_4(sizeof(struct pst_softc),
         VAR_2, VAR_1 | VAR_3))) {
 FUNC_1(VAR_4->dev, VAR_7);
 return VAR_0;
    }
    VAR_6->iop = VAR_4;
    VAR_6->lct = VAR_5;
    FUNC_3(VAR_7, VAR_6);
    return FUNC_2(VAR_7);
}
