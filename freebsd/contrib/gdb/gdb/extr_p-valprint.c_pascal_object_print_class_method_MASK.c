
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct fn_field {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct symbol*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct type* FUNC_4 (struct type*) ;
 struct fn_field* FUNC_5 (struct type*,unsigned int) ;
 int FUNC_6 (struct type*,unsigned int) ;
 int FUNC_7 (struct fn_field*,int) ;
 int FUNC_8 (struct fn_field*,int) ;
 unsigned int FUNC_9 (struct type*) ;
 int FUNC_10 (struct type*) ;
 int VAR_2 ;
 int FUNC_11 (struct type*,unsigned int) ;
 struct type* FUNC_12 (int ) ;
 char* FUNC_13 (int,int) ;
 int FUNC_14 (char*) ;
 struct symbol* FUNC_15 (scalar_t__) ;
 int FUNC_16 (struct ui_file*,char*,...) ;
 int FUNC_17 (char*,struct ui_file*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct type*,char*,struct ui_file*,int) ;
 scalar_t__ FUNC_20 (int ,char*) ;
 int FUNC_21 (char*) ;

void
FUNC_22 (char *VAR_3, struct type *VAR_4,
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
  struct type *VAR_16 = FUNC_12 (FUNC_10 (VAR_4));

  VAR_6 = FUNC_4 (VAR_16);
  if (VAR_6 == (struct type *) ((void*)0))
    {
      FUNC_16 (VAR_5, "<unknown>");
      return;
    }
  VAR_12 = FUNC_20 (FUNC_18 (VAR_2), VAR_3);
  if (FUNC_2 (VAR_12))
    {
      VAR_10 = FUNC_3 (VAR_12);
      VAR_14 = FUNC_9 (VAR_6);
      for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
 {
   VAR_7 = FUNC_5 (VAR_6, VAR_15);
   VAR_9 = FUNC_6 (VAR_6, VAR_15);

   FUNC_11 (VAR_6, VAR_15);
   for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
     {
       if (FUNC_8 (VAR_7, VAR_8) == VAR_10)
  {
    VAR_11 = "virtual ";
    goto common;
  }
     }
 }
    }
  else
    {
      VAR_13 = FUNC_15 (VAR_12);
      if (VAR_13 == 0)
 {
   FUNC_14 ("invalid pointer to member function");
 }
      VAR_14 = FUNC_9 (VAR_6);
      for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
 {
   VAR_7 = FUNC_5 (VAR_6, VAR_15);
   VAR_9 = FUNC_6 (VAR_6, VAR_15);

   FUNC_11 (VAR_6, VAR_15);
   for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
     {
       if (FUNC_0 (FUNC_1 (VAR_13), FUNC_7 (VAR_7, VAR_8)))
  goto common;
     }
 }
    }
common:
  if (VAR_15 < VAR_14)
    {
      char *VAR_17;

      FUNC_16 (VAR_5, "&");
      FUNC_17 (VAR_11, VAR_5);
      VAR_17 = FUNC_13 (FUNC_7 (VAR_7, VAR_8),
           VAR_0 | VAR_1);
      if (VAR_17 == ((void*)0))
 FUNC_16 (VAR_5, "<badly mangled name %s>",
     FUNC_7 (VAR_7, VAR_8));
      else
 {
   FUNC_17 (VAR_17, VAR_5);
   FUNC_21 (VAR_17);
 }
    }
  else
    {
      FUNC_16 (VAR_5, "(");
      FUNC_19 (VAR_4, "", VAR_5, -1);
      FUNC_16 (VAR_5, ") %d", (int) VAR_12 >> 3);
    }
}
