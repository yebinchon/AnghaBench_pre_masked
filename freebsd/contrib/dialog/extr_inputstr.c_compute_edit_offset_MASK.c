
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int const*,int,int) ;
 int* FUNC_2 (char const*) ;
 int* FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_0,
      int VAR_1,
      int VAR_2,
      int *VAR_3,
      int *VAR_4)
{
    const int *VAR_5 = FUNC_2(VAR_0);
    const int *VAR_6 = FUNC_3(VAR_0);
    int VAR_7 = FUNC_0(VAR_0);
    int VAR_8 = FUNC_1(VAR_6, VAR_7, VAR_1);
    int VAR_9;
    int VAR_10;
    int VAR_11;

    for (VAR_11 = VAR_9 = 0; VAR_11 <= VAR_8; ++VAR_11) {
 if ((VAR_5[VAR_8] - VAR_5[VAR_11]) < VAR_2
     && (VAR_8 == VAR_7 || (VAR_5[VAR_8 + 1] - VAR_5[VAR_11]) < VAR_2)) {
     VAR_9 = VAR_11;
     break;
 }
    }

    VAR_10 = VAR_5[VAR_8] - VAR_5[VAR_9];

    if (VAR_3 != 0)
 *VAR_3 = VAR_10;
    if (VAR_4 != 0)
 *VAR_4 = VAR_9;
}
