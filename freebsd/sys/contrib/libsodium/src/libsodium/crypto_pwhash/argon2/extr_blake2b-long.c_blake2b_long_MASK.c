
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char const uint8_t ;
typedef size_t uint32_t ;
typedef int outlen_bytes ;
typedef int crypto_generichash_blake2b_state ;
typedef int blake_state ;


 int FUNC_0 (unsigned char const*,size_t) ;
 int FUNC_1 (int ) ;
 size_t VAR_0 ;
 int FUNC_2 (unsigned char const*,size_t,unsigned char const*,size_t,int *,unsigned int) ;
 size_t VAR_1 ;
 int FUNC_3 (int *,unsigned char const*,size_t) ;
 int FUNC_4 (int *,int *,unsigned int,size_t) ;
 int FUNC_5 (int *,unsigned char const*,size_t) ;
 int FUNC_6 (unsigned char const*,unsigned char const*,size_t) ;
 int FUNC_7 (int *,int) ;

int
FUNC_8(void *VAR_2, size_t VAR_3, const void *VAR_4, size_t VAR_5)
{
    uint8_t *VAR_6 = (uint8_t *) VAR_2;
    crypto_generichash_blake2b_state VAR_7;
    uint8_t VAR_8[4 ] = { 0 };
    int VAR_9 = -1;

    if (VAR_3 > VAR_0) {
        goto fail;
    }


    FUNC_0(VAR_8, (uint32_t) VAR_3);
    if (VAR_3 <= VAR_1) {
        do { VAR_9 = FUNC_4(&VAR_7, ((void*)0), 0U, VAR_3); if (VAR_9 < 0) { goto fail; } } while ((void) 0, 0);
        do { VAR_9 = FUNC_5(&VAR_7, VAR_8, sizeof(VAR_8)); if (VAR_9 < 0) { goto fail; } } while ((void) 0, 0);

        do { VAR_9 = FUNC_5( &VAR_7, (const unsigned char *) VAR_4, VAR_5); if (VAR_9 < 0) { goto fail; } } while ((void) 0, 0);

        do { VAR_9 = FUNC_3(&VAR_7, VAR_6, VAR_3); if (VAR_9 < 0) { goto fail; } } while ((void) 0, 0);
    } else {
        uint32_t VAR_10;
        uint8_t VAR_11[VAR_1];
        uint8_t VAR_12[VAR_1];
        do { VAR_9 = FUNC_4( &VAR_7, ((void*)0), 0U, VAR_1); if (VAR_9 < 0) { goto fail; } } while ((void) 0, 0);

        do { VAR_9 = FUNC_5(&VAR_7, VAR_8, sizeof(VAR_8)); if (VAR_9 < 0) { goto fail; } } while ((void) 0, 0);

        do { VAR_9 = FUNC_5( &VAR_7, (const unsigned char *) VAR_4, VAR_5); if (VAR_9 < 0) { goto fail; } } while ((void) 0, 0);

        do { VAR_9 = FUNC_3( &VAR_7, VAR_11, VAR_1); if (VAR_9 < 0) { goto fail; } } while ((void) 0, 0);

        FUNC_6(VAR_6, VAR_11, VAR_1 / 2);
        VAR_6 += VAR_1 / 2;
        VAR_10 =
            (uint32_t) VAR_3 - VAR_1 / 2;

        while (VAR_10 > VAR_1) {
            FUNC_6(VAR_12, VAR_11, VAR_1);
            do { VAR_9 = FUNC_2( VAR_11, VAR_1, VAR_12, VAR_1, ((void*)0), 0U); if (VAR_9 < 0) { goto fail; } } while ((void) 0, 0);


            FUNC_6(VAR_6, VAR_11, VAR_1 / 2);
            VAR_6 += VAR_1 / 2;
            VAR_10 -= VAR_1 / 2;
        }

        FUNC_6(VAR_12, VAR_11, VAR_1);
        do { VAR_9 = FUNC_2(VAR_11, VAR_10, VAR_12, VAR_1, ((void*)0), 0U); if (VAR_9 < 0) { goto fail; } } while ((void) 0, 0);


        FUNC_6(VAR_6, VAR_11, VAR_10);
    }
fail:
    FUNC_7(&VAR_7, sizeof(VAR_7));
    return VAR_9;

}
