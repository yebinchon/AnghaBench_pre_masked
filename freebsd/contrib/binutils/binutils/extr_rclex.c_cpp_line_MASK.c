
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rc_uint_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* VAR_1 ;
 scalar_t__ FUNC_4 (char const*,char*,size_t) ;
 int FUNC_5 (char*,char const*,size_t) ;
 char* VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 void* FUNC_7 (char const*,char) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;
 size_t FUNC_10 (char const*) ;
 int FUNC_11 (char*,char const*,int) ;
 int FUNC_12 (char const*,char**,int) ;
 int VAR_5 ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 char* FUNC_14 (int) ;

__attribute__((used)) static void
FUNC_15 (void)
{
  const char *VAR_8 = VAR_4;
  int VAR_9;
  char *VAR_10, *VAR_11;
  size_t VAR_12, VAR_13;

  ++VAR_8;
  while (FUNC_0 (*VAR_8))
    ++VAR_8;


  VAR_12 = FUNC_10 (VAR_8);
  VAR_13 = FUNC_10 ("pragma");
  if (VAR_12 > VAR_13 && FUNC_4 (VAR_8, "pragma", VAR_13) == 0 && FUNC_0 (VAR_8[VAR_13]))
    {
      const char *VAR_14;

      VAR_8 += VAR_13 + 1;
      while (FUNC_0 (*VAR_8))
 ++VAR_8;
      VAR_12 = FUNC_10 (VAR_8);
      VAR_13 = FUNC_10 ("code_page");
      if (VAR_12 <= VAR_13 || FUNC_4 (VAR_8, "code_page", VAR_13) != 0)

 return;
      VAR_8 += VAR_13;
      while (FUNC_0 (*VAR_8))
 ++VAR_8;
      if (*VAR_8 != '(')

 return;
      ++VAR_8;
      while (FUNC_0 (*VAR_8))
 ++VAR_8;
      if (*VAR_8 == 0 || (VAR_14 = FUNC_7 (VAR_8, ')')) == ((void*)0))

 return;
      VAR_12 = (size_t) (VAR_14 - VAR_8);
      VAR_11 = FUNC_14 (VAR_12 + 1);
      if (VAR_12)
       FUNC_5 (VAR_11, VAR_8, VAR_12);
      VAR_11[VAR_12] = 0;
      while (VAR_12 > 0 && (VAR_11[VAR_12 - 1] > 0 && VAR_11[VAR_12 - 1] <= 0x20))
 VAR_11[--VAR_12] = 0;
      if (! VAR_12 || (VAR_12 == FUNC_10 ("DEFAULT") && FUNC_6 (VAR_11, "DEFAULT") == 0))
 VAR_6 = VAR_7;
      else if (VAR_12 > 0)
 {
   rc_uint_type VAR_15;

   if (VAR_11[0] == '0' && (VAR_11[1] == 'x' || VAR_11[1] == 'X'))
       VAR_15 = (rc_uint_type) FUNC_12 (VAR_11 + 2, ((void*)0), 16);
   else
       VAR_15 = (rc_uint_type) FUNC_12 (VAR_11, ((void*)0), 10);
   if (VAR_15 == VAR_0 || ! FUNC_13 (VAR_15))
     FUNC_2 (FUNC_1("invalid value specified for pragma code_page.\n"));
   VAR_6 = VAR_15;
 }
      FUNC_3 (VAR_11);
      return;
    }

  VAR_9 = FUNC_12 (VAR_8, &VAR_10, 0);
  if (*VAR_10 != '\0' && ! FUNC_0 (*VAR_10))
    return;


  VAR_3 = VAR_9 - 1;

  VAR_8 = VAR_10;
  while (FUNC_0 (*VAR_8))
    ++VAR_8;

  if (*VAR_8 != '"')
    return;

  ++VAR_8;
  VAR_10 = FUNC_7 (VAR_8, '"');
  if (VAR_10 == ((void*)0))
    return;

  VAR_11 = FUNC_14 (VAR_10 - VAR_8 + 1);
  FUNC_11 (VAR_11, VAR_8, VAR_10 - VAR_8);
  VAR_11[VAR_10 - VAR_8] = '\0';

  FUNC_3 (VAR_2);
  VAR_2 = VAR_11;

  if (! VAR_1)
    {
      VAR_1 = FUNC_14 (FUNC_10 (VAR_11) + 1);
      FUNC_9 (VAR_1, VAR_11);
    }



  if (FUNC_8 (VAR_1, VAR_11) == 0
      || FUNC_8 (VAR_11 + FUNC_10 (VAR_11) - 2, ".h") != 0)
    VAR_5 = 0;
  else
    VAR_5 = 1;
}
