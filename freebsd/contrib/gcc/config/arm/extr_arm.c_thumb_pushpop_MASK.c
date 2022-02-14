
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ VAR_7 ;
 char* FUNC_1 () ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void
FUNC_8 (FILE *VAR_8, unsigned long VAR_9, int VAR_10, int *VAR_11,
        unsigned long VAR_12)
{
  int VAR_13;
  int VAR_14 = VAR_9 & 0xFF;
  int VAR_15 = 0;

  FUNC_6 (VAR_9);

  if (VAR_14 == 0 && !VAR_10 && (VAR_9 & (1 << VAR_3)))
    {


      FUNC_7 (VAR_8, -1);
      return;
    }

  if (VAR_0 && VAR_10)
    {
      FUNC_5 (VAR_8, "\t.save\t{");
      for (VAR_13 = 0; VAR_13 < 15; VAR_13++)
 {
   if (VAR_12 & (1 << VAR_13))
     {
       if (VAR_12 & ((1 << VAR_13) -1))
  FUNC_5 (VAR_8, ", ");
       FUNC_0 (VAR_8, "%r", VAR_13);
     }
 }
      FUNC_5 (VAR_8, "}\n");
    }

  FUNC_5 (VAR_8, "\t%s\t{", VAR_10 ? "push" : "pop");


  for (VAR_13 = 0; VAR_13 <= VAR_1; VAR_13++, VAR_14 >>= 1)
    {
      if (VAR_14 & 1)
 {
   FUNC_0 (VAR_8, "%r", VAR_13);

   if ((VAR_14 & ~1) != 0)
     FUNC_5 (VAR_8, ", ");

   VAR_15++;
 }
    }

  if (VAR_10 && (VAR_9 & (1 << VAR_2)))
    {

      if (VAR_9 & 0xFF)
 FUNC_5 (VAR_8, ", ");

      FUNC_0 (VAR_8, "%r", VAR_2);

      VAR_15++;
    }
  else if (!VAR_10 && (VAR_9 & (1 << VAR_3)))
    {

      if (VAR_6 || VAR_5
   || VAR_7)
 {


   FUNC_5 (VAR_8, "}\n");

   FUNC_7 (VAR_8, -1);

   return;
 }
      else
 {
   if (VAR_9 & 0xFF)
     FUNC_5 (VAR_8, ", ");

   FUNC_0 (VAR_8, "%r", VAR_3);
 }
    }

  FUNC_5 (VAR_8, "}\n");

  if (VAR_10 && VAR_15 && FUNC_3 ())
    {
      char *VAR_16 = FUNC_1 ();
      int VAR_17 = VAR_12;

      *VAR_11 += VAR_15 * 4;
      FUNC_2 (VAR_16, VAR_4, *VAR_11);

      VAR_15 = 0;
      VAR_17 = VAR_12;
      for (VAR_13 = 0; VAR_13 <= 14; VAR_13++, VAR_17 >>= 1)
 {
   if (VAR_17 & 1)
     FUNC_4 (VAR_16, VAR_13, 4 * VAR_15++ - *VAR_11);
 }
    }
}
