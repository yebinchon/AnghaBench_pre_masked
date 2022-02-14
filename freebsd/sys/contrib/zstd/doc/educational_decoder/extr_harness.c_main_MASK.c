
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int dictionary_t ;


 size_t const VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int * const,size_t,int *,size_t const,int * const) ;
 size_t FUNC_1 (int *,size_t const) ;
 int * FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int * const) ;
 int * FUNC_6 (size_t) ;
 int FUNC_7 (int * const,int *,size_t) ;
 void* FUNC_8 (char*,int **) ;
 int VAR_2 ;
 int FUNC_9 (char*,int * const,size_t const) ;

int FUNC_10(int VAR_3, char **VAR_4)
{
    if (VAR_3 < 3) {
        FUNC_3(VAR_2, "usage: %s <file.zst> <out_path> [dictionary] \n",
                VAR_4[0]);

        return 1;
    }

    u8* VAR_5;
    size_t const VAR_6 = FUNC_8(VAR_4[1], &VAR_5);

    u8* VAR_7 = ((void*)0);
    size_t VAR_8 = 0;
    if (VAR_3 >= 4) {
        VAR_8 = FUNC_8(VAR_4[3], &VAR_7);
    }

    size_t VAR_9 = FUNC_1(VAR_5, VAR_6);
    if (VAR_9 == (size_t)-1) {
        VAR_9 = VAR_0 * VAR_6;
        FUNC_3(VAR_2, "WARNING: Compressed data does not contain "
                        "decompressed size, going to assume the compression "
                        "ratio is at most %zu (decompressed size of at most "
                        "%u) \n",
                VAR_0, (unsigned)VAR_9);
    }
    if (VAR_9 > VAR_1) {
        FUNC_3(VAR_2,
                "Required output size too large for this implementation \n");
        return 1;
    }

    u8* const VAR_10 = FUNC_6(VAR_9);
    if (!VAR_10) {
        FUNC_3(VAR_2, "failed to allocate memory \n");
        return 1;
    }

    dictionary_t* const VAR_11 = FUNC_2();
    if (VAR_7) {
        FUNC_7(VAR_11, VAR_7, VAR_8);
    }
    size_t const VAR_12 =
        FUNC_0(VAR_10, VAR_9,
                                  VAR_5, VAR_6,
                                  VAR_11);

    FUNC_5(VAR_11);

    FUNC_9(VAR_4[2], VAR_10, VAR_12);

    FUNC_4(VAR_5);
    FUNC_4(VAR_10);
    FUNC_4(VAR_7);
    return 0;
}
