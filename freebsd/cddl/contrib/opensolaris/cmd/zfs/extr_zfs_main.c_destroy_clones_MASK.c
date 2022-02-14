
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_handle_t ;
typedef int nvpair_t ;
struct TYPE_4__ {int cb_defer_destroy; int cb_nvl; } ;
typedef TYPE_1__ destroy_cbdata_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,TYPE_1__*) ;
 int * FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(destroy_cbdata_t *VAR_4)
{
 nvpair_t *VAR_5;
 for (VAR_5 = FUNC_0(VAR_4->cb_nvl, ((void*)0));
     VAR_5 != ((void*)0);
     VAR_5 = FUNC_0(VAR_4->cb_nvl, VAR_5)) {
  zfs_handle_t *VAR_6 = FUNC_4(VAR_3, FUNC_1(VAR_5),
      VAR_1);
  if (VAR_6 != ((void*)0)) {
   boolean_t VAR_7 = VAR_4->cb_defer_destroy;
   int VAR_8 = 0;





   VAR_4->cb_defer_destroy = VAR_0;
   VAR_8 = FUNC_3(VAR_6, VAR_0,
       VAR_2, VAR_4);
   VAR_4->cb_defer_destroy = VAR_7;
   FUNC_2(VAR_6);
   if (VAR_8 != 0)
    return (VAR_8);
  }
 }
 return (0);
}
