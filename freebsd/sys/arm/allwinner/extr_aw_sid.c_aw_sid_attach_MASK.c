
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct aw_sid_softc {struct aw_sid_conf* sid_conf; int prctl_mtx; int res; int sid_dev; } ;
struct aw_sid_conf {int nfuses; TYPE_1__* efuses; } ;
typedef int phandle_t ;
typedef int device_t ;
struct TYPE_4__ {scalar_t__ ocd_data; } ;
struct TYPE_3__ {int desc; int id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,int ,int,int ,int ,int ,char*,int ) ;
 int FUNC_3 (int ) ;
 struct aw_sid_softc* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 struct aw_sid_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int *,int ,int *,int ) ;
 int FUNC_11 (int ) ;
 TYPE_2__* FUNC_12 (int ,int ) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_9)
{
 struct aw_sid_softc *VAR_10;
 phandle_t VAR_11;
 int VAR_12;

 VAR_11 = FUNC_11(VAR_9);
 VAR_10 = FUNC_6(VAR_9);
 VAR_10->sid_dev = VAR_9;

 if (FUNC_4(VAR_9, VAR_6, &VAR_10->res) != 0) {
  FUNC_9(VAR_9, "cannot allocate resources for device\n");
  return (VAR_2);
 }

 FUNC_10(&VAR_10->prctl_mtx, FUNC_5(VAR_9), ((void*)0), VAR_3);
 VAR_10->sid_conf = (struct aw_sid_conf *)FUNC_12(VAR_9, VAR_8)->ocd_data;
 VAR_5 = VAR_10;


 FUNC_0(FUNC_1(VAR_11), VAR_9);

 for (VAR_12 = 0; VAR_12 < VAR_10->sid_conf->nfuses ;VAR_12++) { FUNC_2(FUNC_7(VAR_9),

      FUNC_3(FUNC_8(VAR_9)),
      VAR_4, VAR_10->sid_conf->efuses[VAR_12].name,
      VAR_1 | VAR_0,
      VAR_9, VAR_10->sid_conf->efuses[VAR_12].id, VAR_7,
      "A", VAR_10->sid_conf->efuses[VAR_12].desc);
 }
 return (0);
}
