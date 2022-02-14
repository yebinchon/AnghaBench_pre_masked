
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct type*) ;
 double FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (char*,scalar_t__,double) ;
 int FUNC_4 (char*,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_5 (int VAR_0, struct type *VAR_1,
        char *VAR_2, char *VAR_3)
{
  if (FUNC_1 (VAR_1) != FUNC_0 (VAR_0))
    {
      double VAR_4 = FUNC_2 (VAR_2, FUNC_0 (VAR_0));
      FUNC_3 (VAR_3, FUNC_1 (VAR_1), VAR_4);
    }
  else
    FUNC_4 (VAR_3, VAR_2, FUNC_0 (VAR_0));
}
