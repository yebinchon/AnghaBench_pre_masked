
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct internalvar {struct value* value; } ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (struct value*) ;
 int FUNC_2 (struct value*) ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (char*,int ,int,int) ;
 int FUNC_5 (struct value*) ;

void
FUNC_6 (struct internalvar *VAR_0, int VAR_1, int VAR_2,
      int VAR_3, struct value *VAR_4)
{
  char *VAR_5 = FUNC_1 (VAR_0->value) + VAR_1;

  if (VAR_3)
    FUNC_4 (VAR_5, FUNC_5 (VAR_4),
    VAR_2, VAR_3);
  else
    FUNC_3 (VAR_5, FUNC_1 (VAR_4), FUNC_0 (FUNC_2 (VAR_4)));
}
