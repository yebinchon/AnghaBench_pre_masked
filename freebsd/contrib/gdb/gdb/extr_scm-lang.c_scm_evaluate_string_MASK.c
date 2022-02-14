
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
typedef scalar_t__ LONGEST ;


 struct value* FUNC_0 (struct value*,int,struct value**) ;
 struct value* FUNC_1 (char*) ;
 struct value* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct value*) ;
 int FUNC_4 (scalar_t__,char*,int) ;

struct value *
FUNC_5 (char *VAR_0, int VAR_1)
{
  struct value *VAR_2;
  struct value *VAR_3 = FUNC_2 (VAR_1 + 1);
  LONGEST VAR_4 = FUNC_3 (VAR_3);
  FUNC_4 (VAR_4, VAR_0, VAR_1);

  FUNC_4 (VAR_4 + VAR_1, "", 1);
  VAR_2 = FUNC_1 ("scm_evstr");
  return FUNC_0 (VAR_2, 1, &VAR_3);
}
