
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 struct type* FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*) ;
 struct type* FUNC_3 (struct type*) ;
 int FUNC_4 (struct value*) ;
 int FUNC_5 (struct value*) ;
 struct type* FUNC_6 (struct type*,char*) ;
 int FUNC_7 (struct type*,int ,int ) ;
 scalar_t__ FUNC_8 (struct type*) ;
 struct type* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct type*,int) ;
 struct type* FUNC_11 (struct type*,char*,int ,struct value*) ;

__attribute__((used)) static struct type *
FUNC_12 (struct type *VAR_1, char *VAR_2,
         CORE_ADDR VAR_3, struct value *VAR_4)
{
  int VAR_5;
  struct type *VAR_6;
  struct type *VAR_7;

  if (FUNC_0 (VAR_1) == VAR_0)
    VAR_7 = FUNC_3 (VAR_1);
  else
    VAR_7 = VAR_1;

  VAR_6 = FUNC_6 (VAR_7, "___XVU");

  if (VAR_6 != ((void*)0))
    VAR_7 = VAR_6;

  VAR_5 =
    FUNC_7 (VAR_7,
          FUNC_5 (VAR_4), FUNC_4 (VAR_4));

  if (VAR_5 < 0)
    return FUNC_9 (FUNC_2 (VAR_7));
  else if (FUNC_10 (VAR_7, VAR_5))
    return
      FUNC_11
      (FUNC_3 (FUNC_1 (VAR_7, VAR_5)),
       VAR_2, VAR_3, VAR_4);
  else if (FUNC_8 (FUNC_1 (VAR_7, VAR_5)))
    return
      FUNC_11
      (FUNC_1 (VAR_7, VAR_5), VAR_2, VAR_3, VAR_4);
  else
    return FUNC_1 (VAR_7, VAR_5);
}
