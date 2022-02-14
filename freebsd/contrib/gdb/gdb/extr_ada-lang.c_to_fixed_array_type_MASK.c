
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct type*,int) ;
 struct type* FUNC_1 (struct type*) ;
 scalar_t__ FUNC_2 (struct type*) ;
 int FUNC_3 (struct type*) ;
 int FUNC_4 (struct type*) ;
 struct type* FUNC_5 (struct type*) ;
 struct type* FUNC_6 (struct type*,char*) ;
 struct type* FUNC_7 (struct type*,int ,int ,struct value*) ;
 int FUNC_8 (int ) ;
 struct type* FUNC_9 (struct type*) ;
 struct type* FUNC_10 (int ,struct type*,struct type*) ;
 int FUNC_11 (char*) ;
 struct type* FUNC_12 (int ,struct value*,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static struct type *
FUNC_13 (struct type *VAR_1, struct value *VAR_2,
       int VAR_3)
{
  struct type *VAR_4;
  struct type *VAR_5;






  VAR_4 = FUNC_6 (VAR_1, "___XA");
  if (VAR_4 == ((void*)0))
    {
      struct type *VAR_6 = FUNC_9 (FUNC_5 (VAR_1));



      struct type *VAR_7 = FUNC_7 (VAR_6, 0, 0, VAR_2);

      if (VAR_6 == VAR_7)
 VAR_5 = VAR_1;
      else
 VAR_5 = FUNC_10 (FUNC_8 (FUNC_4 (VAR_1)),
        VAR_7, FUNC_1 (VAR_1));
    }
  else
    {
      int VAR_8;
      struct type *VAR_9;

      VAR_9 = VAR_1;
      for (VAR_8 = FUNC_3 (VAR_4); VAR_8 > 0; VAR_8 -= 1)
 VAR_9 = FUNC_5 (VAR_9);




      VAR_5 = FUNC_7 (FUNC_9 (VAR_9), 0, 0, VAR_2);
      for (VAR_8 = FUNC_3 (VAR_4) - 1; VAR_8 >= 0; VAR_8 -= 1)
 {
   struct type *VAR_10 =
     FUNC_12 (FUNC_0 (VAR_4, VAR_8),
     VAR_2, FUNC_4 (VAR_1));
   VAR_5 = FUNC_10 (FUNC_8 (FUNC_4 (VAR_1)),
          VAR_5, VAR_10);
 }
      if (!VAR_3 && FUNC_2 (VAR_5) > VAR_0)
 FUNC_11 ("array type with dynamic size is larger than varsize-limit");
    }



  return VAR_5;
}
