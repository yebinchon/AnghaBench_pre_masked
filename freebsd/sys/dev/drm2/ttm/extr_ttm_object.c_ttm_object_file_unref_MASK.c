
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_object_file {int refcount; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ttm_object_file*) ;

__attribute__((used)) static inline void FUNC_2(struct ttm_object_file **VAR_0)
{
 struct ttm_object_file *VAR_1 = *VAR_0;

 *VAR_0 = ((void*)0);
 if (FUNC_0(&VAR_1->refcount))
  FUNC_1(VAR_1);
}
