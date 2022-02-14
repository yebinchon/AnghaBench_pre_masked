
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char*,char const*,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,char*,int ,...) ;
 int VAR_8 ;

int
FUNC_8(const char *VAR_9, const char *VAR_10)
{
    FILE *VAR_11;
    char VAR_12[VAR_0];
    char *VAR_13;
    char *VAR_14;
    char *VAR_15;
    int VAR_16 = VAR_3;
    int VAR_17;
    int VAR_18 = 0;
    if ((VAR_11 = FUNC_2(VAR_4, "r")) != ((void*)0)) {
 while (!VAR_16 && FUNC_1(VAR_12, sizeof(VAR_12), VAR_11)) {
     VAR_18++;
     if (VAR_12[VAR_17 = FUNC_5(VAR_12) - 1] != '\n') {
  FUNC_7(VAR_2, "%s: line %d: missing newline or line too long",
         VAR_4, VAR_18);
  continue;
     }
     if (VAR_12[0] == '#')
  continue;
     while (VAR_17 > 0 && FUNC_3(VAR_12[VAR_17 - 1]))
  VAR_17--;
     VAR_12[VAR_17] = 0;
     if (VAR_12[0] == 0)
  continue;
     if (!(VAR_13 = FUNC_6(VAR_12, VAR_7))
  || !(VAR_14 = FUNC_6((char *) 0, VAR_7))
  || !(VAR_15 = FUNC_6((char *) 0, VAR_7))
  || FUNC_6((char *) 0, VAR_7)) {
  FUNC_7(VAR_2, "%s: line %d: bad field count", VAR_4,
         VAR_18);
  continue;
     }
     if (VAR_13[0] != '+' && VAR_13[0] != '-') {
  FUNC_7(VAR_2, "%s: line %d: bad first field", VAR_4,
         VAR_18);
  continue;
     }
     VAR_16 = (FUNC_4(VAR_15, VAR_10, VAR_6)
       && FUNC_4(VAR_14, VAR_9, VAR_8));
 }
 (void) FUNC_0(VAR_11);
    } else if (VAR_5 != VAR_1) {
 FUNC_7(VAR_2, "cannot open %s: %m", VAR_4);
    }
    return (VAR_16 == 0 || (VAR_12[0] == '+'));
}
