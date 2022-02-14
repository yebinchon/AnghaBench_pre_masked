
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int const hscroll; int text; } ;
typedef TYPE_1__ MY_OBJ ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int* FUNC_1 (char*) ;
 int* FUNC_2 (char*) ;
 char* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,char) ;
 int FUNC_7 (int ,char*,int const) ;
 scalar_t__ FUNC_8 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_9(MY_OBJ * VAR_1, int VAR_2, int VAR_3)
{
    if (FUNC_8(VAR_1->text, VAR_2, 0) != VAR_0) {
 int VAR_4, VAR_5, VAR_6;
 char *VAR_7 = FUNC_3(VAR_1);
 const int *VAR_8 = FUNC_1(VAR_7);
 const int *VAR_9 = FUNC_2(VAR_7);
 int VAR_10 = FUNC_0(VAR_7);
 int VAR_11 = 0;
 int VAR_12 = VAR_10;

 if (VAR_3 > FUNC_4(VAR_1->text))
     VAR_3 = FUNC_4(VAR_1->text);
 --VAR_3;

 for (VAR_4 = 0; VAR_4 <= VAR_10 && VAR_8[VAR_4] < VAR_1->hscroll; ++VAR_4)
     VAR_11 = VAR_4;

 for (VAR_4 = VAR_11; (VAR_4 <= VAR_10) && ((VAR_8[VAR_4] - VAR_8[VAR_11]) < VAR_3); ++VAR_4)
     VAR_12 = VAR_4;

 (void) FUNC_6(VAR_1->text, ' ');
 (void) FUNC_7(VAR_1->text, VAR_7 + VAR_9[VAR_11], VAR_9[VAR_12] - VAR_9[VAR_11]);

 FUNC_5(VAR_1->text, VAR_5, VAR_6);
 if (VAR_5 == VAR_2) {
     for (VAR_4 = 0; VAR_4 <= VAR_3 - VAR_6; VAR_4++) {
  (void) FUNC_6(VAR_1->text, ' ');
     }
 }
    }
}
