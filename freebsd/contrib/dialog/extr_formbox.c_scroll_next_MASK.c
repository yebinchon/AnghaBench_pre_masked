
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_5__ {scalar_t__ name; scalar_t__ text_flen; int name_y; int text_y; } ;
typedef TYPE_1__ DIALOG_FORMITEM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*,int,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static bool
FUNC_7(WINDOW *VAR_2, DIALOG_FORMITEM VAR_3[], int VAR_4, int *VAR_5, int *VAR_6)
{
    bool VAR_7 = VAR_1;
    int VAR_8 = *VAR_5;
    int VAR_9 = *VAR_6;
    int VAR_10 = FUNC_0(VAR_3[VAR_8].text_y, VAR_3[VAR_8].name_y);
    int VAR_11 = VAR_9 + VAR_4;
    int VAR_12;

    if (VAR_4 < 0) {
 if (VAR_10 != VAR_9)
     VAR_11 = VAR_9;
 else
     VAR_11 = VAR_9 + VAR_4;
 if (VAR_11 < 0) {
     VAR_7 = VAR_0;
 }
    } else {
 if (VAR_11 > FUNC_3(VAR_3)) {
     VAR_7 = VAR_0;
 }
    }

    if (VAR_7) {
 for (VAR_12 = 0; VAR_3[VAR_12].name != 0; ++VAR_12) {
     if (VAR_3[VAR_12].text_flen > 0) {
  int VAR_13 = FUNC_0(VAR_3[VAR_12].text_y, VAR_3[VAR_12].name_y);
  if (FUNC_1(VAR_13 - VAR_11) < FUNC_1(VAR_10 - VAR_11)) {
      VAR_10 = VAR_13;
      *VAR_5 = VAR_12;
  }
     }
 }

 if (VAR_8 != *VAR_5)
     FUNC_4(VAR_2, VAR_3 + VAR_8, *VAR_6, VAR_0);

 *VAR_6 = *VAR_5;
 if (*VAR_6 != VAR_9) {
     FUNC_5(VAR_2, VAR_1);
     FUNC_6(VAR_2, *VAR_6 - VAR_9);
     FUNC_5(VAR_2, VAR_0);
 }
 VAR_7 = (VAR_8 != *VAR_5) || (VAR_9 != *VAR_6);
    }
    if (!VAR_7)
 FUNC_2();
    return VAR_7;
}
