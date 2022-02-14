
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct rrset_cache {int dummy; } ;
struct reply_info {size_t rrset_count; TYPE_3__** rrsets; } ;
struct packed_rrset_data {scalar_t__ security; } ;
struct module_env {int * now; } ;
struct TYPE_5__ {int dname; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_6__ {TYPE_2__ rk; TYPE_1__ entry; } ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rrset_cache*,TYPE_3__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_2(struct reply_info* VAR_2, uint8_t* VAR_3,
 struct rrset_cache* VAR_4, struct module_env* VAR_5)
{
 size_t VAR_6;
 struct packed_rrset_data* VAR_7;
 for(VAR_6=0; VAR_6<VAR_2->rrset_count; VAR_6++) {
  VAR_7 = (struct packed_rrset_data*)VAR_2->rrsets[VAR_6]->entry.data;
  if(VAR_7->security == VAR_1 &&
     FUNC_0(VAR_2->rrsets[VAR_6]->rk.dname, VAR_3)) {

   VAR_7->security = VAR_0;
   FUNC_1(VAR_4, VAR_2->rrsets[VAR_6], *VAR_5->now);
  }
 }
}
