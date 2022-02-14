
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int regexbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (char const*,size_t,int *,int) ;
 int FUNC_3 (int,scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int,int ,char const*) ;
 int FUNC_5 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 char* FUNC_6 (char const*,char,size_t) ;
 int FUNC_7 (char*,char const*,size_t) ;
 TYPE_1__* VAR_9 ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 char* FUNC_8 (char const*,size_t,int *) ;
 int FUNC_9 (int) ;
 TYPE_1__* FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (char*,char const*) ;
 size_t FUNC_12 (char*) ;
 char* FUNC_13 (int) ;

__attribute__((used)) static void
FUNC_14 (char const *VAR_12, size_t VAR_13)
{
  const char *VAR_14;
  char const *VAR_15;
  size_t VAR_16 = VAR_13;
  char const *VAR_17 = VAR_12;

  FUNC_1 ();
  FUNC_9 (VAR_2 | VAR_0 | (VAR_6 ? VAR_1 : 0));
  FUNC_3 (VAR_2 | VAR_0, VAR_6, VAR_4);





  do
    {
      size_t VAR_18;
      VAR_15 = FUNC_6 (VAR_17, '\n', VAR_16);
      if (VAR_15)
 {
   VAR_18 = VAR_15 - VAR_17;
   VAR_15++;
   VAR_16 -= (VAR_18 + 1);
 }
      else
 {
   VAR_18 = VAR_16;
   VAR_16 = 0;
 }

      VAR_9 = FUNC_10 (VAR_9, (VAR_11 + 1) * sizeof (*VAR_9));
      if (VAR_9 == ((void*)0))
 FUNC_4 (2, VAR_5, FUNC_0("memory exhausted"));

      VAR_9[VAR_11] = VAR_10;

      if ((VAR_14 = FUNC_8 (VAR_17, VAR_18,
        &(VAR_9[VAR_11].regexbuf))) != 0)
 FUNC_4 (2, 0, VAR_14);
      VAR_11++;

      VAR_17 = VAR_15;
    } while (VAR_15 && VAR_16 != 0);





  if (VAR_8 || VAR_7)
    {





      static char const VAR_19[] = "^\\(";
      static char const VAR_20[] = "\\)$";
      static char const VAR_21[] = "\\(^\\|[^[:alnum:]_]\\)\\(";
      static char const VAR_22[] = "\\)\\([^[:alnum:]_]\\|$\\)";
      char *VAR_23 = FUNC_13 (sizeof VAR_21 - 1 + VAR_13 + sizeof VAR_22);
      size_t VAR_24;
      FUNC_11 (VAR_23, VAR_7 ? VAR_19 : VAR_21);
      VAR_24 = FUNC_12 (VAR_23);
      FUNC_7 (VAR_23 + VAR_24, VAR_12, VAR_13);
      VAR_24 += VAR_13;
      FUNC_11 (VAR_23 + VAR_24, VAR_7 ? VAR_20 : VAR_22);
      VAR_24 += FUNC_12 (VAR_23 + VAR_24);
      VAR_12 = VAR_23;
      VAR_13 = VAR_24;
    }

  FUNC_2 (VAR_12, VAR_13, &VAR_3, 1);
  FUNC_5 ();
}
