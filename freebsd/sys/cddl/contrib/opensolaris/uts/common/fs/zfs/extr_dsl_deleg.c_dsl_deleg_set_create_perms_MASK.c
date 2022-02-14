
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {struct TYPE_8__* dd_parent; TYPE_1__* dd_pool; } ;
typedef TYPE_2__ dsl_dir_t ;
typedef int dmu_tx_t ;
typedef int cred_t ;
struct TYPE_9__ {scalar_t__ dd_deleg_zapobj; } ;
struct TYPE_7__ {int dp_meta_objset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ) ;

void
FUNC_5(dsl_dir_t *VAR_3, dmu_tx_t *VAR_4, cred_t *VAR_5)
{
 dsl_dir_t *VAR_6;
 uint64_t VAR_7 = FUNC_1(VAR_5);

 if (FUNC_4(FUNC_2(VAR_3->dd_pool->dp_meta_objset)) <
     VAR_2)
  return;

 for (VAR_6 = VAR_3->dd_parent; VAR_6 != ((void*)0); VAR_6 = VAR_6->dd_parent) {
  uint64_t VAR_8 = FUNC_3(VAR_6)->dd_deleg_zapobj;

  if (VAR_8 == 0)
   continue;

  FUNC_0(VAR_3, VAR_8, VAR_0, VAR_7, VAR_4);
  FUNC_0(VAR_3, VAR_8, VAR_1, VAR_7, VAR_4);
 }
}
