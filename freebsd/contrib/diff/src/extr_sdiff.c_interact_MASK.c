
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
struct line_filter {int dummy; } ;
typedef scalar_t__ lin ;
typedef int FILE ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (struct line_filter*,char const*,scalar_t__,scalar_t__,struct line_filter*,char const*,scalar_t__,scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct line_filter*,scalar_t__,int *) ;
 int FUNC_5 (struct line_filter*,scalar_t__) ;
 int FUNC_6 (struct line_filter*,char*,int) ;
 int FUNC_7 (char*) ;
 int * VAR_1 ;
 scalar_t__ FUNC_8 (char*,char**,int) ;
 int VAR_2 ;

__attribute__((used)) static bool
FUNC_9 (struct line_filter *VAR_3,
   struct line_filter *VAR_4, char const *VAR_5,
   struct line_filter *VAR_6, char const *VAR_7,
   FILE *VAR_8)
{
  lin VAR_9 = 1, VAR_10 = 1;

  for (;;)
    {
      char VAR_11[256];
      int VAR_12 = FUNC_6 (VAR_3, VAR_11, sizeof VAR_11);

      if (VAR_12 <= 0)
 return VAR_12 != 0;

      FUNC_1 ();

      if (VAR_11[0] == ' ')
 FUNC_7 (VAR_11 + 1);
      else
 {
   char *VAR_13;
   uintmax_t VAR_14;
   lin VAR_15, VAR_16, VAR_17;
   VAR_0 = 0;
   VAR_15 = VAR_14 = FUNC_8 (VAR_11 + 1, &VAR_13, 10);
   if (VAR_15 < 0 || VAR_15 != VAR_14 || VAR_0 || *VAR_13 != ',')
     FUNC_3 (VAR_11);
   VAR_16 = VAR_14 = FUNC_8 (VAR_13 + 1, &VAR_13, 10);
   if (VAR_16 < 0 || VAR_16 != VAR_14 || VAR_0 || *VAR_13)
     FUNC_3 (VAR_11);

   VAR_17 = FUNC_0 (VAR_15, VAR_16);

   switch (VAR_11[0])
     {
     case 'i':
       if (VAR_2)
  FUNC_5 (VAR_3, VAR_17);
       else
  FUNC_4 (VAR_3, VAR_17, VAR_1);

       FUNC_4 (VAR_4, VAR_15, VAR_8);
       FUNC_5 (VAR_6, VAR_16);
       break;

     case 'c':
       FUNC_4 (VAR_3, VAR_17, VAR_1);
       if (! FUNC_2 (VAR_4, VAR_5, VAR_9, VAR_15,
     VAR_6, VAR_7, VAR_10, VAR_16,
     VAR_8))
  return 0;
       break;

     default:
       FUNC_3 (VAR_11);
     }

   VAR_9 += VAR_15;
   VAR_10 += VAR_16;
 }
    }
}
