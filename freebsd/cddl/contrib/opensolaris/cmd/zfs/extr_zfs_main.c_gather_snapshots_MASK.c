
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_5__ {scalar_t__ cb_recurse; scalar_t__ cb_verbose; int cb_snapspec; } ;
typedef TYPE_1__ destroy_cbdata_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int (*) (int *,void*),TYPE_1__*) ;
 int FUNC_3 (int *,int ,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(zfs_handle_t *VAR_2, void *VAR_3)
{
 destroy_cbdata_t *VAR_4 = VAR_3;
 int VAR_5 = 0;

 VAR_5 = FUNC_3(VAR_2, VAR_4->cb_snapspec, VAR_1, VAR_4);
 if (VAR_5 == VAR_0)
  VAR_5 = 0;
 if (VAR_5 != 0)
  goto out;

 if (VAR_4->cb_verbose) {
  VAR_5 = FUNC_0(VAR_2, VAR_4);
  if (VAR_5 != 0)
   goto out;
 }

 if (VAR_4->cb_recurse)
  VAR_5 = FUNC_2(VAR_2, FUNC_4, VAR_4);

out:
 FUNC_1(VAR_2);
 return (VAR_5);
}
