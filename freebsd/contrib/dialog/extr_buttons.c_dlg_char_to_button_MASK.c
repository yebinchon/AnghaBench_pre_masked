
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (char const**) ;

int
FUNC_5(int VAR_1, const char **VAR_2)
{
    int VAR_3 = VAR_0;

    if (VAR_2 != 0) {
 int *VAR_4 = FUNC_4(VAR_2);
 int VAR_5;

 VAR_1 = (int) FUNC_2(FUNC_1());

 if (VAR_4 != 0) {
     for (VAR_5 = 0; VAR_2[VAR_5] != 0; ++VAR_5) {
  if (VAR_1 == VAR_4[VAR_5]) {
      FUNC_0();
      VAR_3 = VAR_5;
      break;
  }
     }
     FUNC_3(VAR_4);
 }
    }

    return VAR_3;
}
