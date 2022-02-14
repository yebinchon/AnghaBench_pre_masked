
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_intr_nesting_level; struct kcov_info* td_kcov_info; int * td_intr_frame; } ;
struct kcov_info {int state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static struct kcov_info *
FUNC_1(struct thread *VAR_1)
{
 struct kcov_info *VAR_2;


 if (VAR_1 == ((void*)0))
  return (((void*)0));





 if (VAR_1->td_intr_nesting_level > 0 || VAR_1->td_intr_frame != ((void*)0))
  return (((void*)0));




 VAR_2 = VAR_1->td_kcov_info;
 if (VAR_2 == ((void*)0) ||
     FUNC_0(&VAR_2->state) != VAR_0)
  return (((void*)0));

 return (VAR_2);
}
