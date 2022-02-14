
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_3__ {void* cclk; } ;
struct TYPE_4__ {void* tp_vers; void* fw_vers; TYPE_1__ vpd; } ;
struct adapter {TYPE_2__ params; int tp_version; int fw_version; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (void**) ;
 int FUNC_7 (int ,int,char*,int,int,int,int) ;
 int FUNC_8 (struct adapter*,int ,void**,void**) ;

__attribute__((used)) static int
FUNC_9(struct adapter *VAR_3)
{
 int VAR_4;
 uint32_t VAR_5[3], VAR_6[3];

 VAR_5[0] = FUNC_0(VAR_1);
 VAR_5[1] = FUNC_0(VAR_2);
 VAR_5[2] = FUNC_0(VAR_0);
 VAR_4 = -FUNC_8(VAR_3, FUNC_6(VAR_5), VAR_5, VAR_6);
 if (VAR_4 != 0) {
  FUNC_5(VAR_3->dev,
      "failed to query parameters (pre_init): %d.\n", VAR_4);
  return (VAR_4);
 }

 VAR_3->params.fw_vers = VAR_6[0];
 VAR_3->params.tp_vers = VAR_6[1];
 VAR_3->params.vpd.cclk = VAR_6[2];

 FUNC_7(VAR_3->fw_version, sizeof(VAR_3->fw_version), "%u.%u.%u.%u",
     FUNC_2(VAR_3->params.fw_vers),
     FUNC_4(VAR_3->params.fw_vers),
     FUNC_3(VAR_3->params.fw_vers),
     FUNC_1(VAR_3->params.fw_vers));

 FUNC_7(VAR_3->tp_version, sizeof(VAR_3->tp_version), "%u.%u.%u.%u",
     FUNC_2(VAR_3->params.tp_vers),
     FUNC_4(VAR_3->params.tp_vers),
     FUNC_3(VAR_3->params.tp_vers),
     FUNC_1(VAR_3->params.tp_vers));

 return (0);
}
