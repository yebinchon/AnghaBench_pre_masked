
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {TYPE_1__* dd_pool; } ;
typedef TYPE_2__ dsl_dir_t ;
struct TYPE_8__ {int ddlrta_txg; TYPE_2__* ddulrta_dd; } ;
typedef TYPE_3__ ddulrt_arg_t ;
struct TYPE_6__ {int dp_spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,TYPE_3__*,int,int ) ;
 int FUNC_1 (int ) ;

int
FUNC_2(dsl_dir_t *VAR_2, uint64_t VAR_3)
{
 ddulrt_arg_t VAR_4;
 VAR_4.ddulrta_dd = VAR_2;
 VAR_4.ddlrta_txg = VAR_3;

 return (FUNC_0(FUNC_1(VAR_2->dd_pool->dp_spa),
     ((void*)0), VAR_1, &VAR_4,
     1, VAR_0));
}
