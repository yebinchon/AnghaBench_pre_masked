
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct fn_field {int dummy; } ;


 struct fn_field* FUNC_0 (struct type*,int) ;
 int FUNC_1 (struct type*) ;
 int FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*,int) ;
 int FUNC_4 (struct fn_field*,int) ;
 int FUNC_5 (struct fn_field*,int) ;
 int FUNC_6 (struct fn_field*,int) ;
 int FUNC_7 (struct fn_field*,int) ;
 int FUNC_8 (struct fn_field*,int) ;
 int FUNC_9 (struct fn_field*,int) ;
 int FUNC_10 (struct fn_field*,int) ;
 int FUNC_11 (struct fn_field*,int) ;
 int FUNC_12 (struct fn_field*,int) ;
 int FUNC_13 (struct fn_field*,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct type*) ;
 int FUNC_16 (int ,int ) ;
 int VAR_0 ;
 int FUNC_17 (int ,int ,int) ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (int,char*,...) ;
 int FUNC_20 (int ,int) ;

__attribute__((used)) static void
FUNC_21 (struct type *VAR_1, int VAR_2)
{
  int VAR_3;
  int VAR_4;
  struct fn_field *VAR_5;

  FUNC_19 (VAR_2, "fn_fieldlists ");
  FUNC_16 (FUNC_1 (VAR_1), VAR_0);
  FUNC_18 ("\n");
  for (VAR_3 = 0; VAR_3 < FUNC_15 (VAR_1); VAR_3++)
    {
      VAR_5 = FUNC_0 (VAR_1, VAR_3);
      FUNC_19 (VAR_2 + 2, "[%d] name '%s' (",
   VAR_3,
   FUNC_3 (VAR_1, VAR_3));
      FUNC_16 (FUNC_3 (VAR_1, VAR_3),
         VAR_0);
      FUNC_18 (") length %d\n",
         FUNC_2 (VAR_1, VAR_3));
      for (VAR_4 = 0;
    VAR_4 < FUNC_2 (VAR_1, VAR_3);
    VAR_4++)
 {
   FUNC_19 (VAR_2 + 4, "[%d] physname '%s' (",
       VAR_4,
       FUNC_7 (VAR_5, VAR_4));
   FUNC_16 (FUNC_7 (VAR_5, VAR_4),
      VAR_0);
   FUNC_18 (")\n");
   FUNC_19 (VAR_2 + 8, "type ");
   FUNC_16 (FUNC_11 (VAR_5, VAR_4), VAR_0);
   FUNC_18 ("\n");

   FUNC_20 (FUNC_11 (VAR_5, VAR_4),
          VAR_2 + 8 + 2);

   FUNC_19 (VAR_2 + 8, "args ");
   FUNC_16 (FUNC_4 (VAR_5, VAR_4), VAR_0);
   FUNC_18 ("\n");

   FUNC_17 (FUNC_4 (VAR_5, VAR_4),
      FUNC_14 (FUNC_11 (VAR_5, VAR_4)),
      VAR_2);
   FUNC_19 (VAR_2 + 8, "fcontext ");
   FUNC_16 (FUNC_6 (VAR_5, VAR_4),
      VAR_0);
   FUNC_18 ("\n");

   FUNC_19 (VAR_2 + 8, "is_const %d\n",
       FUNC_5 (VAR_5, VAR_4));
   FUNC_19 (VAR_2 + 8, "is_volatile %d\n",
       FUNC_13 (VAR_5, VAR_4));
   FUNC_19 (VAR_2 + 8, "is_private %d\n",
       FUNC_8 (VAR_5, VAR_4));
   FUNC_19 (VAR_2 + 8, "is_protected %d\n",
       FUNC_9 (VAR_5, VAR_4));
   FUNC_19 (VAR_2 + 8, "is_stub %d\n",
       FUNC_10 (VAR_5, VAR_4));
   FUNC_19 (VAR_2 + 8, "voffset %u\n",
       FUNC_12 (VAR_5, VAR_4));
 }
    }
}
