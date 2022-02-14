
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_3__ {int cb_nvl; int cb_first; int * cb_target; int cb_defer_destroy; int cb_doclones; } ;
typedef TYPE_1__ destroy_cbdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(zfs_handle_t *VAR_2, void *VAR_3)
{
 destroy_cbdata_t *VAR_4 = VAR_3;
 int VAR_5 = 0;


 if (!VAR_4->cb_doclones && !VAR_4->cb_defer_destroy) {
  VAR_4->cb_target = VAR_2;
  VAR_4->cb_first = VAR_0;
  VAR_5 = FUNC_4(VAR_2, VAR_0,
      VAR_1, VAR_4);
 }

 if (VAR_5 == 0) {
  if (FUNC_1(VAR_4->cb_nvl, FUNC_3(VAR_2)))
   FUNC_0();
 }
 FUNC_2(VAR_2);
 return (VAR_5);
}
