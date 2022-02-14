
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct reply_info {scalar_t__ security; size_t an_numrrsets; size_t ns_numrrsets; TYPE_2__** rrsets; } ;
struct packed_rrset_data {scalar_t__ security; } ;
struct TYPE_6__ {int type; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_5__ {TYPE_1__ entry; TYPE_3__ rk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct reply_info* VAR_2)
{
 size_t VAR_3;
 struct packed_rrset_data* VAR_4;
 if(VAR_2->security != VAR_1)
  return 0;
 for(VAR_3=VAR_2->an_numrrsets; VAR_3< VAR_2->an_numrrsets+VAR_2->ns_numrrsets; VAR_3++){
  if(FUNC_0(VAR_2->rrsets[VAR_3]->rk.type) == VAR_0) {
   VAR_4 = (struct packed_rrset_data*)VAR_2->rrsets[VAR_3]->
    entry.data;
   if(VAR_4->security == VAR_1)
    return 1;
  }
 }
 return 0;
}
