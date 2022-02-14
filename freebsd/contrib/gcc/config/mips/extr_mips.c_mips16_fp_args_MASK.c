
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,char const*,char*,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 char** VAR_5 ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_6, int VAR_7, int VAR_8)
{
  const char *VAR_9;
  int VAR_10, VAR_11;
  unsigned int VAR_12;


  FUNC_1 (VAR_4);

  if (VAR_8)
    VAR_9 = "mfc1";
  else
    VAR_9 = "mtc1";
  VAR_10 = VAR_1;
  VAR_11 = VAR_0;
  for (VAR_12 = (unsigned int) VAR_7; VAR_12 != 0; VAR_12 >>= 2)
    {
      if ((VAR_12 & 3) == 1)
 {
   if ((VAR_11 & 1) != 0)
     ++VAR_11;
   FUNC_0 (VAR_6, "\t%s\t%s,%s\n", VAR_9,
     VAR_5[VAR_10], VAR_5[VAR_11]);
 }
      else if ((VAR_12 & 3) == 2)
 {
   if (VAR_2)
     FUNC_0 (VAR_6, "\td%s\t%s,%s\n", VAR_9,
       VAR_5[VAR_10], VAR_5[VAR_11]);
   else
     {
       if ((VAR_11 & 1) != 0)
  ++VAR_11;
       if (VAR_3)
  FUNC_0 (VAR_6, "\t%s\t%s,%s\n\t%s\t%s,%s\n", VAR_9,
    VAR_5[VAR_10], VAR_5[VAR_11 + 1], VAR_9,
    VAR_5[VAR_10 + 1], VAR_5[VAR_11]);
       else
  FUNC_0 (VAR_6, "\t%s\t%s,%s\n\t%s\t%s,%s\n", VAR_9,
    VAR_5[VAR_10], VAR_5[VAR_11], VAR_9,
    VAR_5[VAR_10 + 1], VAR_5[VAR_11 + 1]);
       ++VAR_10;
       ++VAR_11;
     }
 }
      else
 FUNC_2 ();

      ++VAR_10;
      ++VAR_11;
    }
}
