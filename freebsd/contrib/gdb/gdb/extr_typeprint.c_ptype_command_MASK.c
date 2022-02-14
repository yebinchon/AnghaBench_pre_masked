
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct expression {int dummy; } ;
struct cleanup {int dummy; } ;


 int FUNC_0 (struct cleanup*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cleanup* FUNC_1 (int ,struct expression**) ;
 struct expression* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 struct type* FUNC_4 (struct expression*) ;
 int FUNC_5 (struct type*,char*,int ,int) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void
FUNC_7 (char *VAR_2, int VAR_3)
{
  struct type *VAR_4;
  struct expression *VAR_5;
  struct cleanup *VAR_6;

  if (VAR_2 == ((void*)0))
    {

      FUNC_6 (VAR_2, 1);
    }
  else
    {
      VAR_5 = FUNC_2 (VAR_2);
      VAR_6 = FUNC_1 (VAR_0, &VAR_5);
      VAR_4 = FUNC_4 (VAR_5);
      if (VAR_4 != ((void*)0))
 {

   FUNC_3 ("type = ");
   FUNC_5 (VAR_4, "", VAR_1, 1);
   FUNC_3 ("\n");
   FUNC_0 (VAR_6);
 }
      else
 {

   FUNC_0 (VAR_6);
   FUNC_6 (VAR_2, 1);
 }
    }
}
