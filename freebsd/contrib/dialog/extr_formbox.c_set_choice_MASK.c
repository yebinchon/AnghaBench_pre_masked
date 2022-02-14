
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIALOG_FORMITEM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(DIALOG_FORMITEM VAR_2[], int VAR_3, int VAR_4, bool * VAR_5)
{
    int VAR_6 = -1;
    int VAR_7;

    *VAR_5 = VAR_0;
    if (!FUNC_0(&VAR_2[VAR_3])) {
 VAR_6 = VAR_3;
    } else {
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
     if (!FUNC_0(&(VAR_2[VAR_7]))) {
  VAR_6 = VAR_7;
  break;
     }
 }
 if (VAR_6 < 0) {
     *VAR_5 = VAR_1;
     VAR_6 = 0;
 }
    }
    return VAR_6;
}
