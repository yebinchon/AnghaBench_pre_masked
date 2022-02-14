
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,char*) ;
 char const* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 char const* FUNC_9 (scalar_t__,int) ;

__attribute__((used)) static const char *
FUNC_10 (tree VAR_4, int VAR_5)
{
  int VAR_6 = 0;
  if (VAR_5)
    VAR_6 |= VAR_1;

  if (VAR_4 == VAR_0)
    return "";

  if (FUNC_2 (FUNC_1 (VAR_4)))
    return FUNC_9 (VAR_4, VAR_6);

  FUNC_8 ();
  for (; VAR_4; VAR_4 = FUNC_0 (VAR_4))
    {
      if (FUNC_1 (VAR_4) == VAR_3)
 FUNC_5 (VAR_2, "NULL");
      else
 FUNC_3 (FUNC_4 (FUNC_1 (VAR_4)), VAR_6);
      if (FUNC_0 (VAR_4))
 FUNC_7 (VAR_2);
    }
  return FUNC_6 (VAR_2);
}
