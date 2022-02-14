
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int flags; char* opt_text; char* help; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const*) ;
 TYPE_1__* VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (char*,int ,unsigned int) ;
 unsigned int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (char) ;
 char* FUNC_4 (char const*,char) ;
 unsigned int FUNC_5 (char const*) ;
 char* VAR_5 ;
 int FUNC_6 (char const*,char const*,unsigned int) ;
 char* FUNC_7 (unsigned int) ;

__attribute__((used)) static void
FUNC_8 (unsigned int VAR_6)
{
  unsigned int VAR_7, VAR_8, VAR_9, VAR_10 = 0;
  bool VAR_11 = 0;
  const char *VAR_12, *VAR_13, *VAR_14;
  static char *VAR_15;

  if (VAR_6 == VAR_0 || VAR_6 == VAR_1)
    {
      VAR_9 = VAR_6;
      if (!VAR_15)
 VAR_15 = FUNC_7 (VAR_4);
      FUNC_1 (VAR_15, 0, VAR_4);
    }
  else
    {

      VAR_9 = VAR_6 | VAR_0;

      for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
 {
   if ((VAR_3[VAR_7].flags & VAR_9) != VAR_6)
     continue;


   if (VAR_3[VAR_7].flags & VAR_2)
     continue;



   if (VAR_15[VAR_7])
     {
       VAR_11 = 1;
       VAR_10 = FUNC_2 (VAR_3[VAR_7].opt_text, VAR_10);
     }
 }

      if (VAR_11)
 {
   FUNC_3 ('\n');
   FUNC_3 ('\n');
 }
    }

  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
    {
      if ((VAR_3[VAR_7].flags & VAR_9) != VAR_6)
 continue;


      if (VAR_3[VAR_7].flags & VAR_2)
 continue;


      if (VAR_15[VAR_7])
 continue;

      VAR_15[VAR_7] = 1;

      VAR_12 = VAR_3[VAR_7].help;
      if (!VAR_12)
 VAR_12 = VAR_5;


      VAR_12 = FUNC_0(VAR_12);

      VAR_14 = FUNC_4 (VAR_12, '\t');
      if (VAR_14)
 {
   VAR_8 = VAR_14 - VAR_12;
   VAR_13 = VAR_12;
   VAR_12 = VAR_14 + 1;
 }
      else
 {
   VAR_13 = VAR_3[VAR_7].opt_text;
   VAR_8 = FUNC_5 (VAR_13);
 }

      FUNC_6 (VAR_12, VAR_13, VAR_8);
    }

  FUNC_3 ('\n');
}
