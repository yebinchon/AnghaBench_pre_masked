
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int* FUNC_1 (char const*) ;
 int* FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_2, int VAR_3)
{
    const int *VAR_4 = FUNC_1(VAR_2);
    const int *VAR_5 = FUNC_2(VAR_2);
    bool VAR_6 = VAR_0;
    int VAR_7 = 0;
    unsigned VAR_8;
    unsigned VAR_9 = (unsigned) FUNC_0(VAR_2);

    for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8) {
 if (VAR_4[VAR_8] <= VAR_3 && VAR_4[VAR_8 + 1] > VAR_3) {
     VAR_7 = VAR_5[VAR_8];
     VAR_6 = VAR_1;
     break;
 }
    }
    if (!VAR_6 && VAR_9 && VAR_4[VAR_9] == VAR_3) {
 VAR_7 = VAR_5[VAR_9];
    }
    return VAR_7;
}
