
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int xport; int hw; } ;
typedef TYPE_1__ ocs_t ;
typedef scalar_t__ ocs_hw_rtn_e ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (int ,int ) ;

int
FUNC_5(ocs_t *VAR_5, char *VAR_6, char *VAR_7)
{
 int VAR_8 = 0;
 ocs_hw_rtn_e VAR_9;
 int VAR_10;
 uint32_t VAR_11;

 VAR_11 = FUNC_3(VAR_7, ((void*)0), 0);
 if (VAR_11 >= VAR_2) {
  return 1;
 }

 FUNC_1(VAR_5, "Taking port offline\n");
 VAR_10 = FUNC_4(VAR_5->xport, VAR_3);
 if (VAR_10 != 0) {
  FUNC_2(VAR_5, "Port offline failed\n");
  VAR_8 = 1;
 } else {
  FUNC_1(VAR_5, "Setting port to topology %d\n", VAR_11);
  VAR_9 = FUNC_0(&VAR_5->hw, VAR_1, VAR_11);
  if (VAR_9 != VAR_0) {
   FUNC_2(VAR_5, "Topology set failed\n");
   VAR_8 = 1;
  }




  FUNC_1(VAR_5, "Bringing port online\n");
  VAR_10 = FUNC_4(VAR_5->xport, VAR_4);
  if (VAR_10 != 0) {
   VAR_8 = 1;
  }
 }

 return VAR_8;
}
