
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct val_env {int dummy; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct packed_rrset_data {size_t count; } ;
struct module_env {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ub_packed_rrset_key*,size_t) ;
 scalar_t__ FUNC_1 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_2 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_3 (struct module_env*,struct ub_packed_rrset_key*,size_t,struct ub_packed_rrset_key*,size_t) ;
 int FUNC_4 (struct ub_packed_rrset_key*,size_t) ;
 scalar_t__ FUNC_5 (struct ub_packed_rrset_key*,size_t) ;
 scalar_t__ FUNC_6 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_7 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_8 (struct ub_packed_rrset_key*) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static int
FUNC_10(struct module_env* VAR_1, struct val_env* VAR_2,
 struct ub_packed_rrset_key* VAR_3, size_t VAR_4,
 struct ub_packed_rrset_key* VAR_5)
{
 struct packed_rrset_data* VAR_6 = (struct packed_rrset_data*)
                 VAR_5->entry.data;
 size_t VAR_7, VAR_8 = VAR_6->count;
 int VAR_9 = FUNC_8(VAR_5);
 char* VAR_10 = "";
 for(VAR_7=0; VAR_7<VAR_8; VAR_7++) {
  if(!FUNC_2(VAR_5, VAR_7) ||
   !FUNC_7(VAR_5, VAR_7) ||
   FUNC_4(VAR_5, VAR_7) != VAR_9)
   continue;
  if(FUNC_5(VAR_5, VAR_7)
     != FUNC_1(VAR_3, VAR_4)
     || FUNC_0(VAR_3, VAR_4)
     != FUNC_6(VAR_5, VAR_7)) {
   continue;
  }
  if(!FUNC_3(VAR_1, VAR_3, VAR_4,
   VAR_5, VAR_7)) {
   FUNC_9(VAR_0, "DS match attempt failed");
   continue;
  }

  (void)VAR_10;
  (void)VAR_2;
  return 1;
 }
 return 0;
}
