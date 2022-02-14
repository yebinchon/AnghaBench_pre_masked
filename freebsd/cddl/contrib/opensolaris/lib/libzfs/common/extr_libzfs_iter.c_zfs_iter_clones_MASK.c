
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int (* zfs_iter_f ) (TYPE_1__*,void*) ;
struct TYPE_7__ {int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,int ,int) ;

int
FUNC_4(zfs_handle_t *VAR_2, zfs_iter_f VAR_3, void *VAR_4)
{
 nvlist_t *VAR_5 = FUNC_2(VAR_2);
 nvpair_t *VAR_6;

 if (VAR_5 == ((void*)0))
  return (0);

 for (VAR_6 = FUNC_0(VAR_5, ((void*)0)); VAR_6 != ((void*)0);
     VAR_6 = FUNC_0(VAR_5, VAR_6)) {
  zfs_handle_t *VAR_7 = FUNC_3(VAR_2->zfs_hdl, FUNC_1(VAR_6),
      VAR_0 | VAR_1);
  if (VAR_7 != ((void*)0)) {
   int VAR_8 = VAR_3(VAR_7, VAR_4);
   if (VAR_8 != 0)
    return (VAR_8);
  }
 }
 return (0);
}
