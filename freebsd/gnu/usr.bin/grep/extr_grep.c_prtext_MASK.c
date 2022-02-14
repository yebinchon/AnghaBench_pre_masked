
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 char const* VAR_5 ;
 char* FUNC_0 (char const*,char,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (char const*,char const*,char) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (char const *VAR_11, char const *VAR_12, int *VAR_13)
{
  static int VAR_14;
  char const *VAR_15, *VAR_16;
  char VAR_17 = VAR_4;
  int VAR_18, VAR_19;

  if (!VAR_8 && VAR_10 > 0)
    FUNC_2 (VAR_11);

  VAR_16 = VAR_11;

  if (!VAR_8)
    {


      VAR_15 = VAR_5 ? VAR_5 : VAR_1;
      for (VAR_18 = 0; VAR_18 < VAR_7; ++VAR_18)
 if (VAR_16 > VAR_15)
   do
     --VAR_16;
   while (VAR_16[-1] != VAR_17);



      if ((VAR_7 || VAR_6) && VAR_14 && VAR_16 != VAR_5)
 FUNC_3 ("--");

      while (VAR_16 < VAR_11)
 {
   char const *VAR_20 = FUNC_0 (VAR_16, VAR_17, VAR_11 - VAR_16);
   VAR_20++;
   FUNC_1 (VAR_16, VAR_20, '-');
   VAR_16 = VAR_20;
 }
    }

  if (VAR_13)
    {

      for (VAR_19 = 0; VAR_16 < VAR_12 && VAR_19 < VAR_9; VAR_19++)
 {
   char const *VAR_21 = FUNC_0 (VAR_16, VAR_17, VAR_12 - VAR_16);
   VAR_21++;
   if (!VAR_8)
     FUNC_1 (VAR_16, VAR_21, ':');
   VAR_16 = VAR_21;
 }
      *VAR_13 = VAR_19;


      VAR_0 = VAR_3 - (VAR_2 - VAR_16);
    }
  else
    if (!VAR_8)
      FUNC_1 (VAR_11, VAR_12, ':');

  VAR_10 = VAR_8 ? 0 : VAR_6;
  VAR_14 = 1;
}
