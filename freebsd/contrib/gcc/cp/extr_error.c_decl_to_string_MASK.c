
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int) ;
 char const* FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static const char *
FUNC_4 (tree VAR_10, int VAR_11)
{
  int VAR_12 = 0;

  if (FUNC_0 (VAR_10) == VAR_7 || FUNC_0 (VAR_10) == VAR_2
      || FUNC_0 (VAR_10) == VAR_8 || FUNC_0 (VAR_10) == VAR_0)
    VAR_12 = VAR_3;
  if (VAR_11)
    VAR_12 |= VAR_4;
  else if (FUNC_0 (VAR_10) == VAR_1)
    VAR_12 |= VAR_4 | VAR_5;
  VAR_12 |= VAR_6;

  FUNC_3 ();
  FUNC_1 (VAR_10, VAR_12);
  return FUNC_2 (VAR_9);
}
