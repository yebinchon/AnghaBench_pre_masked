
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsb_softc {int mtx; int * clk; int * rst; int res; int * iicbus; int type; } ;
typedef int device_t ;
struct TYPE_2__ {int ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int **) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int * FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ) ;
 struct rsb_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int ,int ,int **) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,char*,int ) ;
 TYPE_1__* FUNC_15 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_16(device_t VAR_4)
{
 struct rsb_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_8(VAR_4);
 FUNC_14(&VAR_5->mtx, FUNC_7(VAR_4), "rsb", VAR_1);

 VAR_5->type = FUNC_15(VAR_4, VAR_2)->ocd_data;

 if (FUNC_4(VAR_4, 0, 0, &VAR_5->clk) == 0) {
  VAR_6 = FUNC_3(VAR_5->clk);
  if (VAR_6 != 0) {
   FUNC_9(VAR_4, "cannot enable clock\n");
   goto fail;
  }
 }
 if (FUNC_11(VAR_4, 0, 0, &VAR_5->rst) == 0) {
  VAR_6 = FUNC_10(VAR_5->rst);
  if (VAR_6 != 0) {
   FUNC_9(VAR_4, "cannot de-assert reset\n");
   goto fail;
  }
 }

 if (FUNC_0(VAR_4, VAR_3, &VAR_5->res) != 0) {
  FUNC_9(VAR_4, "cannot allocate resources for device\n");
  VAR_6 = VAR_0;
  goto fail;
 }

 VAR_5->iicbus = FUNC_6(VAR_4, "iicbus", -1);
 if (VAR_5->iicbus == ((void*)0)) {
  FUNC_9(VAR_4, "cannot add iicbus child device\n");
  VAR_6 = VAR_0;
  goto fail;
 }

 FUNC_1(VAR_4);

 return (0);

fail:
 FUNC_2(VAR_4, VAR_3, &VAR_5->res);
 if (VAR_5->rst != ((void*)0))
  FUNC_12(VAR_5->rst);
 if (VAR_5->clk != ((void*)0))
  FUNC_5(VAR_5->clk);
 FUNC_13(&VAR_5->mtx);
 return (VAR_6);
}
