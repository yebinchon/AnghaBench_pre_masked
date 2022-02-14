
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct reply_info {size_t an_numrrsets; size_t ns_numrrsets; TYPE_3__** rrsets; } ;
struct packed_rrset_data {scalar_t__ rrsig_count; } ;
struct TYPE_5__ {int rrset_class; int type; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_6__ {TYPE_2__ rk; TYPE_1__ entry; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int **,size_t*) ;

__attribute__((used)) static uint8_t* FUNC_2(struct reply_info* VAR_2, size_t* VAR_3,
 uint16_t* VAR_4)
{
 size_t VAR_5;
 struct packed_rrset_data* VAR_6;
 uint8_t* VAR_7;
 for(VAR_5=VAR_2->an_numrrsets; VAR_5< VAR_2->an_numrrsets+VAR_2->ns_numrrsets; VAR_5++){
  if(FUNC_0(VAR_2->rrsets[VAR_5]->rk.type) == VAR_0 ||
   FUNC_0(VAR_2->rrsets[VAR_5]->rk.type) == VAR_1) {
   VAR_6 = (struct packed_rrset_data*)VAR_2->rrsets[VAR_5]->
    entry.data;

   if(VAR_6->rrsig_count != 0) {
    FUNC_1(VAR_2->rrsets[VAR_5],
     &VAR_7, VAR_3);
    if(VAR_7 && *VAR_3) {
     *VAR_4 = FUNC_0(VAR_2->rrsets[VAR_5]->
      rk.rrset_class);
     return VAR_7;
    }
   }
  }
 }
 return 0;
}
