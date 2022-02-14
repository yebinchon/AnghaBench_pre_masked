
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UINT32 ;


 int FUNC_0 (int*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, UWORD VAR_1, UINT32 VAR_2)


{
    UWORD VAR_3 = VAR_2 / VAR_1;
    if (VAR_1 == 4) {
        UINT32 *VAR_4 = (UINT32 *)VAR_0;
        do {
            *VAR_4 = FUNC_0(VAR_4);
            VAR_4++;
        } while (--VAR_3);
    } else if (VAR_1 == 8) {
        UINT32 *VAR_5 = (UINT32 *)VAR_0;
        UINT32 VAR_6;
        do {
            VAR_6 = FUNC_0(VAR_5+1);
            VAR_5[1] = FUNC_0(VAR_5);
            VAR_5[0] = VAR_6;
            VAR_5 += 2;
        } while (--VAR_3);
    }
}
