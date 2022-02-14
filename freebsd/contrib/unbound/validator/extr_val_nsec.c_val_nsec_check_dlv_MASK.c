
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct reply_info {scalar_t__ an_numrrsets; size_t ns_numrrsets; TYPE_2__** rrsets; int flags; } ;
struct query_info {int qname; } ;
struct TYPE_6__ {int type; int dname; } ;
struct TYPE_7__ {TYPE_1__ rk; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int **,size_t*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int **,size_t*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int **,size_t*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int ) ;

int FUNC_11(struct query_info* VAR_5,
        struct reply_info* VAR_6, uint8_t** VAR_7, size_t* VAR_8)
{
 uint8_t* VAR_9;
 size_t VAR_10, VAR_11;
 int VAR_12;

 if(VAR_6->an_numrrsets != 0) {
  return 0;
 }

 if(FUNC_0(VAR_6->flags) == VAR_0) {


  for(VAR_10=0; VAR_10<VAR_6->ns_numrrsets; VAR_10++) {
   if(FUNC_5(VAR_6->rrsets[VAR_10]->rk.type)!=VAR_3 ||
    !FUNC_7(VAR_6->rrsets[VAR_10], &VAR_9, &VAR_11))
    continue;
   VAR_12 = FUNC_2(
    VAR_6->rrsets[VAR_10]->rk.dname, VAR_5->qname);
   if(VAR_12 == 0) {

    if(FUNC_8(VAR_6->rrsets[VAR_10],
     VAR_2))
     return 0;
    FUNC_3(VAR_7, VAR_8);
    return 1;
   } else if(VAR_12 < 0 &&
    FUNC_4(VAR_9, VAR_5->qname)) {

    FUNC_1(VAR_6->rrsets[VAR_10], VAR_5->qname,
     VAR_7, VAR_8);
    return 1;
   }
  }
  return 0;
 }


 if(FUNC_0(VAR_6->flags) == VAR_1) {


  for(VAR_10=0; VAR_10<VAR_6->ns_numrrsets; VAR_10++) {
   if(FUNC_5(VAR_6->rrsets[VAR_10]->rk.type) != VAR_3)
    continue;
   if(FUNC_10(VAR_6->rrsets[VAR_10],
    VAR_5->qname)) {
    FUNC_6(VAR_4, "topdomain on",
     VAR_6->rrsets[VAR_10]->rk.dname,
     FUNC_9(VAR_6->rrsets[VAR_10]->rk.type), 0);
    FUNC_1(VAR_6->rrsets[VAR_10], VAR_5->qname,
     VAR_7, VAR_8);
    return 1;
   }
  }
  return 0;
 }
 return 0;
}
