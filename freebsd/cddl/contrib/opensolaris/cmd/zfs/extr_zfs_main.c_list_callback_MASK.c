
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_4__ {scalar_t__ cb_first; int cb_scripted; } ;
typedef TYPE_1__ list_cbdata_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(zfs_handle_t *VAR_1, void *VAR_2)
{
 list_cbdata_t *VAR_3 = VAR_2;

 if (VAR_3->cb_first) {
  if (!VAR_3->cb_scripted)
   FUNC_1(VAR_3);
  VAR_3->cb_first = VAR_0;
 }

 FUNC_0(VAR_1, VAR_3);

 return (0);
}
