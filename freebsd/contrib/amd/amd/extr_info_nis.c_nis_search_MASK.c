
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_7__ {TYPE_1__* cfm; } ;
typedef TYPE_2__ mnt_map ;
typedef int YP_ORDER_OUTORDER_TYPE ;
struct TYPE_8__ {int nis_domain; scalar_t__ am_timeo; } ;
struct TYPE_6__ {int cfm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;

 int FUNC_1 () ;
 TYPE_5__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int ,char*,char*,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,char*,int ,char**,int*) ;
 int FUNC_8 (int ,char*,int *) ;
 int FUNC_9 (int) ;

int
FUNC_10(mnt_map *VAR_6, char *VAR_7, char *VAR_8, char **VAR_9, time_t *VAR_10)
{
  int VAR_11;
  int VAR_12;
  YP_ORDER_OUTORDER_TYPE VAR_13;




  if (!VAR_4.nis_domain) {
    int VAR_14 = FUNC_1();
    if (VAR_14)
      return VAR_14;
  }


  switch (VAR_5) {
  case 1:




    if (FUNC_8(VAR_4.nis_domain, VAR_7, &VAR_13))
      return VAR_1;
    if ((time_t) VAR_13 > *VAR_10) {
      *VAR_10 = (time_t) VAR_13;
      return -1;
    }
    break;

  case 0:




    VAR_13 = FUNC_6(((void*)0));
    if ((time_t)VAR_13 - *VAR_10 > VAR_4.am_timeo) {
      *VAR_10 = (time_t)VAR_13;
      return(-1);
    }
    break;

  default:



     if (FUNC_2(VAR_6, VAR_7))
       return -1;
     return VAR_1;
  }




  VAR_12 = FUNC_7(VAR_4.nis_domain, VAR_7, VAR_8, FUNC_4(VAR_8), VAR_9, &VAR_11);
  if (VAR_6->cfm && (VAR_6->cfm->cfm_flags & VAR_0) && VAR_12 == 0) {
    char *VAR_15 = *VAR_9;
    *VAR_9 = FUNC_5(VAR_8, VAR_15);

    FUNC_0(VAR_15);
    if (*VAR_9 == ((void*)0))
      return -1;
  }




  switch (VAR_12) {
  case 0:
    return 0;

  case 128:
    return VAR_2;

  default:
    FUNC_3(VAR_3, "nis_search: %s: %s", VAR_7, FUNC_9(VAR_12));
    return VAR_1;
  }
}
