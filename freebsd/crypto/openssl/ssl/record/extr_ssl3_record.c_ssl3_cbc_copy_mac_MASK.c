
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; size_t orig_len; unsigned char* data; } ;
typedef TYPE_1__ SSL3_RECORD ;


 int VAR_0 ;
 unsigned char FUNC_0 (size_t,size_t) ;
 size_t FUNC_1 (size_t,size_t) ;
 size_t FUNC_2 (size_t,size_t) ;
 int FUNC_3 (unsigned char*,int ,size_t) ;
 int FUNC_4 (int) ;

int FUNC_5(unsigned char *VAR_1,
                       const SSL3_RECORD *VAR_2, size_t VAR_3)
{




    unsigned char VAR_4[VAR_0];





    size_t VAR_5 = VAR_2->length;
    size_t VAR_6 = VAR_5 - VAR_3;
    size_t VAR_7;




    size_t VAR_8 = 0;
    size_t VAR_9, VAR_10;
    size_t VAR_11;

    if (!FUNC_4(VAR_2->orig_len >= VAR_3
                     && VAR_3 <= VAR_0))
        return 0;






    if (VAR_2->orig_len > VAR_3 + 255 + 1)
        VAR_8 = VAR_2->orig_len - (VAR_3 + 255 + 1);

    VAR_7 = 0;
    VAR_11 = 0;
    FUNC_3(VAR_4, 0, VAR_3);
    for (VAR_9 = VAR_8, VAR_10 = 0; VAR_9 < VAR_2->orig_len; VAR_9++) {
        size_t VAR_12 = FUNC_1(VAR_9, VAR_6);
        size_t VAR_13 = FUNC_2(VAR_9, VAR_5);
        unsigned char VAR_14 = VAR_2->data[VAR_9];

        VAR_7 |= VAR_12;
        VAR_7 &= VAR_13;
        VAR_11 |= VAR_10 & VAR_12;
        VAR_4[VAR_10++] |= VAR_14 & VAR_7;
        VAR_10 &= FUNC_2(VAR_10, VAR_3);
    }
    FUNC_3(VAR_1, 0, VAR_3);
    VAR_11 = VAR_3 - VAR_11;
    VAR_11 &= FUNC_2(VAR_11, VAR_3);
    for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
        for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
            VAR_1[VAR_10] |= VAR_4[VAR_9] & FUNC_0(VAR_10, VAR_11);
        VAR_11++;
        VAR_11 &= FUNC_2(VAR_11, VAR_3);
    }


    return 1;
}
