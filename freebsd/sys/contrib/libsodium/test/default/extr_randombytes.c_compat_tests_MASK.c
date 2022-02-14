
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int FUNC_0 (scalar_t__*,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*,int) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static int
FUNC_3(void)
{
    size_t VAR_2;

    FUNC_0(VAR_1, 0, sizeof VAR_1);
    FUNC_2(VAR_1, sizeof VAR_1);
    for (VAR_2 = 0; VAR_2 < 256; ++VAR_2) {
        VAR_0[VAR_2] = 0;
    }
    for (VAR_2 = 0; VAR_2 < sizeof VAR_1; ++VAR_2) {
        ++VAR_0[255 & (int) VAR_1[VAR_2]];
    }
    for (VAR_2 = 0; VAR_2 < 256; ++VAR_2) {
        if (!VAR_0[VAR_2]) {
            FUNC_1("nacl_tests failed\n");
        }
    }
    return 0;
}
