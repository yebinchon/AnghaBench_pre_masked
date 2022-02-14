
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (char) ;
 char* FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,char*,...) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (char*,char*) ;
 size_t FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(char *VAR_2[4])
{
    int VAR_3, VAR_4;
    int VAR_5;
    size_t VAR_6 = 0;
    size_t VAR_7;
    bool VAR_8[4];
    bool VAR_9 = VAR_0;

    for (VAR_3 = 0; VAR_3 < 4; ++VAR_3) {
 VAR_8[VAR_3] = VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
     if (VAR_3 != VAR_4
  && !FUNC_5(VAR_2[VAR_3], VAR_2[VAR_4])) {
  char *VAR_10 = FUNC_1(VAR_2[VAR_4], VAR_1, 0);
  FUNC_2("repeated cursor control %s\n", VAR_10);
  VAR_9 = VAR_1;
     }
 }
    }
    if (!VAR_9) {
 char *VAR_11 = VAR_2[1];

 if (FUNC_0(VAR_11[0]) == '\033') {
     if (VAR_11[1] == '[') {
  VAR_6 = 2;
     } else {
  VAR_6 = 1;
     }
 } else if (FUNC_0(VAR_11[0]) == FUNC_0('\233')) {
     VAR_6 = 1;
 }
 if (VAR_6) {
     VAR_7 = VAR_6;
     while (VAR_11[VAR_7] && FUNC_3(FUNC_0(VAR_11[VAR_7])))
  ++VAR_7;
 }
 if (VAR_6 && VAR_11[VAR_7] == 'A') {
     VAR_8[1] = VAR_1;
     if (!FUNC_5(VAR_2[0], "\n"))
  VAR_8[0] = VAR_1;
     if (!FUNC_5(VAR_2[2], "\b"))
  VAR_8[2] = VAR_1;

     for (VAR_3 = 0; VAR_3 < 4; ++VAR_3) {
  if (VAR_8[VAR_3] || FUNC_6(VAR_2[VAR_3]) == 1)
      continue;
  if (FUNC_4(VAR_2[VAR_3], VAR_11, VAR_6)) {
      char *VAR_12 = FUNC_1(VAR_2[VAR_3], VAR_1, 0);
      FUNC_2("inconsistent prefix for %s\n", VAR_12);
      continue;
  }
  if (FUNC_6(VAR_2[VAR_3]) < VAR_7) {
      char *VAR_13 = FUNC_1(VAR_2[VAR_3], VAR_1, 0);
      FUNC_2("inconsistent length for %s, expected %d\n",
    VAR_13, (int) VAR_7 + 1);
      continue;
  }
  VAR_5 = "BADC"[VAR_3];
  if (VAR_2[VAR_3][VAR_7] != VAR_5) {
      char *VAR_14 = FUNC_1(VAR_2[VAR_3], VAR_1, 0);
      FUNC_2("inconsistent suffix for %s, expected %c, have %c\n",
    VAR_14, VAR_5, VAR_2[VAR_3][VAR_7]);
  }
     }
 }
    }
}
