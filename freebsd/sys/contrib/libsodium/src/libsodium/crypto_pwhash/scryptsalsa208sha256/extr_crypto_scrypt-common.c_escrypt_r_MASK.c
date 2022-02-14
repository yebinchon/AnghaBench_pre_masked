
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int hash ;
typedef int escrypt_local_t ;
typedef scalar_t__ (* escrypt_kdf_t ) (int *,scalar_t__ const*,size_t,scalar_t__ const*,size_t,int,int,int,scalar_t__*,int) ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__* FUNC_0 (scalar_t__*,size_t,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__ const*,size_t,scalar_t__ const*,size_t,int,int,int,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (int *,scalar_t__ const*,size_t,scalar_t__ const*,size_t,int,int,int,scalar_t__*,int) ;
 scalar_t__* FUNC_3 (scalar_t__ const*,int*,int*,int*) ;
 int FUNC_4 (scalar_t__*,scalar_t__ const*,size_t) ;
 int FUNC_5 (scalar_t__*,int) ;
 scalar_t__ FUNC_6 () ;
 size_t FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char) ;

uint8_t *
FUNC_9(escrypt_local_t *VAR_2, const uint8_t *VAR_3, size_t VAR_4,
          const uint8_t *VAR_5, uint8_t *VAR_6, size_t VAR_7)
{
    uint8_t VAR_8[VAR_0];
    escrypt_kdf_t VAR_9;
    const uint8_t *VAR_10;
    const uint8_t *VAR_11;
    uint8_t *VAR_12;
    size_t VAR_13;
    size_t VAR_14;
    size_t VAR_15;
    uint64_t VAR_16;
    uint32_t VAR_17;
    uint32_t VAR_18;
    uint32_t VAR_19;

    VAR_10 = FUNC_3(VAR_5, &VAR_17, &VAR_18, &VAR_19);
    if (!VAR_10) {
        return ((void*)0);
    }
    VAR_16 = (uint64_t) 1 << VAR_17;
    VAR_13 = VAR_10 - VAR_5;

    VAR_11 = VAR_10;
    VAR_10 = (uint8_t *) FUNC_8((char *) VAR_11, '$');
    if (VAR_10) {
        VAR_14 = VAR_10 - VAR_11;
    } else {
        VAR_14 = FUNC_7((char *) VAR_11);
    }
    VAR_15 = VAR_13 + VAR_14 + 1 +
           VAR_1 + 1;
    if (VAR_15 > VAR_7 || VAR_15 < VAR_14) {
        return ((void*)0);
    }




    VAR_9 = FUNC_1;

    if (VAR_9(VAR_2, VAR_3, VAR_4, VAR_11, VAR_14, VAR_16, VAR_18, VAR_19, VAR_8,
                    sizeof(VAR_8))) {
        return ((void*)0);
    }
    VAR_12 = VAR_6;
    FUNC_4(VAR_12, VAR_5, VAR_13 + VAR_14);
    VAR_12 += VAR_13 + VAR_14;
    *VAR_12++ = '$';

    VAR_12 = FUNC_0(VAR_12, VAR_7 - (VAR_12 - VAR_6), VAR_8, sizeof(VAR_8));
    FUNC_5(VAR_8, sizeof VAR_8);
    if (!VAR_12 || VAR_12 >= VAR_6 + VAR_7) {
        return ((void*)0);
    }
    *VAR_12 = 0;

    return VAR_6;
}
