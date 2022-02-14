
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct reply_info {int ns_numrrsets; size_t an_numrrsets; TYPE_3__** rrsets; } ;
struct packed_rrset_data {scalar_t__ security; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_6__ {TYPE_2__ entry; TYPE_1__ rk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct reply_info* VAR_3)
{
 size_t VAR_4;

 if(VAR_3->ns_numrrsets != 1 || VAR_3->an_numrrsets == 0)
  return 0;
 if(FUNC_0(VAR_3->rrsets[ VAR_3->an_numrrsets ]->rk.type) != VAR_0)
  return 0;
 if(((struct packed_rrset_data*)VAR_3->rrsets[ VAR_3->an_numrrsets ]
  ->entry.data)->security == VAR_2)
  return 0;

 for(VAR_4=0; VAR_4<VAR_3->an_numrrsets; VAR_4++) {
  if(((struct packed_rrset_data*)VAR_3->rrsets[ VAR_4 ]
   ->entry.data)->security != VAR_2)
   return 0;
 }
 FUNC_1(VAR_1, "truncating to minimal response");
 return 1;
}
