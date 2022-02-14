
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int flagword ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,int) ;
 char* FUNC_7 (int) ;

__attribute__((used)) static flagword
FUNC_8 (const char *VAR_11)
{
  flagword VAR_12;
  const char *VAR_13;
  int VAR_14;

  VAR_12 = VAR_8;

  do
    {
      VAR_13 = FUNC_4 (VAR_11, ',');
      if (VAR_13 == ((void*)0))
 VAR_14 = FUNC_5 (VAR_11);
      else
 {
   VAR_14 = VAR_13 - VAR_11;
   ++VAR_13;
 }

      if (0) ;


      else if (strncasecmp ("alloc", VAR_11, VAR_14) == 0) VAR_12 |= VAR_0;
      else if (FUNC_0 ("load", VAR_11, VAR_14) == 0) VAR_12 |= VAR_6;
      else if (FUNC_0 ("noload", VAR_11, VAR_14) == 0) VAR_12 |= VAR_7;
      else if (FUNC_0 ("readonly", VAR_11, VAR_14) == 0) VAR_12 |= VAR_9;
      else if (FUNC_0 ("debug", VAR_11, VAR_14) == 0) VAR_12 |= VAR_4;
      else if (FUNC_0 ("code", VAR_11, VAR_14) == 0) VAR_12 |= VAR_1;
      else if (FUNC_0 ("data", VAR_11, VAR_14) == 0) VAR_12 |= VAR_3;
      else if (FUNC_0 ("rom", VAR_11, VAR_14) == 0) VAR_12 |= VAR_10;
      else if (FUNC_0 ("share", VAR_11, VAR_14) == 0) VAR_12 |= VAR_2;
      else if (FUNC_0 ("contents", VAR_11, VAR_14) == 0) VAR_12 |= VAR_5;

      else
 {
   char *VAR_15;

   VAR_15 = FUNC_7 (VAR_14 + 1);
   FUNC_6 (VAR_15, VAR_11, VAR_14);
   VAR_15[VAR_14] = '\0';
   FUNC_3 (FUNC_1("unrecognized section flag `%s'"), VAR_15);
   FUNC_2 (FUNC_1("supported flags: %s"),
   "alloc, load, noload, readonly, debug, code, data, rom, share, contents");
 }

      VAR_11 = VAR_13;
    }
  while (VAR_11 != ((void*)0));

  return VAR_12;
}
