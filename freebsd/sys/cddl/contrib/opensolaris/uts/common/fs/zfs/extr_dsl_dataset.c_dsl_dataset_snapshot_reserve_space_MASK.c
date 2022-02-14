
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ ds_reserved; int ds_dir; } ;
typedef TYPE_1__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_7__ {int ds_unique_bytes; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,int *,int ,int ) ;
 int FUNC_7 (int ,scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_8(dsl_dataset_t *VAR_2, dmu_tx_t *VAR_3)
{
 uint64_t VAR_4;

 if (!FUNC_4(VAR_3))
  return (0);






 FUNC_0(VAR_2->ds_reserved == 0 || FUNC_1(VAR_2));
 VAR_4 = FUNC_2(FUNC_5(VAR_2)->ds_unique_bytes, VAR_2->ds_reserved);
 if (VAR_4 > FUNC_6(VAR_2->ds_dir, ((void*)0), 0, VAR_1))
  return (FUNC_3(VAR_0));





 if (VAR_4 > 0)
  FUNC_7(VAR_2->ds_dir, VAR_4, VAR_3);

 return (0);
}
