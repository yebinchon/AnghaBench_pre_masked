
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ctx_query {scalar_t__ querynum; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int) ;

uint8_t*
FUNC_2(struct ctx_query* VAR_1, uint32_t* VAR_2)
{



 uint8_t* VAR_3 = (uint8_t*)FUNC_0(((void*)0), sizeof(uint32_t), 2);
 if(!VAR_3) return ((void*)0);
 *VAR_2 = 2*sizeof(uint32_t);
 FUNC_1(VAR_3, VAR_0);
 FUNC_1(VAR_3+sizeof(uint32_t), (uint32_t)VAR_1->querynum);
 return VAR_3;
}
