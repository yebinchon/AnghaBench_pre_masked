
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_env {int dummy; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct nsec3_filter {int dummy; } ;
struct key_entry_key {int dummy; } ;


 int VAR_0 ;
 struct ub_packed_rrset_key* FUNC_0 (struct nsec3_filter*,size_t*,int*) ;
 struct ub_packed_rrset_key* FUNC_1 (struct nsec3_filter*,size_t*,int*) ;
 size_t FUNC_2 (struct val_env*,size_t) ;
 size_t FUNC_3 (struct key_entry_key*) ;
 size_t FUNC_4 (struct ub_packed_rrset_key*,int) ;
 int FUNC_5 (int ,char*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct val_env* VAR_1, struct nsec3_filter* VAR_2,
 struct key_entry_key* VAR_3)
{
 size_t VAR_4;
 int VAR_5;
 struct ub_packed_rrset_key* VAR_6;

 size_t VAR_7 = FUNC_3(VAR_3);
 size_t VAR_8 = FUNC_2(VAR_1, VAR_7);
 FUNC_5(VAR_0, "nsec3: keysize %d bits, max iterations %d",
  (int)VAR_7, (int)VAR_8);

 for(VAR_6=FUNC_0(VAR_2, &VAR_4, &VAR_5); VAR_6;
  VAR_6=FUNC_1(VAR_2, &VAR_4, &VAR_5)) {
  if(FUNC_4(VAR_6, VAR_5) > VAR_8)
   return 1;
 }
 return 0;
}
