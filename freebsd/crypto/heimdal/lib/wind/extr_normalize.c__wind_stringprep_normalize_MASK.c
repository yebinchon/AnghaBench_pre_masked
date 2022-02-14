
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,size_t,int *,size_t*) ;
 int FUNC_2 (int const*,size_t,int *,size_t*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (size_t) ;

int
FUNC_5(const uint32_t *VAR_2, size_t VAR_3,
      uint32_t *VAR_4, size_t *VAR_5)
{
    size_t VAR_6;
    uint32_t *VAR_7;
    int VAR_8;

    if (VAR_3 == 0) {
 *VAR_5 = 0;
 return 0;
    }

    VAR_6 = VAR_3 * 4;
    if (VAR_6 < VAR_1)
 VAR_6 = VAR_1;
    VAR_7 = FUNC_4(VAR_6 * sizeof(uint32_t));
    if (VAR_7 == ((void*)0))
 return VAR_0;

    VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_7, &VAR_6);
    if (VAR_8) {
 FUNC_3(VAR_7);
 return VAR_8;
    }
    FUNC_0(VAR_7, VAR_6);
    VAR_8 = FUNC_1(VAR_7, VAR_6, VAR_4, VAR_5);
    FUNC_3(VAR_7);
    return VAR_8;
}
