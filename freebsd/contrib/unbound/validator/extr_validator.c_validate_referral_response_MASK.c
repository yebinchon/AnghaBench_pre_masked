
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reply_info {int security; size_t rrset_count; TYPE_2__** rrsets; } ;
struct packed_rrset_data {int security; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;
struct TYPE_3__ {scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__ entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_2(struct reply_info* VAR_2)
{
 size_t VAR_3;
 enum sec_status VAR_4;

 VAR_2->security = VAR_1;
 for(VAR_3=0; VAR_3<VAR_2->rrset_count; VAR_3++) {
  VAR_4 = ((struct packed_rrset_data*)VAR_2->rrsets[VAR_3]
   ->entry.data)->security;
  if(VAR_4 < VAR_2->security)
   VAR_2->security = VAR_4;
 }
 FUNC_1(VAR_0, "validated part of referral response as %s",
  FUNC_0(VAR_2->security));
}
