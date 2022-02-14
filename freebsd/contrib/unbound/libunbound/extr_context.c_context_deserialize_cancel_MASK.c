
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ub_ctx {int queries; } ;
struct ctx_query {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int*) ;
 scalar_t__ FUNC_2 (int *) ;

struct ctx_query* FUNC_3(struct ub_ctx* VAR_1,
        uint8_t* VAR_2, uint32_t VAR_3)
{
 struct ctx_query* VAR_4;
 int VAR_5;
 if(VAR_3 != 2*sizeof(uint32_t)) return ((void*)0);
 FUNC_0( FUNC_2(VAR_2) == VAR_0);
 VAR_5 = (int)FUNC_2(VAR_2+sizeof(uint32_t));
 VAR_4 = (struct ctx_query*)FUNC_1(&VAR_1->queries, &VAR_5);
 return VAR_4;
}
