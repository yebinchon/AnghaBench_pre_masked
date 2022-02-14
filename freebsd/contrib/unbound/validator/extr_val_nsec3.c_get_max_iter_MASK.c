
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_env {int nsec3_keyiter_count; size_t* nsec3_keysize; size_t* nsec3_maxiter; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static size_t
FUNC_1(struct val_env* VAR_0, size_t VAR_1)
{
 int VAR_2;
 FUNC_0(VAR_0->nsec3_keyiter_count > 0);

 for(VAR_2=0; VAR_2<VAR_0->nsec3_keyiter_count; VAR_2++) {
  if(VAR_1 <= VAR_0->nsec3_keysize[VAR_2])
   return VAR_0->nsec3_maxiter[VAR_2];
 }

 return VAR_0->nsec3_maxiter[VAR_0->nsec3_keyiter_count-1];
}
