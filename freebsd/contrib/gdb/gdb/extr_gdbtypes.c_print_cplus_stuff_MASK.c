
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int * FUNC_0 (struct type*) ;
 int * FUNC_1 (struct type*) ;
 int * FUNC_2 (struct type*) ;
 scalar_t__ FUNC_3 (struct type*) ;
 scalar_t__ FUNC_4 (struct type*) ;
 scalar_t__ FUNC_5 (struct type*) ;
 scalar_t__ FUNC_6 (struct type*) ;
 int FUNC_7 (struct type*,int) ;
 int FUNC_8 (int *,int ) ;
 int VAR_0 ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,char*,scalar_t__) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13 (struct type *VAR_1, int VAR_2)
{
  FUNC_11 (VAR_2, "n_baseclasses %d\n",
      FUNC_6 (VAR_1));
  FUNC_11 (VAR_2, "nfn_fields %d\n",
      FUNC_4 (VAR_1));
  FUNC_11 (VAR_2, "nfn_fields_total %d\n",
      FUNC_5 (VAR_1));
  if (FUNC_6 (VAR_1) > 0)
    {
      FUNC_11 (VAR_2, "virtual_field_bits (%d bits at *",
   FUNC_6 (VAR_1));
      FUNC_8 (FUNC_2 (VAR_1), VAR_0);
      FUNC_10 (")");

      FUNC_9 (FUNC_2 (VAR_1),
   FUNC_6 (VAR_1));
      FUNC_12 ("\n");
    }
  if (FUNC_3 (VAR_1) > 0)
    {
      if (FUNC_0 (VAR_1) != ((void*)0))
 {
   FUNC_11 (VAR_2, "private_field_bits (%d bits at *",
       FUNC_3 (VAR_1));
   FUNC_8 (FUNC_0 (VAR_1), VAR_0);
   FUNC_10 (")");
   FUNC_9 (FUNC_0 (VAR_1),
       FUNC_3 (VAR_1));
   FUNC_12 ("\n");
 }
      if (FUNC_1 (VAR_1) != ((void*)0))
 {
   FUNC_11 (VAR_2, "protected_field_bits (%d bits at *",
       FUNC_3 (VAR_1));
   FUNC_8 (FUNC_1 (VAR_1), VAR_0);
   FUNC_10 (")");
   FUNC_9 (FUNC_1 (VAR_1),
       FUNC_3 (VAR_1));
   FUNC_12 ("\n");
 }
    }
  if (FUNC_4 (VAR_1) > 0)
    {
      FUNC_7 (VAR_1, VAR_2);
    }
}
