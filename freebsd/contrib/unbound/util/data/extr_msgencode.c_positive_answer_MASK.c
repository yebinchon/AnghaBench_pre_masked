
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct reply_info {size_t an_numrrsets; size_t ns_numrrsets; TYPE_2__** rrsets; int flags; } ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ rk; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct reply_info* VAR_3, uint16_t VAR_4) {
 size_t VAR_5;
 if (FUNC_0(VAR_3->flags) != VAR_0)
  return 0;

 for(VAR_5=0;VAR_5<VAR_3->an_numrrsets; VAR_5++) {
  if(FUNC_1(VAR_3->rrsets[VAR_5]->rk.type) == VAR_4) {



   for(VAR_5=VAR_3->an_numrrsets; VAR_5<VAR_3->an_numrrsets+
    VAR_3->ns_numrrsets; VAR_5++) {
    if(FUNC_1(VAR_3->rrsets[VAR_5]->rk.type) ==
     VAR_1 ||
       FUNC_1(VAR_3->rrsets[VAR_5]->rk.type) ==
        VAR_2)
     return 0;
   }
   return 1;
  }
 }
 return 0;
}
