
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct ub_ctx {int queries; } ;
struct ctx_query {size_t msg_len; int * msg; TYPE_1__* res; scalar_t__ msg_security; } ;
struct TYPE_2__ {int was_ratelimited; char* why_bogus; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 scalar_t__ FUNC_2 (int *,int*) ;
 scalar_t__ FUNC_3 (int *) ;

struct ctx_query*
FUNC_4(struct ub_ctx* VAR_2,
        uint8_t* VAR_3, uint32_t VAR_4, int* VAR_5)
{
 size_t VAR_6 = 6 * sizeof(uint32_t);
 struct ctx_query* VAR_7 = ((void*)0) ;
 int VAR_8;
 size_t VAR_9;
 if(VAR_4 < VAR_6) return ((void*)0);
 FUNC_0( FUNC_3(VAR_3) == VAR_0);
 VAR_8 = (int)FUNC_3(VAR_3+sizeof(uint32_t));
 VAR_7 = (struct ctx_query*)FUNC_2(&VAR_2->queries, &VAR_8);
 if(!VAR_7) return ((void*)0);
 *VAR_5 = (int)FUNC_3(VAR_3+2*sizeof(uint32_t));
 VAR_7->msg_security = FUNC_3(VAR_3+3*sizeof(uint32_t));
 VAR_7->res->was_ratelimited = (int)FUNC_3(VAR_3+4*sizeof(uint32_t));
 VAR_9 = (size_t)FUNC_3(VAR_3+5*sizeof(uint32_t));
 if(VAR_4 > VAR_6 && VAR_9 > 0) {
  if(VAR_4 >= VAR_6+VAR_9)
   VAR_7->res->why_bogus = (char*)FUNC_1(
    VAR_3+VAR_6, VAR_9);
  if(!VAR_7->res->why_bogus) {

   VAR_7->msg_len = 0;
   *VAR_5 = VAR_1;
   return VAR_7;
  }
  VAR_7->res->why_bogus[VAR_9-1] = 0;
 }
 if(VAR_4 > VAR_6+VAR_9) {
  VAR_7->msg_len = VAR_4 - VAR_6 - VAR_9;
  VAR_7->msg = (uint8_t*)FUNC_1(VAR_3+VAR_6+VAR_9,
   VAR_7->msg_len);
  if(!VAR_7->msg) {

   VAR_7->msg_len = 0;
   *VAR_5 = VAR_1;
   return VAR_7;
  }
 }
 return VAR_7;
}
