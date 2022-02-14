
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16_t ;
typedef int PACKET ;


 int VAR_0 ;
 int FUNC_0 (unsigned int*) ;
 unsigned int* FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int *,unsigned int*) ;
 size_t FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(PACKET *VAR_2, uint16_t **VAR_3, size_t *VAR_4)
{
    unsigned int VAR_5;
    size_t VAR_6, VAR_7;
    uint16_t *VAR_8;

    VAR_6 = FUNC_3(VAR_2);


    if (VAR_6 == 0 || (VAR_6 & 1) != 0)
        return 0;

    VAR_6 >>= 1;

    if ((VAR_8 = FUNC_1(VAR_6 * sizeof(*VAR_8))) == ((void*)0)) {
        FUNC_4(VAR_1, VAR_0);
        return 0;
    }
    for (VAR_7 = 0; VAR_7 < VAR_6 && FUNC_2(VAR_2, &VAR_5); VAR_7++)
        VAR_8[VAR_7] = VAR_5;

    if (VAR_7 != VAR_6) {
        FUNC_0(VAR_8);
        return 0;
    }

    FUNC_0(*VAR_3);
    *VAR_3 = VAR_8;
    *VAR_4 = VAR_6;

    return 1;
}
