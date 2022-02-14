
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct type*,int) ;
 struct type* FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*) ;
 int VAR_1 ;
 int FUNC_3 (struct type*) ;
 scalar_t__ FUNC_4 (struct type*,int) ;
 scalar_t__ FUNC_5 (struct type*,int) ;
 scalar_t__ FUNC_6 (struct type*,int) ;
 scalar_t__ FUNC_7 (struct type*,int) ;
 int FUNC_8 (struct type*,int ,struct ui_file*,int,int) ;
 int FUNC_9 (struct ui_file*,char*,...) ;
 int FUNC_10 (struct type*,int,struct type*,struct ui_file*,int,int) ;

__attribute__((used)) static int
FUNC_11 (struct type *VAR_2, struct type *VAR_3,
     struct ui_file *VAR_4, int VAR_5, int VAR_6)
{
  int VAR_7, VAR_8, VAR_9;

  VAR_9 = 0;
  VAR_7 = FUNC_3 (VAR_2);

  if (VAR_7 == 0 && (FUNC_2 (VAR_2) & VAR_1) != 0)
    return -1;

  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8 += 1)
    {
      VAR_0;

      if (FUNC_5 (VAR_2, VAR_8) || FUNC_4 (VAR_2, VAR_8))
 ;
      else if (FUNC_7 (VAR_2, VAR_8))
 VAR_9 += FUNC_11 (FUNC_1 (VAR_2, VAR_8), VAR_2,
       VAR_4, VAR_5, VAR_6);
      else if (FUNC_6 (VAR_2, VAR_8))
 {
   FUNC_10 (VAR_2, VAR_8, VAR_3, VAR_4, VAR_5, VAR_6);
   VAR_9 = 1;
 }
      else
 {
   VAR_9 += 1;
   FUNC_9 (VAR_4, "\n%*s", VAR_6 + 4, "");
   FUNC_8 (FUNC_1 (VAR_2, VAR_8),
     FUNC_0 (VAR_2, VAR_8),
     VAR_4, VAR_5 - 1, VAR_6 + 4);
   FUNC_9 (VAR_4, ";");
 }
    }

  return VAR_9;
}
