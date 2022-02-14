
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
typedef int mnt_map ;
typedef scalar_t__ YP_ORDER_OUTORDER_TYPE ;
struct TYPE_2__ {int nis_domain; } ;


 int VAR_0 ;

 int FUNC_0 () ;
 int FUNC_1 (char*,char*,int ,...) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,char**) ;
 int FUNC_4 (int ,char*,scalar_t__*) ;

int
FUNC_5(mnt_map *VAR_3, char *VAR_4, time_t *VAR_5)
{
  YP_ORDER_OUTORDER_TYPE VAR_6;
  int VAR_7;
  char *VAR_8;

  if (!VAR_1.nis_domain) {
    int VAR_9 = FUNC_0();
    if (VAR_9)
      return VAR_9;
  }





  VAR_7 = FUNC_4(VAR_1.nis_domain, VAR_4, &VAR_6);
  switch (VAR_7) {
  case 0:

    VAR_2 = 1;
    *VAR_5 = (time_t) VAR_6;
    FUNC_1("NIS master for %s@%s has order %lu", VAR_4, VAR_1.nis_domain, (unsigned long) VAR_6);
    break;
  case 128:

    VAR_2 = 0;

    if (FUNC_3(VAR_1.nis_domain, VAR_4, &VAR_8)) {
      return VAR_0;
    } else {
      FUNC_1("NIS master for %s@%s is a NIS+ server", VAR_4, VAR_1.nis_domain);

      *VAR_5 = FUNC_2(((void*)0));
    }
    break;
  default:

    VAR_2 = -1;
    return VAR_0;
  }
  return 0;
}
