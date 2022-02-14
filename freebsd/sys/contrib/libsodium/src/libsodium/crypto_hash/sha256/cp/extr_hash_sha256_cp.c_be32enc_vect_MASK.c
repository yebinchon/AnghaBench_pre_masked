
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned char*,int const) ;

__attribute__((used)) static void
FUNC_1(unsigned char *VAR_0, const uint32_t *VAR_1, size_t VAR_2)
{
    size_t VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2 / 4; VAR_3++) {
        FUNC_0(VAR_0 + VAR_3 * 4, VAR_1[VAR_3]);
    }
}
