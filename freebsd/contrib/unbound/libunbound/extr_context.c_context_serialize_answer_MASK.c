
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct ctx_query {TYPE_1__* res; scalar_t__ msg_security; scalar_t__ querynum; } ;
typedef int sldns_buffer ;
struct TYPE_2__ {int why_bogus; scalar_t__ was_ratelimited; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int ) ;

uint8_t*
FUNC_6(struct ctx_query* VAR_1, int VAR_2, sldns_buffer* VAR_3,
 uint32_t* VAR_4)
{
 size_t VAR_5 = 6 * sizeof(uint32_t);
 size_t VAR_6 = VAR_3?FUNC_3(VAR_3):0;
 size_t VAR_7 = (VAR_3&&VAR_1->res->why_bogus)?FUNC_5(VAR_1->res->why_bogus)+1:0;
 uint8_t* VAR_8;
 *VAR_4 = VAR_5 + VAR_6 + VAR_7;
 VAR_8 = (uint8_t*)FUNC_0(*VAR_4);
 if(!VAR_8) return ((void*)0);
 FUNC_4(VAR_8, VAR_0);
 FUNC_4(VAR_8+sizeof(uint32_t), (uint32_t)VAR_1->querynum);
 FUNC_4(VAR_8+2*sizeof(uint32_t), (uint32_t)VAR_2);
 FUNC_4(VAR_8+3*sizeof(uint32_t), (uint32_t)VAR_1->msg_security);
 FUNC_4(VAR_8+4*sizeof(uint32_t), (uint32_t)VAR_1->res->was_ratelimited);
 FUNC_4(VAR_8+5*sizeof(uint32_t), (uint32_t)VAR_7);
 if(VAR_7 > 0)
  FUNC_1(VAR_8+VAR_5, VAR_1->res->why_bogus, VAR_7);
 if(VAR_6 > 0)
  FUNC_1(VAR_8+VAR_5+VAR_7,
   FUNC_2(VAR_3), VAR_6);
 return VAR_8;
}
