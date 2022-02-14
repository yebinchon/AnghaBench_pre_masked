
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nsec3_cached_hash {int rr; int nsec3; int dname; } ;


 int FUNC_0 (int *,int *,size_t) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int **,size_t*) ;
 int FUNC_4 (int ,int ) ;

int
FUNC_5(const void* VAR_0, const void* VAR_1)
{
 struct nsec3_cached_hash* VAR_2 = (struct nsec3_cached_hash*)VAR_0;
 struct nsec3_cached_hash* VAR_3 = (struct nsec3_cached_hash*)VAR_1;
 uint8_t* VAR_4, *VAR_5;
 size_t VAR_6, VAR_7;
 int VAR_8 = FUNC_4(VAR_2->dname, VAR_3->dname);
 if(VAR_8 != 0)
  return VAR_8;


 if(FUNC_1(VAR_2->nsec3, VAR_2->rr) !=
  FUNC_1(VAR_3->nsec3, VAR_3->rr)) {
  if(FUNC_1(VAR_2->nsec3, VAR_2->rr) <
   FUNC_1(VAR_3->nsec3, VAR_3->rr))
   return -1;
  return 1;
 }
 if(FUNC_2(VAR_2->nsec3, VAR_2->rr) !=
  FUNC_2(VAR_3->nsec3, VAR_3->rr)) {
  if(FUNC_2(VAR_2->nsec3, VAR_2->rr) <
   FUNC_2(VAR_3->nsec3, VAR_3->rr))
   return -1;
  return 1;
 }
 (void)FUNC_3(VAR_2->nsec3, VAR_2->rr, &VAR_4, &VAR_6);
 (void)FUNC_3(VAR_3->nsec3, VAR_3->rr, &VAR_5, &VAR_7);
 if(VAR_6 == 0 && VAR_7 == 0)
  return 0;
 if(!VAR_4) return -1;
 if(!VAR_5) return 1;
 if(VAR_6 != VAR_7) {
  if(VAR_6 < VAR_7)
   return -1;
  return 1;
 }
 return FUNC_0(VAR_4, VAR_5, VAR_6);
}
