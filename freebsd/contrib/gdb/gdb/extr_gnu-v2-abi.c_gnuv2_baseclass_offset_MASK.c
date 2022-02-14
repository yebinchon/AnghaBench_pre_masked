
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef int LONGEST ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (struct type*,int) ;
 struct type* FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*,int) ;
 int FUNC_4 (struct type*,int) ;
 int FUNC_5 (struct type*) ;
 int FUNC_6 (struct type*) ;
 int FUNC_7 (struct type*,int,char*,int) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (struct type*,int,struct type*) ;

int
FUNC_10 (struct type *VAR_0, int VAR_1, char *VAR_2,
    CORE_ADDR VAR_3)
{
  struct type *VAR_4 = FUNC_1 (VAR_0, VAR_1);

  if (FUNC_0 (VAR_0, VAR_1))
    {

      int VAR_5, VAR_6 = FUNC_5 (VAR_0);
      int VAR_7 = FUNC_6 (VAR_0);



      for (VAR_5 = VAR_7; VAR_5 < VAR_6; VAR_5++)
 {
   if (FUNC_9 (VAR_0, VAR_5, VAR_4))
     {
       CORE_ADDR VAR_8
       = FUNC_8 (FUNC_4 (VAR_0, VAR_5),
    VAR_2 + (FUNC_3 (VAR_0, VAR_5) / 8));

       return VAR_8 - (LONGEST) VAR_3;
     }
 }

      for (VAR_5 = VAR_1 + 1; VAR_5 < VAR_7; VAR_5++)
 {
   int VAR_9 =
   FUNC_7 (VAR_0, VAR_5, VAR_2, VAR_3);
   if (VAR_9)
     return VAR_9;
 }

      return -1;
    }


  return FUNC_2 (VAR_0, VAR_1) / 8;
}
