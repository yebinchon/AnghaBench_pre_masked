
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,char*,char*,char const*) ;
 int FUNC_9 (int,int *) ;
 int * FUNC_10 (char*) ;
 int VAR_3 ;
 int FUNC_11 (char*) ;
 int VAR_4 ;

__attribute__((used)) static FILE *
FUNC_12(FILE *VAR_5, const char *VAR_6, char *VAR_7)
{
    char VAR_8[VAR_1];
    FILE *VAR_9 = 0;
    FILE *VAR_10 = 0;
    int VAR_11;

    if (VAR_7 == 0)
 VAR_7 = VAR_8;

    if (VAR_5 == 0) {
 FUNC_2("copy_input (source)");
    } else if ((VAR_10 = FUNC_10(VAR_7)) == 0) {
 FUNC_2("copy_input (target)");
    } else {
 FUNC_1(VAR_5);
 for (;;) {
     VAR_11 = FUNC_6(VAR_5);
     if (FUNC_4(VAR_5)) {
  break;
     } else if (FUNC_5(VAR_5)) {
  FUNC_2(VAR_6);
     } else if (VAR_11 == 0) {

  FUNC_8(VAR_3, "%s: %s is not a text-file\n", VAR_2, VAR_6);
  FUNC_0(VAR_0);
     }
     FUNC_9(VAR_11, VAR_10);
 }
 FUNC_3(VAR_5);






 VAR_9 = FUNC_7(VAR_7, "r+");
 FUNC_3(VAR_10);
 VAR_4 = FUNC_11(VAR_7);
    }
    return VAR_9;
}
