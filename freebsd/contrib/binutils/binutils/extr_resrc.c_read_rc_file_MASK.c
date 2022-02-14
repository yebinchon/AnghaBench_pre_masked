
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rc_res_directory ;


 char* VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*) ;
 int * VAR_5 ;
 int FUNC_3 (char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (char*,char*,int,char const*,char const*) ;
 scalar_t__ FUNC_5 (char*) ;
 char* VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int * VAR_10 ;
 int FUNC_8 (char*,char*,char const*,char const*,char const*,char const*,char const*) ;
 int FUNC_9 (char const*) ;
 char* FUNC_10 (int) ;
 char* FUNC_11 (char const*) ;
 int FUNC_12 () ;

rc_res_directory *
FUNC_13 (const char *VAR_11, const char *VAR_12,
       const char *VAR_13, int VAR_14, int VAR_15)
{
  char *VAR_16;
  const char *VAR_17 = (FUNC_2 (VAR_11) ? "\"" : "");

  VAR_6 = (VAR_15) ? VAR_2 : VAR_3;

  if (VAR_13 == ((void*)0))
    VAR_13 = "";
  if (VAR_11 == ((void*)0))
    VAR_11 = "-";

  if (VAR_12)
    {
      VAR_16 = FUNC_10 (FUNC_9 (VAR_12)
       + FUNC_9 (VAR_13)
       + FUNC_9 (VAR_11)
       + FUNC_9 (VAR_17) * 2
       + 10);
      FUNC_8 (VAR_16, "%s %s %s%s%s", VAR_12, VAR_13,
        VAR_17, VAR_11, VAR_17);

      VAR_4 = FUNC_5 (VAR_16);
    }
  else
    {
      char *VAR_18, *VAR_19, *VAR_20;

      VAR_12 = VAR_0;

      VAR_16 = FUNC_10 (FUNC_9 (VAR_7)
       + FUNC_9 (VAR_12)
       + FUNC_9 (VAR_13)
       + FUNC_9 (VAR_11)
       + FUNC_9 (VAR_17) * 2



       + 10);


      VAR_18 = VAR_19 = 0;
      for (VAR_20 = VAR_7; *VAR_20; VAR_20++)
 {
   if (*VAR_20 == '-')
     VAR_18 = VAR_20;
   if (



       *VAR_20 == '/')
     {
       VAR_19 = VAR_20;
       VAR_18 = 0;
     }
 }

      VAR_4 = 0;

      if (VAR_18)
 {



   VAR_4 = FUNC_4 (VAR_16, VAR_7, VAR_18 - VAR_7 + 1,
           VAR_13, VAR_11);
 }

      if (VAR_19 && ! VAR_4)
 {



   VAR_4 = FUNC_4 (VAR_16, VAR_7, VAR_19 - VAR_7 + 1,
           VAR_13, VAR_11);
 }

      if (! VAR_4)
 {


   VAR_4 = FUNC_4 (VAR_16, "", 0, VAR_13, VAR_11);
 }

    }

  FUNC_3 (VAR_16);

  VAR_8 = FUNC_11 (VAR_11);
  VAR_9 = 1;
  if (VAR_14 != -1)
    FUNC_7 (VAR_14);
  FUNC_12 ();
  FUNC_6 ();

  FUNC_0 ();

  if (VAR_5 != ((void*)0))
    FUNC_1 ();

  FUNC_3 (VAR_8);
  VAR_8 = ((void*)0);

  return VAR_10;
}
