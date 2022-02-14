
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void ucl_object_t ;
struct TYPE_4__ {int n; int * a; } ;
struct TYPE_5__ {TYPE_1__ ar; } ;
typedef TYPE_2__ ucl_hash_t ;
typedef struct ucl_hash_real_iter* ucl_hash_iter_t ;
struct ucl_hash_real_iter {int * cur; int * end; } ;


 struct ucl_hash_real_iter* FUNC_0 (int) ;
 int FUNC_1 (int,struct ucl_hash_real_iter*) ;

const void*
FUNC_2 (ucl_hash_t *VAR_0, ucl_hash_iter_t *VAR_1)
{
 struct ucl_hash_real_iter *VAR_2 = (struct ucl_hash_real_iter *)(*VAR_1);
 const ucl_object_t *VAR_3 = ((void*)0);

 if (VAR_0 == ((void*)0)) {
  return ((void*)0);
 }

 if (VAR_2 == ((void*)0)) {
  VAR_2 = FUNC_0 (sizeof (*VAR_2));

  if (VAR_2 == ((void*)0)) {
   return ((void*)0);
  }

  VAR_2->cur = &VAR_0->ar.a[0];
  VAR_2->end = VAR_2->cur + VAR_0->ar.n;
 }

 if (VAR_2->cur < VAR_2->end) {
  VAR_3 = *VAR_2->cur++;
 }
 else {
  FUNC_1 (sizeof (*VAR_2), VAR_2);
  *VAR_1 = ((void*)0);
  return ((void*)0);
 }

 *VAR_1 = VAR_2;

 return VAR_3;
}
