
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char unichar ;
typedef int rc_uint_type ;
typedef char bfd_byte ;
typedef int FILE ;


 int FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int,char const*) ;
 scalar_t__ FUNC_4 (int,char const*) ;
 int FUNC_5 (int *,char const*,int) ;
 scalar_t__ FUNC_6 (int *,char const*,int) ;
 scalar_t__ FUNC_7 (int *,char const*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_8 (FILE *VAR_1, rc_uint_type VAR_2, const bfd_byte *VAR_3, int VAR_4,
      int VAR_5, int VAR_6)
{
  int VAR_7;

  if (VAR_5)
    FUNC_1 (VAR_1, "BEGIN\n");

  if (VAR_6 == -1)
   {
      if (FUNC_3(VAR_2, VAR_3))
 {
   rc_uint_type VAR_8, VAR_9;
   for (VAR_8 = 0; VAR_8 < VAR_2;)
     {
       FUNC_2 (VAR_1, 2);
       FUNC_1 (VAR_1, "\"");

       for (VAR_9 = 0; VAR_8 < VAR_2 && VAR_9 < 160 && VAR_3[VAR_8] != '\n'; VAR_9++, VAR_8++)
  ;
       if (VAR_8 < VAR_2 && VAR_3[VAR_8] == '\n')
  ++VAR_8, ++VAR_9;
       FUNC_0 (VAR_1, (const char *) &VAR_3[VAR_8 - VAR_9], VAR_9);
     FUNC_1 (VAR_1, "\"");
       if (VAR_8 < VAR_2)
  FUNC_1 (VAR_1, "\n");
     }

   if (VAR_8 == 0)
       {
       FUNC_2 (VAR_1, 2);
       FUNC_1 (VAR_1, "\"\"");
       }
   if (VAR_4)
     FUNC_1 (VAR_1, ",");
   FUNC_1 (VAR_1, "\n");
   if (VAR_5)
     FUNC_1 (VAR_1, "END\n");
   return;
   }
      if (FUNC_4 (VAR_2, VAR_3))
 {
   rc_uint_type VAR_10, VAR_11;
   for (VAR_10 = 0; VAR_10 < VAR_2;)
     {
       const unichar *VAR_12;

       VAR_12 = (const unichar *) &VAR_3[VAR_10];
       FUNC_2 (VAR_1, 2);
   FUNC_1 (VAR_1, "L\"");

       for (VAR_11 = 0; VAR_10 < VAR_2 && VAR_11 < 160 && VAR_12[VAR_11] != '\n'; VAR_11++, VAR_10 += 2)
  ;
       if (VAR_10 < VAR_2 && VAR_12[VAR_11] == '\n')
  VAR_10 += 2, ++VAR_11;
       FUNC_5 (VAR_1, VAR_12, VAR_11);
   FUNC_1 (VAR_1, "\"");
       if (VAR_10 < VAR_2)
  FUNC_1 (VAR_1, "\n");
     }

   if (VAR_10 == 0)
   {
       FUNC_2 (VAR_1, 2);
       FUNC_1 (VAR_1, "L\"\"");
     }
   if (VAR_4)
     FUNC_1 (VAR_1, ",");
   FUNC_1 (VAR_1, "\n");
   if (VAR_5)
     FUNC_1 (VAR_1, "END\n");
   return;
 }

      VAR_6 = 0;
    }

  if (VAR_2 != 0)
       {
      rc_uint_type VAR_13, VAR_14;
      int VAR_15 = 1;

      VAR_14 = (VAR_6 ? 4 : 8);
      FUNC_2 (VAR_1, 2);
      for (VAR_13 = 0; VAR_13 + 3 < VAR_2;)
    {
   rc_uint_type VAR_16;
   rc_uint_type VAR_17;

   VAR_17 = VAR_13;

   if (! VAR_15)
     FUNC_2 (VAR_1, 2);

   for (VAR_16 = 0; VAR_16 < VAR_14 && VAR_13 + 3 < VAR_2; VAR_16++, VAR_13 += 4)
        {
       if (VAR_16 == 0)
  VAR_7 = FUNC_1 (VAR_1, "0x%lxL",
     (long) FUNC_7 (&VAR_0, VAR_3 + VAR_13, VAR_2 - VAR_13));
   else
  VAR_7 = FUNC_1 (VAR_1, " 0x%lxL",
    (long) FUNC_7 (&VAR_0, VAR_3 + VAR_13, VAR_2 - VAR_13)) - 1;
       if (VAR_4 || (VAR_13 + 4) < VAR_2)
     {
    if (VAR_7>0 && VAR_7 < 11)
      FUNC_2 (VAR_1, 11 - VAR_7);
    FUNC_1 (VAR_1, ",");
     }
        }
   if (VAR_6)
     {
       FUNC_1 (VAR_1, "\t/* ");
       FUNC_0 (VAR_1, (const char *) &VAR_3[VAR_17], VAR_13 - VAR_17);
       FUNC_1 (VAR_1, ".  */");
    }
  FUNC_1 (VAR_1, "\n");
  VAR_15 = 0;
       }

      if (VAR_13 + 1 < VAR_2)
       {
  if (! VAR_15)
     FUNC_2 (VAR_1, 2);
   VAR_7 = FUNC_1 (VAR_1, "0x%x",
       (int) FUNC_6 (&VAR_0, VAR_3 + VAR_13, VAR_2 - VAR_13));
   if (VAR_4 || VAR_13 + 2 < VAR_2)
    {
       if (VAR_7 > 0 && VAR_7 < 11)
  FUNC_2 (VAR_1, 11 - VAR_7);
       FUNC_1 (VAR_1, ",");
        }
   if (VAR_6)
     {
       FUNC_1 (VAR_1, "\t/* ");
       FUNC_0 (VAR_1, (const char *) &VAR_3[VAR_13], 2);
       FUNC_1 (VAR_1, ".  */");
    }
  FUNC_1 (VAR_1, "\n");
  VAR_13 += 2;
  VAR_15 = 0;
       }

      if (VAR_13 < VAR_2)
       {
  if (! VAR_15)
     FUNC_2 (VAR_1, 2);
   FUNC_1 (VAR_1, "\"");
   FUNC_0 (VAR_1, (const char *) &VAR_3[VAR_13], 1);
   FUNC_1 (VAR_1, "\"");
   if (VAR_4)
    FUNC_1 (VAR_1, ",");
  FUNC_1 (VAR_1, "\n");
  VAR_15 = 0;
       }
    }
  if (VAR_5)
    FUNC_1 (VAR_1, "END\n");
}
