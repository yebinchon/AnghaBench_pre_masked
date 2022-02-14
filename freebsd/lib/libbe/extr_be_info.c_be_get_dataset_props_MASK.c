
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_5__ {int single_object; int * list; TYPE_2__* lbh; } ;
typedef TYPE_1__ prop_data_t ;
typedef int nvlist_t ;
struct TYPE_6__ {int lzh; } ;
typedef TYPE_2__ libbe_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char const*,int) ;

int
FUNC_3(libbe_handle_t *VAR_3, const char *VAR_4, nvlist_t *VAR_5)
{
 zfs_handle_t *VAR_6;
 prop_data_t VAR_7;
 int VAR_8;

 VAR_7.lbh = VAR_3;
 VAR_7.list = VAR_5;
 VAR_7.single_object = 1;
 if ((VAR_6 = FUNC_2(VAR_3->lzh, VAR_4,
     VAR_1 | VAR_2)) == ((void*)0))
  return (VAR_0);

 VAR_8 = FUNC_0(VAR_6, &VAR_7);
 FUNC_1(VAR_6);
 return (VAR_8);
}
