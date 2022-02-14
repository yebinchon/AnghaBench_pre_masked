
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
typedef int mnt_map ;
typedef int YP_ORDER_OUTORDER_TYPE ;
struct TYPE_2__ {int nis_domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (int ,char*,char**) ;
 int FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

int
FUNC_6(mnt_map *VAR_4, char *VAR_5)
{
  YP_ORDER_OUTORDER_TYPE VAR_6;
  int VAR_7;
  char *VAR_8;
  static int VAR_9 = 1;

  switch (VAR_3) {
  case 1:



    VAR_7 = FUNC_3(VAR_2.nis_domain, VAR_5, &VAR_6);
    if (VAR_7 != 0) {
      FUNC_1(VAR_0,
    "nis_isup: error getting the order of map %s: %s",
    VAR_5, FUNC_4(FUNC_5(VAR_7)));
      VAR_9 = 0;
      return 0;
    }
    break;

  case 0:



    VAR_7 = FUNC_2(VAR_2.nis_domain, VAR_5, &VAR_8);
    if (VAR_7 != 0) {
      FUNC_1(VAR_0,
    "nis_isup: error getting the master of map %s: %s",
    VAR_5, FUNC_4(FUNC_5(VAR_7)));
      VAR_9 = 0;
      return 0;
    }
    break;

  default:



    VAR_9 = 0;
  }

  if (VAR_9 == 0) {
    time_t VAR_10;
    VAR_7 = FUNC_0(VAR_4, VAR_5, &VAR_10);
    if (VAR_7)
      return 0;
    FUNC_1(VAR_1, "nis_isup: NIS came back up for map %s", VAR_5);
    VAR_9 = 1;
  }
  return 1;
}
