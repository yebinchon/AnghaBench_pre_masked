
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef scalar_t__ formals_style ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 char* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (char const*) ;
 int VAR_1 ;
 char* FUNC_9 (char const*,char const*,int *) ;
 char* VAR_2 ;
 char const* FUNC_10 (int ,int ) ;
 char* FUNC_11 (char const*,int ,scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static const char *
FUNC_12 (tree VAR_4, int VAR_5, formals_style VAR_6)
{
  const char *VAR_7;

  if (FUNC_1 (VAR_4))
    VAR_7 = FUNC_2 (FUNC_1 (VAR_4));
  else
    VAR_7 = "";





  if (VAR_6 == VAR_3)
    return VAR_7;
  if (FUNC_6 (VAR_4))
    VAR_7 = FUNC_9 ("volatile ", VAR_7, ((void*)0));
  if (FUNC_5 (VAR_4))
    VAR_7 = FUNC_9 ("const ", VAR_7, ((void*)0));

  VAR_2 = "";
  if (FUNC_3 (VAR_4) == VAR_0 && VAR_5)
    {
      VAR_7 = FUNC_9 (VAR_7, FUNC_10 (VAR_4, VAR_1),
   ((void*)0));
      VAR_7 = FUNC_11 (VAR_7, FUNC_7 (FUNC_7 (VAR_4)), VAR_6);
    }
  else
    VAR_7 = FUNC_11 (VAR_7, FUNC_7 (VAR_4), VAR_6);

  VAR_7 = FUNC_8 (VAR_7);

  if (FUNC_3 (VAR_4) != VAR_0 && FUNC_0 (VAR_4))
    VAR_7 = FUNC_9 ("register ", VAR_7, ((void*)0));
  if (FUNC_4 (VAR_4))
    VAR_7 = FUNC_9 ("extern ", VAR_7, ((void*)0));
  if (FUNC_3 (VAR_4) == VAR_0 && !FUNC_4 (VAR_4))
    VAR_7 = FUNC_9 ("static ", VAR_7, ((void*)0));

  return VAR_7;
}
