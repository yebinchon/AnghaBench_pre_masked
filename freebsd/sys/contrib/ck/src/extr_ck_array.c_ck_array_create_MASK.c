
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_malloc {struct _ck_array* (* malloc ) (int) ;} ;
struct _ck_array {unsigned int length; scalar_t__ n_committed; } ;


 struct _ck_array* FUNC_0 (int) ;

__attribute__((used)) static struct _ck_array *
FUNC_1(struct ck_malloc *VAR_0, unsigned int VAR_1)
{
 struct _ck_array *VAR_2;

 VAR_2 = VAR_0->malloc(sizeof(struct _ck_array) + sizeof(void *) * VAR_1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_2->n_committed = 0;
 VAR_2->length = VAR_1;

 return VAR_2;
}
