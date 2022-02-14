
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {struct lwp_info* next; } ;


 struct lwp_info* VAR_0 ;
 int FUNC_0 (struct lwp_info*,void*) ;

struct lwp_info *
FUNC_1 (int (*VAR_1) (struct lwp_info *, void *), void *VAR_2)
{
  struct lwp_info *VAR_3, *VAR_4;

  for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_4)
    {
      VAR_4 = VAR_3->next;
      if ((*VAR_1) (VAR_3, VAR_2))
 return VAR_3;
    }

  return ((void*)0);
}
