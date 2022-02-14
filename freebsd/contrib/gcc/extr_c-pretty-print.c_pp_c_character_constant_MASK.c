
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int c_pretty_printer ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,unsigned int) ;
 int FUNC_8 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_9 (c_pretty_printer *VAR_1, tree VAR_2)
{
  tree VAR_3 = FUNC_1 (VAR_2);
  if (VAR_3 == VAR_0)
    FUNC_5 (VAR_1, 'L');
  FUNC_6 (VAR_1);
  if (FUNC_3 (VAR_2, FUNC_2 (VAR_3)))
    FUNC_4 (VAR_1, FUNC_8 (VAR_2, FUNC_2 (VAR_3)));
  else
    FUNC_7 (VAR_1, "\\x%x", (unsigned) FUNC_0 (VAR_2));
  FUNC_6 (VAR_1);
}
