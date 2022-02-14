
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xo_handle_t ;
typedef int libxo_opt ;
typedef int gnu_ext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 size_t FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (char*,char) ;
 int * FUNC_7 (int *) ;
 char* VAR_3 ;
 scalar_t__ FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (char*,char const*) ;
 int FUNC_10 (char*,...) ;

int
FUNC_11 (int VAR_4, char **VAR_5)
{
    static char VAR_6[] = "--libxo";
    char *VAR_7;
    int VAR_8, VAR_9;


    VAR_3 = VAR_5[0];
    VAR_7 = FUNC_6(VAR_3, '/');
    if (VAR_7)
 VAR_3 = ++VAR_7;
    else
 VAR_7 = VAR_5[0];


    size_t VAR_10 = FUNC_4(VAR_3);
    static const char VAR_11[] = ".test";
    if (VAR_10 >= sizeof(VAR_11)) {
 VAR_7 += VAR_10 + 1 - sizeof(VAR_11);
 if (FUNC_9(VAR_7, VAR_11))
     *VAR_7 = '\0';
    }

    xo_handle_t *VAR_12 = FUNC_7(((void*)0));

    for (VAR_9 = VAR_8 = 1; VAR_8 < VAR_4; VAR_8++) {
 if (VAR_5[VAR_8] == ((void*)0)
     || FUNC_5(VAR_5[VAR_8], VAR_6, sizeof(VAR_6) - 1) != 0) {
     if (VAR_9 != VAR_8)
  VAR_5[VAR_9] = VAR_5[VAR_8];
     VAR_9 += 1;
     continue;
 }

 VAR_7 = VAR_5[VAR_8] + sizeof(VAR_6) - 1;
 if (*VAR_7 == '\0') {
     VAR_7 = VAR_5[++VAR_8];
     if (VAR_7 == ((void*)0)) {
  FUNC_10("missing libxo option");
  return -1;
     }

     if (FUNC_8(VAR_12, VAR_7) < 0)
  return -1;
 } else if (*VAR_7 == ':') {
     if (FUNC_8(VAR_12, VAR_7) < 0)
  return -1;

 } else if (*VAR_7 == '=') {
     if (FUNC_8(VAR_12, ++VAR_7) < 0)
  return -1;

 } else if (*VAR_7 == '-') {
     VAR_7 += 1;
     if (FUNC_9(VAR_7, "check")) {
  FUNC_2(VAR_2);

     } else {
  FUNC_10("unknown libxo option: '%s'", VAR_5[VAR_8]);
  return -1;
     }
 } else {
  FUNC_10("unknown libxo option: '%s'", VAR_5[VAR_8]);
     return -1;
 }
    }





    if (FUNC_0(VAR_12, VAR_1) && FUNC_3(1))
 FUNC_1(VAR_12, VAR_0);

    VAR_5[VAR_9] = ((void*)0);
    return VAR_9;
}
