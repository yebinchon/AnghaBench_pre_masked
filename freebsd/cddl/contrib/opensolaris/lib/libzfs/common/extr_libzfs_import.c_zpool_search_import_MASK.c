
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int nvlist_t ;
typedef int libzfs_handle_t ;
struct TYPE_5__ {scalar_t__ guid; int * poolname; int * cachefile; int exists; scalar_t__ unique; } ;
typedef TYPE_1__ importargs_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int *,int *,scalar_t__) ;
 int * FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int ,TYPE_1__*) ;

nvlist_t *
FUNC_4(libzfs_handle_t *VAR_1, importargs_t *VAR_2)
{
 FUNC_0(VAR_2->poolname == ((void*)0) || VAR_2->guid == 0);

 if (VAR_2->unique)
  VAR_2->exists = FUNC_3(VAR_1, VAR_0, VAR_2);

 if (VAR_2->cachefile != ((void*)0))
  return (FUNC_1(VAR_1, VAR_2->cachefile,
      VAR_2->poolname, VAR_2->guid));

 return (FUNC_2(VAR_1, VAR_2));
}
