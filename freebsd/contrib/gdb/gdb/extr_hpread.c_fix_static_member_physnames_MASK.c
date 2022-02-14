
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct objfile {int objfile_obstack; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (struct type*) ;
 char* FUNC_3 (struct type*,int) ;
 scalar_t__ FUNC_4 (struct type*,int) ;
 scalar_t__ FUNC_5 (struct type*,int) ;
 int FUNC_6 (struct type*) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (scalar_t__,char*) ;
 int FUNC_9 (scalar_t__,char*) ;
 scalar_t__ FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11 (struct type *VAR_1, char *VAR_2,
        struct objfile *VAR_3)
{
  int VAR_4;


  if (FUNC_1 (VAR_1) != VAR_0)
    return;

  for (VAR_4 = 0; VAR_4 < FUNC_6 (VAR_1); VAR_4++)
    if (FUNC_4 (VAR_1, VAR_4))
      {
 if (FUNC_5 (VAR_1, VAR_4))
   return;

 FUNC_0 (FUNC_2 (VAR_1)[VAR_4],
       FUNC_7 (&VAR_3->objfile_obstack,
      FUNC_10 (VAR_2) + FUNC_10 (FUNC_3 (VAR_1, VAR_4)) + 3));
 FUNC_9 (FUNC_5 (VAR_1, VAR_4), VAR_2);
 FUNC_8 (FUNC_5 (VAR_1, VAR_4), "::");
 FUNC_8 (FUNC_5 (VAR_1, VAR_4), FUNC_3 (VAR_1, VAR_4));
      }
}
