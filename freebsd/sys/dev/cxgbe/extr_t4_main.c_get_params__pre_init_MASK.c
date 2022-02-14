
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_3__ {void* cclk; } ;
struct TYPE_4__ {TYPE_1__ vpd; int nports; void* portvec; int er_vers; int tp_vers; int bs_vers; int fw_vers; } ;
struct adapter {int dev; TYPE_2__ params; int pf; int mbox; int er_version; int tp_version; int bs_version; int fw_version; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct adapter*) ;
 int FUNC_8 (int ,int,char*,int,int,int,int) ;
 int FUNC_9 (struct adapter*) ;
 int FUNC_10 (struct adapter*,int) ;
 int FUNC_11 (struct adapter*,int ,int ,int ,int,void**,void**) ;

__attribute__((used)) static int
FUNC_12(struct adapter *VAR_2)
{
 int VAR_3;
 uint32_t VAR_4[2], VAR_5[2];

 FUNC_9(VAR_2);

 FUNC_8(VAR_2->fw_version, sizeof(VAR_2->fw_version), "%u.%u.%u.%u",
     FUNC_2(VAR_2->params.fw_vers),
     FUNC_4(VAR_2->params.fw_vers),
     FUNC_3(VAR_2->params.fw_vers),
     FUNC_1(VAR_2->params.fw_vers));

 FUNC_8(VAR_2->bs_version, sizeof(VAR_2->bs_version), "%u.%u.%u.%u",
     FUNC_2(VAR_2->params.bs_vers),
     FUNC_4(VAR_2->params.bs_vers),
     FUNC_3(VAR_2->params.bs_vers),
     FUNC_1(VAR_2->params.bs_vers));

 FUNC_8(VAR_2->tp_version, sizeof(VAR_2->tp_version), "%u.%u.%u.%u",
     FUNC_2(VAR_2->params.tp_vers),
     FUNC_4(VAR_2->params.tp_vers),
     FUNC_3(VAR_2->params.tp_vers),
     FUNC_1(VAR_2->params.tp_vers));

 FUNC_8(VAR_2->er_version, sizeof(VAR_2->er_version), "%u.%u.%u.%u",
     FUNC_2(VAR_2->params.er_vers),
     FUNC_4(VAR_2->params.er_vers),
     FUNC_3(VAR_2->params.er_vers),
     FUNC_1(VAR_2->params.er_vers));

 VAR_4[0] = FUNC_0(VAR_1);
 VAR_4[1] = FUNC_0(VAR_0);
 VAR_3 = -FUNC_11(VAR_2, VAR_2->mbox, VAR_2->pf, 0, 2, VAR_4, VAR_5);
 if (VAR_3 != 0) {
  FUNC_6(VAR_2->dev,
      "failed to query parameters (pre_init): %d.\n", VAR_3);
  return (VAR_3);
 }

 VAR_2->params.portvec = VAR_5[0];
 VAR_2->params.nports = FUNC_5(VAR_5[0]);
 VAR_2->params.vpd.cclk = VAR_5[1];


 VAR_3 = -FUNC_10(VAR_2, 1);
 if (VAR_3 == 0)
  FUNC_7(VAR_2);
 else {
  FUNC_6(VAR_2->dev,
      "failed to get devlog parameters: %d.\n", VAR_3);
  VAR_3 = 0;
 }

 return (VAR_3);
}
