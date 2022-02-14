
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reply_info {size_t an_numrrsets; TYPE_2__** rrsets; } ;
struct query_info {int * qname; int qname_len; } ;
struct TYPE_3__ {int dname; int type; } ;
struct TYPE_4__ {TYPE_1__ rk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int **,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

int
FUNC_3(struct query_info* VAR_1, struct reply_info* VAR_2,
 size_t* VAR_3) {
 size_t VAR_4;

 for(VAR_4 = *VAR_3; VAR_4 < VAR_2->an_numrrsets; VAR_4++) {
  if(FUNC_1(VAR_2->rrsets[VAR_4]->rk.type) == VAR_0 &&
   FUNC_2(VAR_1->qname, VAR_2->rrsets[VAR_4]->
    rk.dname) == 0) {
   VAR_1->qname = ((void*)0);
   FUNC_0(VAR_2->rrsets[VAR_4], &VAR_1->qname,
    &VAR_1->qname_len);
   if(!VAR_1->qname)
    return 0;
   (*VAR_3) = VAR_4+1;
   return 1;
  }
 }
 return 0;
}
