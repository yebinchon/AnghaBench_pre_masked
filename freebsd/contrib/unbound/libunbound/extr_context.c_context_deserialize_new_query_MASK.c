
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int* key; } ;
struct ub_result {int querynum; int async; int qtype; int qclass; TYPE_1__ node; struct ub_result* res; int qname; } ;
struct ub_ctx {int queries; int num_async; } ;
struct ctx_query {int querynum; int async; int qtype; int qclass; TYPE_1__ node; struct ctx_query* res; int qname; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct ub_result*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

struct ctx_query*
FUNC_6(struct ub_ctx* VAR_1, uint8_t* VAR_2, uint32_t VAR_3)
{
 struct ctx_query* VAR_4 = (struct ctx_query*)FUNC_0(1, sizeof(*VAR_4));
 if(!VAR_4) return ((void*)0);
 if(VAR_3 < 4*sizeof(uint32_t)+1) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }
 FUNC_2( FUNC_4(VAR_2) == VAR_0);
 VAR_4->querynum = (int)FUNC_4(VAR_2+sizeof(uint32_t));
 VAR_4->node.key = &VAR_4->querynum;
 VAR_4->async = 1;
 VAR_4->res = (struct ub_result*)FUNC_0(1, sizeof(*VAR_4->res));
 if(!VAR_4->res) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }
 VAR_4->res->qtype = (int)FUNC_4(VAR_2+2*sizeof(uint32_t));
 VAR_4->res->qclass = (int)FUNC_4(VAR_2+3*sizeof(uint32_t));
 VAR_4->res->qname = FUNC_5((char*)(VAR_2+4*sizeof(uint32_t)));
 if(!VAR_4->res->qname) {
  FUNC_1(VAR_4->res);
  FUNC_1(VAR_4);
  return ((void*)0);
 }


 VAR_1->num_async++;
 (void)FUNC_3(&VAR_1->queries, &VAR_4->node);
 return VAR_4;
}
