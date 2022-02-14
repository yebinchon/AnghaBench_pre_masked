
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct reply_info {size_t an_numrrsets; TYPE_2__** rrsets; } ;
struct query_info {size_t qname_len; int * qname; } ;
struct TYPE_3__ {int dname; int type; } ;
struct TYPE_4__ {TYPE_1__ rk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int **,size_t*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

int
FUNC_3(struct query_info* VAR_2, struct reply_info* VAR_3)
{


 size_t VAR_4;
 uint8_t* VAR_5 = VAR_2->qname;
 size_t VAR_6 = VAR_2->qname_len;
 for(VAR_4=0; VAR_4<VAR_3->an_numrrsets; VAR_4++) {
  uint16_t VAR_7 = FUNC_1(VAR_3->rrsets[VAR_4]->rk.type);
  if(VAR_7 == VAR_1)
   continue;

  if(FUNC_2(VAR_5, VAR_3->rrsets[VAR_4]->rk.dname) != 0){

   return 0;
  }

  if(VAR_7 == VAR_0) {
   FUNC_0(VAR_3->rrsets[VAR_4], &VAR_5, &VAR_6);
  }
 }
 return 1;
}
