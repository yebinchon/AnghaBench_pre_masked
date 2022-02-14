
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* data; } ;
typedef TYPE_1__ aes_block_t ;
typedef int AES_KEY ;


 size_t VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (unsigned char*,unsigned char*,int const*) ;
 int FUNC_1 (unsigned char*,unsigned char*,int const*) ;
 size_t VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_1__,unsigned char const*) ;
 int FUNC_4 (unsigned char*,int*,size_t) ;
 int FUNC_5 (unsigned char*,TYPE_1__) ;

void FUNC_6(const unsigned char *VAR_5, unsigned char *VAR_6,
                     size_t VAR_7, const AES_KEY *VAR_8,
                     unsigned char *VAR_9, const int VAR_10)
{
    size_t VAR_11;
    size_t VAR_12 = VAR_7;

    if (VAR_7 == 0)
        return;

    FUNC_2(VAR_5 && VAR_6 && VAR_8 && VAR_9);
    FUNC_2((VAR_2 == VAR_10) || (VAR_1 == VAR_10));
    FUNC_2((VAR_7 % VAR_0) == 0);

    VAR_12 = VAR_7 / VAR_0;

    if (VAR_2 == VAR_10) {
        if (VAR_5 != VAR_6 &&
            (VAR_4
             || ((size_t)VAR_5 | (size_t)VAR_6 | (size_t)VAR_9) % sizeof(long) ==
             0)) {
            aes_block_t *VAR_13 = (aes_block_t *) VAR_9;
            aes_block_t *VAR_14 = (aes_block_t *) (VAR_9 + VAR_0);

            while (VAR_12) {
                aes_block_t *VAR_15 = (aes_block_t *) VAR_5;
                aes_block_t *VAR_16 = (aes_block_t *) VAR_6;

                for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11)
                    VAR_16->data[VAR_11] = VAR_15->data[VAR_11] ^ VAR_13->data[VAR_11];
                FUNC_1((unsigned char *)VAR_16->data,
                            (unsigned char *)VAR_16->data, VAR_8);
                for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11)
                    VAR_16->data[VAR_11] ^= VAR_14->data[VAR_11];
                VAR_13 = VAR_16;
                VAR_14 = VAR_15;
                --VAR_12;
                VAR_5 += VAR_0;
                VAR_6 += VAR_0;
            }
            FUNC_4(VAR_9, VAR_13->data, VAR_0);
            FUNC_4(VAR_9 + VAR_0, VAR_14->data, VAR_0);
        } else {
            aes_block_t VAR_17, VAR_18;
            aes_block_t VAR_19;
            aes_block_t VAR_20;

            FUNC_3(VAR_19, VAR_9);
            FUNC_3(VAR_20, VAR_9 + VAR_0);

            while (VAR_12) {
                FUNC_3(VAR_17, VAR_5);
                for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11)
                    VAR_18[VAR_11] = VAR_17.data[VAR_11] ^ VAR_19.data[VAR_11];
                FUNC_1((unsigned char *)VAR_18,
                            (unsigned char *)VAR_18, VAR_8);
                for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11)
                    VAR_18[VAR_11] ^= VAR_20[VAR_11];
                FUNC_5(VAR_6, VAR_18);
                VAR_19 = VAR_18;
                VAR_20 = VAR_17;
                --VAR_12;
                VAR_5 += VAR_0;
                VAR_6 += VAR_0;
            }
            FUNC_4(VAR_9, VAR_19.data, VAR_0);
            FUNC_4(VAR_9 + VAR_0, VAR_20, VAR_0);
        }
    } else {
        if (VAR_5 != VAR_6 &&
            (VAR_4
             || ((size_t)VAR_5 | (size_t)VAR_6 | (size_t)VAR_9) % sizeof(long) ==
             0)) {
            aes_block_t *VAR_21 = (aes_block_t *) VAR_9;
            aes_block_t *VAR_22 = (aes_block_t *) (VAR_9 + VAR_0);

            while (VAR_12) {
                aes_block_t VAR_23;
                aes_block_t *VAR_24 = (aes_block_t *) VAR_5;
                aes_block_t *VAR_25 = (aes_block_t *) VAR_6;

                for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11)
                    VAR_23.data[VAR_11] = VAR_24->data[VAR_11] ^ VAR_22->data[VAR_11];
                FUNC_0((unsigned char *)VAR_23.data,
                            (unsigned char *)VAR_25->data, VAR_8);
                for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11)
                    VAR_25->data[VAR_11] ^= VAR_21->data[VAR_11];
                VAR_21 = VAR_24;
                VAR_22 = VAR_25;
                --VAR_12;
                VAR_5 += VAR_0;
                VAR_6 += VAR_0;
            }
            FUNC_4(VAR_9, VAR_21->data, VAR_0);
            FUNC_4(VAR_9 + VAR_0, VAR_22->data, VAR_0);
        } else {
            aes_block_t VAR_26, VAR_27;
            aes_block_t VAR_28;
            aes_block_t VAR_29;

            FUNC_3(VAR_28, VAR_9);
            FUNC_3(VAR_29, VAR_9 + VAR_0);

            while (VAR_12) {
                FUNC_3(VAR_26, VAR_5);
                VAR_27 = VAR_26;
                for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11)
                    VAR_26.data[VAR_11] ^= VAR_29[VAR_11];
                FUNC_0((unsigned char *)VAR_26.data,
                            (unsigned char *)VAR_26.data, VAR_8);
                for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11)
                    VAR_26.data[VAR_11] ^= VAR_28.data[VAR_11];
                FUNC_5(VAR_6, VAR_26);
                VAR_28 = VAR_27;
                VAR_29 = VAR_26;
                --VAR_12;
                VAR_5 += VAR_0;
                VAR_6 += VAR_0;
            }
            FUNC_4(VAR_9, VAR_28.data, VAR_0);
            FUNC_4(VAR_9 + VAR_0, VAR_29, VAR_0);
        }
    }
}
