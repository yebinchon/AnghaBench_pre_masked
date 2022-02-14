
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int DirectoryString ;


 int FUNC_0 (int const*,int**,size_t*) ;
 int FUNC_1 (int*) ;

int
FUNC_2(const DirectoryString *VAR_0,
     const DirectoryString *VAR_1,
     int *VAR_2)
{
    uint32_t *VAR_3, *VAR_4;
    size_t VAR_5, VAR_6, VAR_7;
    int VAR_8;

    VAR_8 = FUNC_0(VAR_0, &VAR_3, &VAR_5);
    if (VAR_8)
 return VAR_8;
    VAR_8 = FUNC_0(VAR_1, &VAR_4, &VAR_6);
    if (VAR_8) {
 FUNC_1(VAR_3);
 return VAR_8;
    }

    if (VAR_5 != VAR_6)
 *VAR_2 = VAR_5 - VAR_6;
    else {
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
     *VAR_2 = VAR_3[VAR_7] - VAR_4[VAR_7];
     if (*VAR_2)
  break;
 }
    }
    FUNC_1(VAR_3);
    FUNC_1(VAR_4);

    return 0;
}
