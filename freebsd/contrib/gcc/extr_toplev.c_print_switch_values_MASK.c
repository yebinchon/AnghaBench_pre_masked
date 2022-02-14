
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; char* opt_text; } ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *,char*,char const*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int *,int,int,char const*,char const*,char const*,char const*,char*) ;
 int FUNC_4 () ;
 char** VAR_3 ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static void
FUNC_6 (FILE *VAR_4, int VAR_5, int VAR_6,
       const char *VAR_7, const char *VAR_8, const char *VAR_9)
{
  size_t VAR_10;
  const char **VAR_11;



  FUNC_4 ();


  VAR_5 = FUNC_3 (VAR_4, VAR_5, VAR_6, VAR_7, *VAR_7 ? " " : "", VAR_9,
        FUNC_0("options passed: "), "");

  for (VAR_11 = &VAR_3[1]; *VAR_11 != ((void*)0); VAR_11++)
    if (**VAR_11 == '-')
      {

 if (FUNC_5 (*VAR_11, "-o") == 0)
   {
     if (VAR_11[1] != ((void*)0))
       VAR_11++;
     continue;
   }
 if (FUNC_5 (*VAR_11, "-quiet") == 0)
   continue;
 if (FUNC_5 (*VAR_11, "-version") == 0)
   continue;
 if ((*VAR_11)[1] == 'd')
   continue;

 VAR_5 = FUNC_3 (VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, *VAR_11, "");
      }
  if (VAR_5 > 0)
    FUNC_1 (VAR_4, "%s", VAR_9);





  VAR_5 = FUNC_3 (VAR_4, 0, VAR_6, VAR_7, *VAR_7 ? " " : "", VAR_9,
        FUNC_0("options enabled: "), "");

  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
    if ((VAR_1[VAR_10].flags & VAR_0)
 && FUNC_2 (VAR_10) > 0)
      VAR_5 = FUNC_3 (VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
     "", VAR_1[VAR_10].opt_text);

  FUNC_1 (VAR_4, "%s", VAR_9);
}
