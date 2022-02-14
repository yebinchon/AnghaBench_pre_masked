
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {int ciss_soft_reset; int ciss_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct ciss_softc *VAR_2)
{

    FUNC_0(FUNC_2(VAR_2->ciss_dev),
 FUNC_1(FUNC_3(VAR_2->ciss_dev)),
 VAR_1, "soft_reset", VAR_0, &VAR_2->ciss_soft_reset, 0, "");
}
