
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_desc {int dummy; } ;
typedef scalar_t__ rtx ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,int,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (int ,scalar_t__,scalar_t__,int,int) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (struct attr_desc*,scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_11 (struct attr_desc *VAR_5, int VAR_6, rtx VAR_7,
  const char *VAR_8, const char *VAR_9, rtx VAR_10,
  int VAR_11, int VAR_12)
{
  if (FUNC_0 (VAR_7) == VAR_1)
    {


      rtx VAR_13 = FUNC_1 (VAR_7, 1);
      rtx VAR_14 = VAR_10;
      rtx VAR_15;
      int VAR_16 = 1;
      int VAR_17;

      for (VAR_17 = 0; VAR_17 < FUNC_3 (VAR_7, 0); VAR_17 += 2)
 {
   rtx VAR_18;
   rtx VAR_19;

   VAR_18 = FUNC_5 (VAR_14,
       FUNC_2 (VAR_7, 0, VAR_17),
       VAR_11, VAR_12);
   VAR_15 = FUNC_4 (VAR_2, VAR_18);
   VAR_15 = FUNC_6 (VAR_0, VAR_14, VAR_15,
          VAR_11, VAR_12);




   if (VAR_18 == VAR_4 || VAR_15 == VAR_3)
     {
       VAR_13 = FUNC_2 (VAR_7, 0, VAR_17 + 1);
       break;
     }



   VAR_19 = FUNC_6 (VAR_0, VAR_14,
       VAR_18, VAR_11, VAR_12);


   if (VAR_19 == VAR_3)
     continue;

   FUNC_9 (VAR_6);
   FUNC_7 ("%sif ", VAR_16 ? "" : "else ");
   VAR_16 = 0;
   FUNC_10 (VAR_18, 0);
   FUNC_7 ("\n");
   FUNC_9 (VAR_6 + 2);
   FUNC_7 ("{\n");

   FUNC_11 (VAR_5, VAR_6 + 4,
     FUNC_2 (VAR_7, 0, VAR_17 + 1), VAR_8, VAR_9,
     VAR_19, VAR_11, VAR_12);
   FUNC_9 (VAR_6 + 2);
   FUNC_7 ("}\n");
   VAR_14 = VAR_15;
 }

      if (! VAR_16)
 {
   FUNC_9 (VAR_6);
   FUNC_7 ("else\n");
   FUNC_9 (VAR_6 + 2);
   FUNC_7 ("{\n");
 }

      FUNC_11 (VAR_5, VAR_16 ? VAR_6 : VAR_6 + 4, VAR_13,
        VAR_8, VAR_9, VAR_14, VAR_11, VAR_12);

      if (! VAR_16)
 {
   FUNC_9 (VAR_6 + 2);
   FUNC_7 ("}\n");
 }
    }
  else
    {
      FUNC_9 (VAR_6);
      FUNC_7 ("%s ", VAR_8);
      FUNC_8 (VAR_5, VAR_7);
      FUNC_7 ("%s\n", VAR_9);
    }
}
