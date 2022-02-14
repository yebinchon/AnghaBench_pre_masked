
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int nvlist_t ;
struct TYPE_4__ {int cb_iteration; scalar_t__ cb_verbose; } ;
typedef TYPE_1__ iostat_cbdata_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,int *,int *,TYPE_1__*,int ) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int *,int **) ;
 int FUNC_5 (int *) ;

int
FUNC_6(zpool_handle_t *VAR_1, void *VAR_2)
{
 iostat_cbdata_t *VAR_3 = VAR_2;
 nvlist_t *VAR_4, *VAR_5;
 nvlist_t *VAR_6, *VAR_7;

 VAR_5 = FUNC_4(VAR_1, &VAR_4);

 if (VAR_3->cb_iteration == 1)
  VAR_4 = ((void*)0);

 FUNC_3(FUNC_0(VAR_5, VAR_0,
     &VAR_7) == 0);

 if (VAR_4 == ((void*)0))
  VAR_6 = ((void*)0);
 else
  FUNC_3(FUNC_0(VAR_4, VAR_0,
      &VAR_6) == 0);




 FUNC_2(VAR_1, FUNC_5(VAR_1), VAR_6, VAR_7, VAR_3, 0);

 if (VAR_3->cb_verbose)
  FUNC_1(VAR_3);

 return (0);
}
