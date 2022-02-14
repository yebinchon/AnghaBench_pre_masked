
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;


 unsigned int FUNC_0 (int*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(const char** VAR_0, unsigned VAR_1) {
    U32 VAR_2 = 0xFD2FB528;
    unsigned VAR_3;
    FUNC_1(VAR_1 >= 1);
    for (VAR_3 = VAR_1 - 1; VAR_3 > 0; --VAR_3) {
        unsigned const VAR_4 = FUNC_0(&VAR_2) % (VAR_3 + 1);
        const char* const VAR_5 = VAR_0[VAR_4];
        VAR_0[VAR_4] = VAR_0[VAR_3];
        VAR_0[VAR_3] = VAR_5;
    }
}
