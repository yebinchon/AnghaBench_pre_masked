
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct val_env {int nsec3_keyiter_count; scalar_t__ neg_cache; int * nsec3_maxiter; int skew_max; int skew_min; int date_override; scalar_t__ kcache; scalar_t__ bogus_ttl; } ;
struct module_env {scalar_t__ neg_cache; scalar_t__ anchors; scalar_t__ key_cache; } ;
struct config_file {int val_nsec3_key_iterations; int val_sig_skew_max; int val_sig_skew_min; int val_date_override; scalar_t__ bogus_ttl; } ;


 int FUNC_0 (scalar_t__,struct config_file*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct val_env*,int ,int) ;
 scalar_t__ FUNC_4 (struct config_file*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (struct config_file*,int ) ;

__attribute__((used)) static int
FUNC_7(struct module_env* VAR_0, struct val_env* VAR_1,
 struct config_file* VAR_2)
{
 int VAR_3;
 VAR_1->bogus_ttl = (uint32_t)VAR_2->bogus_ttl;
 if(!VAR_0->anchors)
  VAR_0->anchors = FUNC_1();
 if(!VAR_0->anchors) {
  FUNC_5("out of memory");
  return 0;
 }
 if(!VAR_1->kcache)
  VAR_1->kcache = FUNC_4(VAR_2);
 if(!VAR_1->kcache) {
  FUNC_5("out of memory");
  return 0;
 }
 VAR_0->key_cache = VAR_1->kcache;
 if(!FUNC_0(VAR_0->anchors, VAR_2)) {
  FUNC_5("validator: error in trustanchors config");
  return 0;
 }
 VAR_1->date_override = VAR_2->val_date_override;
 VAR_1->skew_min = VAR_2->val_sig_skew_min;
 VAR_1->skew_max = VAR_2->val_sig_skew_max;
 VAR_3 = FUNC_2(VAR_2->val_nsec3_key_iterations);
 if(VAR_3 < 1 || (VAR_3&1)) {
  FUNC_5("validator: unparseable or odd nsec3 key "
   "iterations: %s", VAR_2->val_nsec3_key_iterations);
  return 0;
 }
 VAR_1->nsec3_keyiter_count = VAR_3/2;
 if(!FUNC_3(VAR_1, VAR_2->val_nsec3_key_iterations, VAR_3/2)) {
  FUNC_5("validator: cannot apply nsec3 key iterations");
  return 0;
 }
 if(!VAR_1->neg_cache)
  VAR_1->neg_cache = FUNC_6(VAR_2,
   VAR_1->nsec3_maxiter[VAR_1->nsec3_keyiter_count-1]);
 if(!VAR_1->neg_cache) {
  FUNC_5("out of memory");
  return 0;
 }
 VAR_0->neg_cache = VAR_1->neg_cache;
 return 1;
}
