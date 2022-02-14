
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct fn_field {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (struct symbol*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct type* FUNC_3 (struct type*) ;
 struct fn_field* FUNC_4 (struct type*,unsigned int) ;
 int FUNC_5 (struct type*,unsigned int) ;
 int FUNC_6 (struct fn_field*,int) ;
 int FUNC_7 (struct fn_field*,int) ;
 unsigned int FUNC_8 (struct type*) ;
 int FUNC_9 (struct type*) ;
 int FUNC_10 (struct type*,unsigned int) ;
 struct type* FUNC_11 (int ) ;
 char* FUNC_12 (int,int) ;
 int FUNC_13 (char*) ;
 struct symbol* FUNC_14 (scalar_t__) ;
 int FUNC_15 (struct ui_file*,char*,...) ;
 int FUNC_16 (char*,struct ui_file*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_17 (int ,int) ;
 int FUNC_18 (struct type*,char*,struct ui_file*,int) ;
 scalar_t__ FUNC_19 (struct type*,char*) ;
 int FUNC_20 (char*) ;

void
FUNC_21 (char *VAR_3,
         struct type *VAR_4,
         struct ui_file *VAR_5)
{
  struct type *VAR_6;
  struct fn_field *VAR_7 = ((void*)0);
  int VAR_8 = 0;
  int VAR_9;
  int VAR_10;
  char *VAR_11 = "";
  CORE_ADDR VAR_12;
  struct symbol *VAR_13;
  unsigned VAR_14;
  unsigned int VAR_15;
  struct type *VAR_16 = FUNC_11 (FUNC_9 (VAR_4));

  VAR_6 = FUNC_3 (VAR_16);
  if (VAR_6 == (struct type *) ((void*)0))
    {
      FUNC_15 (VAR_5, "<unknown>");
      return;
    }
  VAR_12 = FUNC_19 (VAR_4, VAR_3);
  if (FUNC_1 (VAR_12))
    {
      VAR_10 = FUNC_2 (VAR_12);
      VAR_14 = FUNC_8 (VAR_6);
      for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
 {
   VAR_7 = FUNC_4 (VAR_6, VAR_15);
   VAR_9 = FUNC_5 (VAR_6, VAR_15);

   FUNC_10 (VAR_6, VAR_15);
   for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
     {
       if (FUNC_7 (VAR_7, VAR_8) == VAR_10)
  {
    VAR_11 = "virtual ";
    goto common;
  }
     }
 }
    }
  else
    {
      VAR_13 = FUNC_14 (VAR_12);
      if (VAR_13 == 0)
 {

   if (VAR_2)
     {
       FUNC_16 ("?? <not supported with HP aCC>", VAR_5);
       return;
     }
   FUNC_13 ("invalid pointer to member function");
 }
      VAR_14 = FUNC_8 (VAR_6);
      for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
 {
   VAR_7 = FUNC_4 (VAR_6, VAR_15);
   VAR_9 = FUNC_5 (VAR_6, VAR_15);

   FUNC_10 (VAR_6, VAR_15);
   for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
     {
       if (FUNC_17 (FUNC_0 (VAR_13), FUNC_6 (VAR_7, VAR_8))
    == 0)
  goto common;
     }
 }
    }
 common:
  if (VAR_15 < VAR_14)
    {
      char *VAR_17;

      FUNC_15 (VAR_5, "&");
      FUNC_16 (VAR_11, VAR_5);
      VAR_17 = FUNC_12 (FUNC_6 (VAR_7, VAR_8),
           VAR_0 | VAR_1);
      if (VAR_17 == ((void*)0))
 FUNC_15 (VAR_5, "<badly mangled name %s>",
     FUNC_6 (VAR_7, VAR_8));
      else
 {
   FUNC_16 (VAR_17, VAR_5);
   FUNC_20 (VAR_17);
 }
    }
  else
    {
      FUNC_15 (VAR_5, "(");
      FUNC_18 (VAR_4, "", VAR_5, -1);
      FUNC_15 (VAR_5, ") %d", (int) VAR_12 >> 3);
    }
}
