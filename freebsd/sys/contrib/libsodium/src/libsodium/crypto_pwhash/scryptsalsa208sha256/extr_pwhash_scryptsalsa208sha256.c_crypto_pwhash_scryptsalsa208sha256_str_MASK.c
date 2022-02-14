
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int escrypt_local_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ,int ,int *,int,int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,int const*,size_t,int const*,int *,int) ;
 int FUNC_6 (char*,int ,int) ;
 scalar_t__ FUNC_7 (unsigned long long,size_t,int *,int *,int *) ;
 int FUNC_8 (int *,int) ;

int
FUNC_9(
    char VAR_9[VAR_4],
    const char *const VAR_10, unsigned long long VAR_11,
    unsigned long long VAR_12, size_t VAR_13)
{
    uint8_t VAR_14[VAR_6];
    char VAR_15[VAR_7 + 1U];
    escrypt_local_t VAR_16;
    uint32_t VAR_17;
    uint32_t VAR_18;
    uint32_t VAR_19;

    FUNC_6(VAR_9, 0, VAR_4);
    if (VAR_11 > VAR_2) {
        VAR_8 = VAR_0;
        return -1;
    }
    if (VAR_11 < VAR_3 ||
        FUNC_7(VAR_12, VAR_13, &VAR_17, &VAR_18, &VAR_19) != 0) {
        VAR_8 = VAR_1;
        return -1;
    }
    FUNC_8(VAR_14, sizeof VAR_14);
    if (FUNC_3(VAR_17, VAR_19, VAR_18, VAR_14, sizeof VAR_14, (uint8_t *) VAR_15,
                          sizeof VAR_15) == ((void*)0)) {
        VAR_8 = VAR_1;
        return -1;
    }
    if (FUNC_4(&VAR_16) != 0) {
        return -1;
    }
    if (FUNC_5(&VAR_16, (const uint8_t *) VAR_10, (size_t) VAR_11,
                  (const uint8_t *) VAR_15, (uint8_t *) VAR_9,
                  VAR_4) == ((void*)0)) {

        FUNC_2(&VAR_16);
        VAR_8 = VAR_1;
        return -1;

    }
    FUNC_2(&VAR_16);

    FUNC_0(
        FUNC_1(VAR_6) ==
        VAR_7);
    FUNC_0(
        VAR_7 + 1U +
            VAR_5 + 1U ==
        VAR_4);

    return 0;
}
