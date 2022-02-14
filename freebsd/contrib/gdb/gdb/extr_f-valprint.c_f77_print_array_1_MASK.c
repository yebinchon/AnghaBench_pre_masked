
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef enum val_prettyprint { ____Placeholder_val_prettyprint } val_prettyprint ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct type* FUNC_2 (struct type*) ;
 int FUNC_3 (struct ui_file*,char*) ;
 int VAR_0 ;
 int FUNC_4 (struct type*,char*,int ,scalar_t__,struct ui_file*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_5 (int VAR_1, int VAR_2, struct type *VAR_3, char *VAR_4,
     CORE_ADDR VAR_5, struct ui_file *VAR_6, int VAR_7,
     int VAR_8, int VAR_9, enum val_prettyprint VAR_10,
     int *VAR_11)
{
  int VAR_12;

  if (VAR_1 != VAR_2)
    {
      for (VAR_12 = 0; (VAR_12 < FUNC_1 (VAR_1) && (*VAR_11) < VAR_0); VAR_12++)
 {
   FUNC_3 (VAR_6, "( ");
   FUNC_5 (VAR_1 + 1, VAR_2, FUNC_2 (VAR_3),
        VAR_4 + VAR_12 * FUNC_0 (VAR_1),
        VAR_5 + VAR_12 * FUNC_0 (VAR_1),
        VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
   FUNC_3 (VAR_6, ") ");
 }
      if (*VAR_11 >= VAR_0 && VAR_12 < FUNC_1 (VAR_1))
 FUNC_3 (VAR_6, "...");
    }
  else
    {
      for (VAR_12 = 0; VAR_12 < FUNC_1 (VAR_1) && (*VAR_11) < VAR_0;
    VAR_12++, (*VAR_11)++)
 {
   FUNC_4 (FUNC_2 (VAR_3),
       VAR_4 + VAR_12 * FUNC_0 (VAR_2),
       0,
       VAR_5 + VAR_12 * FUNC_0 (VAR_2),
       VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);

   if (VAR_12 != (FUNC_1 (VAR_1) - 1))
     FUNC_3 (VAR_6, ", ");

   if ((*VAR_11 == VAR_0 - 1) && (VAR_12 != (FUNC_1 (VAR_1) - 1)))
     FUNC_3 (VAR_6, "...");
 }
    }
}
