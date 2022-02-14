
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_env {size_t* nsec3_keysize; size_t* nsec3_maxiter; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,size_t) ;
 int FUNC_1 (size_t*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (char*,char**,int) ;
 int FUNC_4 (int ,char*,int,int) ;

__attribute__((used)) static int
FUNC_5(struct val_env* VAR_1, char* VAR_2, int VAR_3)
{
 char* VAR_4;
 int VAR_5;
 FUNC_1(VAR_1->nsec3_keysize);
 FUNC_1(VAR_1->nsec3_maxiter);
 VAR_1->nsec3_keysize = (size_t*)FUNC_0(sizeof(size_t), (size_t)VAR_3);
 VAR_1->nsec3_maxiter = (size_t*)FUNC_0(sizeof(size_t), (size_t)VAR_3);
 if(!VAR_1->nsec3_keysize || !VAR_1->nsec3_maxiter) {
  FUNC_2("out of memory");
  return 0;
 }
 for(VAR_5=0; VAR_5<VAR_3; VAR_5++) {
  VAR_1->nsec3_keysize[VAR_5] = (size_t)FUNC_3(VAR_2, &VAR_4, 10);
  if(VAR_2 == VAR_4) {
   FUNC_2("cannot parse: %s", VAR_2);
   return 0;
  }
  VAR_2 = VAR_4;
  VAR_1->nsec3_maxiter[VAR_5] = (size_t)FUNC_3(VAR_2, &VAR_4, 10);
  if(VAR_2 == VAR_4) {
   FUNC_2("cannot parse: %s", VAR_2);
   return 0;
  }
  VAR_2 = VAR_4;
  if(VAR_5>0 && VAR_1->nsec3_keysize[VAR_5-1] >= VAR_1->nsec3_keysize[VAR_5]) {
   FUNC_2("nsec3 key iterations not ascending: %d %d",
    (int)VAR_1->nsec3_keysize[VAR_5-1],
    (int)VAR_1->nsec3_keysize[VAR_5]);
   return 0;
  }
  FUNC_4(VAR_0, "validator nsec3cfg keysz %d mxiter %d",
   (int)VAR_1->nsec3_keysize[VAR_5], (int)VAR_1->nsec3_maxiter[VAR_5]);
 }
 return 1;
}
