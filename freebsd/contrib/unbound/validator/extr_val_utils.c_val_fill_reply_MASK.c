
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct reply_info {size_t rrset_count; size_t an_numrrsets; size_t ns_numrrsets; size_t ar_numrrsets; TYPE_2__** rrsets; } ;
struct TYPE_3__ {int dname; int type; } ;
struct TYPE_4__ {TYPE_1__ rk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,size_t) ;

void
FUNC_3(struct reply_info* VAR_2, struct reply_info* VAR_3,
 size_t VAR_4, uint8_t* VAR_5, size_t VAR_6, uint8_t* VAR_7)
{
 size_t VAR_8;
 int VAR_9 = 0;
 VAR_2->rrset_count = 0;
 VAR_2->an_numrrsets = 0;
 VAR_2->ns_numrrsets = 0;
 VAR_2->ar_numrrsets = 0;

 for(VAR_8=VAR_4; VAR_8<VAR_3->an_numrrsets; VAR_8++) {
  if(!VAR_7) {
   if(FUNC_1(VAR_5,
    VAR_3->rrsets[VAR_8]->rk.dname) == 0)
    VAR_2->rrsets[VAR_2->an_numrrsets++] =
     VAR_3->rrsets[VAR_8];
  } else if(VAR_9 && FUNC_0(VAR_3->rrsets[VAR_8]->rk.type) ==
   VAR_0) {
   VAR_2->rrsets[VAR_2->an_numrrsets++] = VAR_3->rrsets[VAR_8];
   VAR_9 = 0;
  } else if(FUNC_2(VAR_3->rrsets[VAR_8], VAR_5, VAR_6)) {
   VAR_2->rrsets[VAR_2->an_numrrsets++] = VAR_3->rrsets[VAR_8];
   if(FUNC_0(VAR_3->rrsets[VAR_8]->rk.type) ==
    VAR_1) {
     VAR_9 = 1;
   }
  }
 }

 for(VAR_8 = (VAR_4 > VAR_3->an_numrrsets)?VAR_4:VAR_3->an_numrrsets;
  VAR_8<VAR_3->an_numrrsets+VAR_3->ns_numrrsets;
  VAR_8++) {
  if(!VAR_7) {
   if(FUNC_1(VAR_5,
    VAR_3->rrsets[VAR_8]->rk.dname) == 0)
    VAR_2->rrsets[VAR_2->an_numrrsets+
        VAR_2->ns_numrrsets++] = VAR_3->rrsets[VAR_8];
  } else if(FUNC_2(VAR_3->rrsets[VAR_8], VAR_5, VAR_6)) {
   VAR_2->rrsets[VAR_2->an_numrrsets+
    VAR_2->ns_numrrsets++] = VAR_3->rrsets[VAR_8];
  }
 }

 for(VAR_8= (VAR_4>VAR_3->an_numrrsets+VAR_3->ns_numrrsets)?
  VAR_4:VAR_3->an_numrrsets+VAR_3->ns_numrrsets;
  VAR_8<VAR_3->rrset_count; VAR_8++) {
  if(!VAR_7) {
   if(FUNC_1(VAR_5,
    VAR_3->rrsets[VAR_8]->rk.dname) == 0)
       VAR_2->rrsets[VAR_2->an_numrrsets
    +VAR_3->ns_numrrsets+VAR_2->ar_numrrsets++]
    = VAR_3->rrsets[VAR_8];
  } else if(FUNC_2(VAR_3->rrsets[VAR_8], VAR_5, VAR_6)) {
   VAR_2->rrsets[VAR_2->an_numrrsets+VAR_3->ns_numrrsets+
    VAR_2->ar_numrrsets++] = VAR_3->rrsets[VAR_8];
  }
 }
 VAR_2->rrset_count = VAR_2->an_numrrsets + VAR_2->ns_numrrsets +
  VAR_2->ar_numrrsets;
}
