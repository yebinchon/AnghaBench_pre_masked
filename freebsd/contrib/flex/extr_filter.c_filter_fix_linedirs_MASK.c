
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter {int dummy; } ;
typedef int regmatch_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,int const,int ) ;
 scalar_t__ FUNC_5 (int const) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*) ;
 char* VAR_1 ;
 int FUNC_9 (int ,char*) ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (int *,char*,int,int *,int ) ;
 char* FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*,int *,int ) ;
 int FUNC_13 (char*,int const,char*,int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_14 (char*,char*) ;

int FUNC_15 (struct filter *VAR_7)
{
 char *VAR_8;
 const int VAR_9 = 512;
 int VAR_10 = 1;
 bool VAR_11 = 1;
 bool VAR_12 = 0;

 if (!VAR_7)
  return 0;

 VAR_8 = (char *) FUNC_5 (VAR_9);
 if (!VAR_8)
  FUNC_6 (FUNC_0("flex_alloc failed in filter_fix_linedirs"));

 while (FUNC_4 (VAR_8, VAR_9, VAR_5)) {

  regmatch_t VAR_13[10];


  if (VAR_8[0] == '#'
   && FUNC_10 (&VAR_4, VAR_8, 3, VAR_13, 0) == 0) {

   int VAR_14;
   char *VAR_15;


   VAR_14 = FUNC_12 (&VAR_13[1], VAR_8, ((void*)0), 0);
   VAR_15 = FUNC_11 (&VAR_13[2], VAR_8);

   if (FUNC_14 (VAR_15,
    VAR_2 ? VAR_2 : "<stdout>")
     == 0
    || FUNC_14 (VAR_15,
     VAR_1 ? VAR_1 : "<stdout>")
     == 0) {

    char *VAR_16, *VAR_17;
    char VAR_18[VAR_0];

    VAR_16 = VAR_15;
    VAR_17 = VAR_18;

    while ((VAR_17 - VAR_18) < (VAR_0 - 1) && *VAR_16) {

     if (*VAR_16 == '\\')
      *VAR_17++ = '\\';

     if (*VAR_16 == '\"')
      *VAR_17++ = '\\';

     *VAR_17++ = *VAR_16++;
    }

    *VAR_17 = '\0';


    VAR_11 = 1;
    FUNC_13 (VAR_8, VAR_9, "#line %d \"%s\"\n",
       VAR_10 + 1, VAR_18);
   }
   else {

    VAR_11 = 0;
   }

   FUNC_8 (VAR_15);
   VAR_12 = 0;
  }


  else if (VAR_11
    && FUNC_10 (&VAR_3, VAR_8, 0, ((void*)0),
         0) == 0) {
   if (VAR_12)
    continue;
   else
    VAR_12 = 1;
  }

  else {

   VAR_12 = 0;
  }

  FUNC_7 (VAR_8, VAR_6);
  VAR_10++;
 }
 FUNC_3 (VAR_6);
 if (FUNC_2 (VAR_6))
  FUNC_9 (FUNC_0("error writing output file %s"),
   VAR_2 ? VAR_2 : "<stdout>");

 else if (FUNC_1 (VAR_6))
  FUNC_9 (FUNC_0("error closing output file %s"),
   VAR_2 ? VAR_2 : "<stdout>");

 return 0;
}
