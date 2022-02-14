
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,int) ;
 char** VAR_7 ;
 char** VAR_8 ;
 int FUNC_5 (char*,char const* const) ;
 scalar_t__ FUNC_6 (char const*,char) ;
 int FUNC_7 (char*,char const*) ;
 size_t FUNC_8 (char const*) ;
 char* FUNC_9 (size_t) ;

__attribute__((used)) static char *
FUNC_10 (const char *VAR_9, BOOL VAR_10)
{
  char *VAR_11;
  char *VAR_12;
  size_t VAR_13;
  const char *VAR_14 = 0;
  const char *const *VAR_15;
  const char *VAR_16, *VAR_17;
  size_t VAR_18 = FUNC_8 (VAR_9);
  int VAR_19 = !!FUNC_6 (VAR_9, '.');
  int VAR_20 = (FUNC_6 (VAR_9, '/') || FUNC_6 (VAR_9, '\\'));
  HANDLE VAR_21;

  if (VAR_20)
    VAR_10 = VAR_0;

  if (VAR_10)
    VAR_14 = FUNC_3 ("PATH");
  if (!VAR_14)
    VAR_14 = "";

  VAR_13 = 0;
  for (VAR_16 = VAR_14; *VAR_16; VAR_16 = VAR_17)
    {
      VAR_17 = VAR_16;
      while (*VAR_17 != ';' && *VAR_17 != '\0')
 VAR_17++;
      if ((size_t)(VAR_17 - VAR_16) > VAR_13)
 VAR_13 = VAR_17 - VAR_16;
      if (*VAR_17 == ';')
 VAR_17++;
    }
  VAR_13 = VAR_13 + 1 + VAR_18 + (VAR_19 ? 1 : 5);
  VAR_11 = FUNC_9 (VAR_13);

  VAR_16 = VAR_14;
  do
    {
      VAR_17 = VAR_16;
      while (*VAR_17 != ';' && *VAR_17 != '\0')
 VAR_17++;

      VAR_12 = VAR_11;
      FUNC_4 (VAR_12, VAR_16, VAR_17 - VAR_16);
      VAR_12 += (VAR_17 - VAR_16);
      if (VAR_17 - VAR_16)
 *VAR_12++ = '\\';
      FUNC_7 (VAR_12, VAR_9);

      if (*VAR_17 == ';')
 VAR_17++;

      for (VAR_12 = VAR_11; *VAR_12; VAR_12++)
 if (*VAR_12 == '/')
   *VAR_12 = '\\';



      for (VAR_15 = VAR_19 ? VAR_7 : VAR_8; *VAR_15; VAR_15++)
 {

   *VAR_12 = '\0';

   FUNC_5 (VAR_11, *VAR_15);


   VAR_21 = FUNC_1 (VAR_11, VAR_4,
     VAR_2 | VAR_3,
     0, VAR_6, VAR_1, 0);
   if (VAR_21 != VAR_5)
     goto found;
 }
      VAR_16 = VAR_17;
    }
  while (*VAR_16);
  FUNC_2 (VAR_11);
  return 0;

 found:
  FUNC_0 (VAR_21);
  return VAR_11;
}
