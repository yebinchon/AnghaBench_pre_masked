
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace {int resume; int lock; scalar_t__ pending_attach; } ;
typedef enum utrace_resume_action { ____Placeholder_utrace_resume_action } utrace_resume_action ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct utrace*) ;

__attribute__((used)) static enum utrace_resume_action FUNC_3(struct utrace *VAR_2)
{
 enum utrace_resume_action VAR_3 = VAR_2->resume;
 if (VAR_2->pending_attach ||
     (VAR_3 > VAR_0 && VAR_3 < VAR_1)) {
  FUNC_0(&VAR_2->lock);
  FUNC_2(VAR_2);
  VAR_3 = VAR_2->resume;
  if (VAR_3 > VAR_0)
   VAR_2->resume = VAR_1;
  FUNC_1(&VAR_2->lock);
 }
 return VAR_3;
}
