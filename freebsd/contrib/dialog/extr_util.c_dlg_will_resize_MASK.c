
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

void
FUNC_5(WINDOW *VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    int VAR_6 = 0;

    FUNC_1(VAR_2);
    FUNC_4(VAR_2, 20);
    for (VAR_3 = VAR_5 = 0; VAR_3 < VAR_5 + 10; ++VAR_3) {
 if ((VAR_4 = FUNC_3(VAR_2)) != VAR_0) {
     if (VAR_4 == VAR_1) {
  VAR_5 = VAR_3;
  ++VAR_6;
     } else {
  FUNC_2(VAR_4);
  break;
     }
 }
    }
    FUNC_0("# caught %d KEY_RESIZE key%s\n",
    1 + VAR_6,
    VAR_6 == 1 ? "" : "s");
}
