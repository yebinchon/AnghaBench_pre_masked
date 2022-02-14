
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int nvlist_t ;
struct TYPE_2__ {int cb_namewidth; int cb_verbose; } ;
typedef TYPE_1__ iostat_cbdata_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int) ;
 scalar_t__ FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(zpool_handle_t *VAR_1, void *VAR_2)
{
 iostat_cbdata_t *VAR_3 = VAR_2;
 nvlist_t *VAR_4, *VAR_5;

 if ((VAR_4 = FUNC_4(VAR_1, ((void*)0))) != ((void*)0)) {
  FUNC_3(FUNC_1(VAR_4, VAR_0,
      &VAR_5) == 0);
  if (!VAR_3->cb_verbose)
   VAR_3->cb_namewidth = FUNC_2(FUNC_5(VAR_1));
  else
   VAR_3->cb_namewidth = FUNC_0(VAR_1, VAR_5, 0,
       VAR_3->cb_namewidth);
 }





 if (VAR_3->cb_namewidth < 10)
  VAR_3->cb_namewidth = 10;
 if (VAR_3->cb_namewidth > 38)
  VAR_3->cb_namewidth = 38;

 return (0);
}
