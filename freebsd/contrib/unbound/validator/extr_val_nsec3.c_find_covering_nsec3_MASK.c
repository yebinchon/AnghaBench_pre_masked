
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ub_packed_rrset_key {int dummy; } ;
struct nsec3_filter {int zone; } ;
struct nsec3_cached_hash {int dummy; } ;
struct module_env {int scratch_buffer; int scratch; } ;
typedef int rbtree_type ;


 struct ub_packed_rrset_key* FUNC_0 (struct nsec3_filter*,size_t*,int*) ;
 struct ub_packed_rrset_key* FUNC_1 (struct nsec3_filter*,size_t*,int*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,struct nsec3_cached_hash*,struct ub_packed_rrset_key*,int,int ) ;
 int FUNC_4 (int *,int ,int ,struct ub_packed_rrset_key*,int,int *,size_t,struct nsec3_cached_hash**) ;

__attribute__((used)) static int
FUNC_5(struct module_env* VAR_0, struct nsec3_filter* VAR_1,
        rbtree_type* VAR_2, uint8_t* VAR_3, size_t VAR_4,
 struct ub_packed_rrset_key** VAR_5, int* VAR_6)
{
 size_t VAR_7;
 int VAR_8;
 struct ub_packed_rrset_key* VAR_9;
 struct nsec3_cached_hash* VAR_10 = ((void*)0);
 int VAR_11;


 for(VAR_9=FUNC_0(VAR_1, &VAR_7, &VAR_8); VAR_9;
  VAR_9=FUNC_1(VAR_1, &VAR_7, &VAR_8)) {

  VAR_11 = FUNC_4(VAR_2, VAR_0->scratch, VAR_0->scratch_buffer,
   VAR_9, VAR_8, VAR_3, VAR_4, &VAR_10);
  if(VAR_11 == 0) {
   FUNC_2("nsec3: malloc failure");
   break;
  } else if(VAR_11 != 1)
   continue;
  else if(FUNC_3(VAR_1->zone, VAR_10, VAR_9, VAR_8,
   VAR_0->scratch_buffer)) {
   *VAR_5 = VAR_9;
   *VAR_6 = VAR_8;
   return 1;
  }
 }
 *VAR_5 = ((void*)0);
 *VAR_6 = 0;
 return 0;
}
