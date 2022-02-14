
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
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char const*,int ) ;

int
FUNC_3(libbe_handle_t *VAR_2, const char *VAR_3, nvlist_t *VAR_4)
{
 zfs_handle_t *VAR_5;
 prop_data_t VAR_6;
 int VAR_7;

 VAR_6.lbh = VAR_2;
 VAR_6.list = VAR_4;
 VAR_6.single_object = 0;
 if ((VAR_5 = FUNC_2(VAR_2->lzh, VAR_3,
     VAR_1)) == ((void*)0))
  return (VAR_0);

 VAR_7 = FUNC_0(VAR_5, &VAR_6);
 FUNC_1(VAR_5);
 return (VAR_7);
}
