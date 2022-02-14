
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct regional {int dummy; } ;
struct query_info {scalar_t__ qtype; TYPE_2__* local_alias; } ;
struct local_rrset {int dummy; } ;
struct config_strlist {int dummy; } ;
struct TYPE_4__ {int rrset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct query_info*,struct config_strlist*,struct ub_packed_rrset_key*,struct regional*) ;
 int FUNC_2 (struct regional*,struct ub_packed_rrset_key*,int) ;
 TYPE_2__* FUNC_3 (struct regional*,int) ;

__attribute__((used)) static int
FUNC_4(struct query_info* VAR_1, struct config_strlist* VAR_2,
 struct ub_packed_rrset_key* VAR_3, struct regional* VAR_4)
{
 int VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);




 if(VAR_5 && VAR_1->qtype != VAR_0 &&
  VAR_3->rk.type == FUNC_0(VAR_0)) {
  VAR_1->local_alias =
   FUNC_3(VAR_4, sizeof(struct local_rrset));
  if(!VAR_1->local_alias)
   return 0;
  VAR_1->local_alias->rrset =
   FUNC_2(VAR_4, VAR_3, sizeof(*VAR_3));
  if(!VAR_1->local_alias->rrset)
   return 0;
 }
 return VAR_5;
}
