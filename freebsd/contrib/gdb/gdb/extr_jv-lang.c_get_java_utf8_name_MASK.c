
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct obstack {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct value*) ;
 scalar_t__ FUNC_2 (struct value*) ;
 int FUNC_3 (struct value*) ;
 char* FUNC_4 (struct obstack*,int) ;
 int FUNC_5 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_6 (struct value*) ;
 struct value* FUNC_7 (struct value**,int *,char*,int *,char*) ;

char *
FUNC_8 (struct obstack *VAR_0, struct value *VAR_1)
{
  char *VAR_2;
  struct value *VAR_3 = VAR_1;
  int VAR_4;
  CORE_ADDR VAR_5;
  VAR_3 = FUNC_7 (&VAR_3, ((void*)0), "length", ((void*)0), "structure");
  VAR_4 = (int) FUNC_6 (VAR_3);
  VAR_5 = FUNC_1 (VAR_3) + FUNC_2 (VAR_3)
    + FUNC_0 (FUNC_3 (VAR_3));
  VAR_2 = FUNC_4 (VAR_0, VAR_4 + 1);
  VAR_2[VAR_4] = '\0';
  FUNC_5 (VAR_5, VAR_2, VAR_4);
  return VAR_2;
}
