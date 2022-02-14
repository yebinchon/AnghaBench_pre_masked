
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct z_candidate {struct z_candidate* next; int fn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,char,size_t) ;
 int FUNC_6 (char const*,struct z_candidate*) ;

__attribute__((used)) static void
FUNC_7 (struct z_candidate *VAR_1)
{
  const char *VAR_2;
  struct z_candidate *VAR_3;
  struct z_candidate **VAR_4;






  for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next)
    {
      tree VAR_5 = VAR_3->fn;

      if (FUNC_0 (VAR_5) != VAR_0)
 continue;
      VAR_4 = &VAR_3->next;
      while (*VAR_4)
 {
   if (FUNC_0 ((*VAR_4)->fn) == VAR_0
       && FUNC_3 (VAR_5, (*VAR_4)->fn))
     *VAR_4 = (*VAR_4)->next;
   else
     VAR_4 = &(*VAR_4)->next;
 }
    }

  if (!VAR_1)
    return;

  VAR_2 = FUNC_1("candidates are:");
  FUNC_6 (VAR_2, VAR_1);
  if (VAR_1->next)
    {


      size_t VAR_6 = FUNC_4 (VAR_2) + 1;
      char *VAR_7 = (char *) FUNC_2 (VAR_6);
      FUNC_5 (VAR_7, ' ', VAR_6-1);
      VAR_7[VAR_6 - 1] = '\0';

      VAR_1 = VAR_1->next;
      do
 {
   FUNC_6 (VAR_7, VAR_1);
   VAR_1 = VAR_1->next;
 }
      while (VAR_1);
    }
}
