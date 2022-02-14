
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ctx_query {TYPE_1__* res; scalar_t__ querynum; } ;
struct TYPE_2__ {int qname; scalar_t__ qclass; scalar_t__ qtype; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;

uint8_t*
FUNC_4(struct ctx_query* VAR_1, uint32_t* VAR_2)
{







 uint8_t* VAR_3;
 size_t VAR_4 = FUNC_3(VAR_1->res->qname) + 1 ;
 *VAR_2 = sizeof(uint32_t)*4 + VAR_4;
 VAR_3 = (uint8_t*)FUNC_0(*VAR_2);
 if(!VAR_3) return ((void*)0);
 FUNC_2(VAR_3, VAR_0);
 FUNC_2(VAR_3+sizeof(uint32_t), (uint32_t)VAR_1->querynum);
 FUNC_2(VAR_3+2*sizeof(uint32_t), (uint32_t)VAR_1->res->qtype);
 FUNC_2(VAR_3+3*sizeof(uint32_t), (uint32_t)VAR_1->res->qclass);
 FUNC_1(VAR_3+4*sizeof(uint32_t), VAR_1->res->qname, VAR_4);
 return VAR_3;
}
