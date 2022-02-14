
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int xport; int hw; } ;
typedef TYPE_1__ ocs_t ;
typedef scalar_t__ ocs_hw_rtn_e ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (int ,int ) ;

int
FUNC_5(ocs_t *VAR_4, char *VAR_5, char *VAR_6)
{
 int VAR_7 = 0;
 ocs_hw_rtn_e VAR_8;
 int VAR_9;
 uint32_t VAR_10;

 VAR_10 = FUNC_3(VAR_6, ((void*)0), 0);

 if ((VAR_10 != 0) && (VAR_10 != 2000) && (VAR_10 != 4000) &&
  (VAR_10 != 8000) && (VAR_10 != 16000) && (VAR_10 != 32000)) {
  FUNC_2(VAR_4, "unsupported speed %d\n", VAR_10);
  return 1;
 }

 FUNC_1(VAR_4, "Taking port offline\n");
 VAR_9 = FUNC_4(VAR_4->xport, VAR_2);
 if (VAR_9 != 0) {
  FUNC_2(VAR_4, "Port offline failed\n");
  VAR_7 = 1;
 } else {
  FUNC_1(VAR_4, "Setting port to speed %d\n", VAR_10);
  VAR_8 = FUNC_0(&VAR_4->hw, VAR_0, VAR_10);
  if (VAR_8 != VAR_1) {
   FUNC_2(VAR_4, "Speed set failed\n");
   VAR_7 = 1;
  }




  FUNC_1(VAR_4, "Bringing port online\n");
  VAR_9 = FUNC_4(VAR_4->xport, VAR_3);
  if (VAR_9 != 0) {
   VAR_7 = 1;
  }
 }

 return VAR_7;
}
