
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_5__ {scalar_t__ text_flen; int text_y; int name_y; } ;
typedef TYPE_1__ DIALOG_FORMITEM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*,int,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static bool
FUNC_8(WINDOW *VAR_2,
  DIALOG_FORMITEM VAR_3[],
  int VAR_4,
  int VAR_5,
  int *VAR_6,
  int *VAR_7)
{
    int VAR_8 = *VAR_6;
    int VAR_9 = *VAR_7;
    bool VAR_10 = VAR_0;

    do {
 do {
     *VAR_6 += VAR_5;
     if (*VAR_6 < 0) {
  *VAR_6 = VAR_4 - 1;
  VAR_10 = VAR_1;
     } else if (*VAR_6 >= VAR_4) {
  *VAR_6 = 0;
  VAR_10 = VAR_1;
     }
 } while ((*VAR_6 != VAR_8) && FUNC_4(&(VAR_3[*VAR_6])));

 if (VAR_3[*VAR_6].text_flen > 0) {
     int VAR_11 = FUNC_1(VAR_3[*VAR_6].name_y, VAR_3[*VAR_6].text_y);
     int VAR_12 = FUNC_0(VAR_3[*VAR_6].name_y, VAR_3[*VAR_6].text_y);

     if (VAR_8 == *VAR_6)
  break;
     FUNC_5(VAR_2, VAR_3 + VAR_8, *VAR_7, VAR_0);

     if (*VAR_7 < VAR_11 + 1 - FUNC_3(VAR_2))
  *VAR_7 = VAR_11 + 1 - FUNC_3(VAR_2);
     if (*VAR_7 > VAR_12)
  *VAR_7 = VAR_12;






     if (*VAR_7 != VAR_9) {
  if (VAR_10) {
      FUNC_2();
      *VAR_7 = VAR_9;
      *VAR_6 = VAR_8;
  } else {
      FUNC_6(VAR_2, VAR_1);
      FUNC_7(VAR_2, *VAR_7 - VAR_9);
      FUNC_6(VAR_2, VAR_0);
  }
     }
     break;
 }
    } while (*VAR_6 != VAR_8);

    return (VAR_8 != *VAR_6) || (VAR_9 != *VAR_7);
}
