
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,...) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const***,int*,int*) ;
 int FUNC_7 (char const**,char const**,int) ;
 int FUNC_8 (char const**,char const**,int) ;
 char** FUNC_9 (char const**,int) ;
 int FUNC_10 (char*,char const***) ;
 int FUNC_11 (struct strbuf*,char const**,int ) ;
 int FUNC_12 (struct strbuf*,char*) ;
 int FUNC_13 (struct strbuf*,int ) ;
 int FUNC_14 (char const*,char const*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int FUNC_16(int *VAR_2, const char ***VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0, VAR_6 = VAR_1;
 int VAR_7, VAR_8;
 const char **VAR_9;
 const char *VAR_10;
 char *VAR_11;

 VAR_10 = (*VAR_3)[0];
 VAR_11 = FUNC_2(VAR_10);
 if (VAR_11) {
  if (VAR_11[0] == '!') {
   if (*VAR_2 > 1) {
    struct strbuf VAR_12;

    FUNC_13(&VAR_12, VAR_0);
    FUNC_12(&VAR_12, VAR_11);
    FUNC_11(&VAR_12, (*VAR_3) + 1, VAR_0);
    FUNC_5(VAR_11);
    VAR_11 = VAR_12.buf;
   }
   VAR_5 = FUNC_15(VAR_11 + 1);
   if (VAR_5 >= 0 && FUNC_1(VAR_5) &&
       FUNC_0(VAR_5) != 127)
    FUNC_4(FUNC_0(VAR_5));
   FUNC_3("Failed to run '%s' when expanding alias '%s'",
       VAR_11 + 1, VAR_10);
  }
  VAR_7 = FUNC_10(VAR_11, &VAR_9);
  if (VAR_7 < 0)
   FUNC_3("Bad alias.%s string", VAR_10);
  VAR_8 = FUNC_6(&VAR_9, &VAR_7, &VAR_4);
  if (VAR_4)
   FUNC_3("alias '%s' changes environment variables\n"
     "You can use '!perf' in the alias to do this.",
     VAR_10);
  FUNC_8(VAR_9 - VAR_8, VAR_9,
    VAR_7 * sizeof(char *));
  VAR_9 -= VAR_8;

  if (VAR_7 < 1)
   FUNC_3("empty alias for %s", VAR_10);

  if (!FUNC_14(VAR_10, VAR_9[0]))
   FUNC_3("recursive alias: %s", VAR_10);

  VAR_9 = FUNC_9(VAR_9, sizeof(char *) *
        (VAR_7 + *VAR_2 + 1));

  FUNC_7(VAR_9 + VAR_7, *VAR_3 + 1, sizeof(char *) * *VAR_2);
  VAR_9[VAR_7 + *VAR_2] = ((void*)0);

  *VAR_3 = VAR_9;
  *VAR_2 += VAR_7 - 1;

  VAR_5 = 1;
 }

 VAR_1 = VAR_6;

 return VAR_5;
}
