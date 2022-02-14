
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int dummy; } ;
struct login_info {char* from; struct passwd* user; } ;
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
 scalar_t__ FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (char*,struct login_info*,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,int ,char**) ;
 int FUNC_7 (int ,char*,int ,...) ;
 int VAR_8 ;

int FUNC_8(struct passwd *VAR_9, char *VAR_10)
{
    struct login_info VAR_11;
    FILE *VAR_12;
    char VAR_13[VAR_0];
    char *VAR_14;
    char *VAR_15;
    char *VAR_16;
    int VAR_17 = VAR_3;
    int VAR_18;
    int VAR_19 = 0;
    char *VAR_20;




    VAR_11.user = VAR_9;
    VAR_11.from = VAR_10;
    if ((VAR_12 = FUNC_2(VAR_4, "r")) != 0) {
 while (!VAR_17 && FUNC_1(VAR_13, sizeof(VAR_13), VAR_12)) {
     VAR_19++;
     if (VAR_13[VAR_18 = FUNC_5(VAR_13) - 1] != '\n') {
  FUNC_7(VAR_2, "%s: line %d: missing newline or line too long",
         VAR_4, VAR_19);
  continue;
     }
     if (VAR_13[0] == '#')
  continue;
     while (VAR_18 > 0 && FUNC_3((unsigned char)VAR_13[VAR_18 - 1]))
  VAR_18--;
     VAR_13[VAR_18] = 0;
     if (VAR_13[0] == 0)
  continue;
     VAR_20 = ((void*)0);
     if (!(VAR_14 = FUNC_6(VAR_13, VAR_7, &VAR_20))
  || !(VAR_15 = FUNC_6(((void*)0), VAR_7, &VAR_20))
  || !(VAR_16 = FUNC_6(((void*)0), VAR_7, &VAR_20))
  || FUNC_6(((void*)0), VAR_7, &VAR_20)) {
  FUNC_7(VAR_2, "%s: line %d: bad field count",
         VAR_4,
         VAR_19);
  continue;
     }
     if (VAR_14[0] != '+' && VAR_14[0] != '-') {
  FUNC_7(VAR_2, "%s: line %d: bad first field",
         VAR_4,
         VAR_19);
  continue;
     }
     VAR_17 = (FUNC_4(VAR_16, &VAR_11, VAR_6)
       && FUNC_4(VAR_15, &VAR_11, VAR_8));
 }
 FUNC_0(VAR_12);
    } else if (VAR_5 != VAR_1) {
 FUNC_7(VAR_2, "cannot open %s: %m", VAR_4);
    }
    return (VAR_17 == 0 || (VAR_13[0] == '+'));
}
