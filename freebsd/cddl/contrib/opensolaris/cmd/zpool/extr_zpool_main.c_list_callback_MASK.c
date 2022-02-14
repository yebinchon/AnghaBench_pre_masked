
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int nvlist_t ;
struct TYPE_4__ {int cb_verbose; } ;
typedef TYPE_1__ list_cbdata_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *,int *,int *,TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int *,int *) ;

int
FUNC_5(zpool_handle_t *VAR_1, void *VAR_2)
{
 list_cbdata_t *VAR_3 = VAR_2;
 nvlist_t *VAR_4;
 nvlist_t *VAR_5;

 VAR_4 = FUNC_4(VAR_1, ((void*)0));

 FUNC_2(VAR_1, VAR_3);
 if (!VAR_3->cb_verbose)
  return (0);

 FUNC_3(FUNC_0(VAR_4, VAR_0,
     &VAR_5) == 0);
 FUNC_1(VAR_1, ((void*)0), VAR_5, VAR_3, 0);

 return (0);
}
