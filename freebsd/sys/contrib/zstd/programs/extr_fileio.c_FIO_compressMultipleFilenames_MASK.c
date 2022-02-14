
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * dstFile; } ;
typedef TYPE_1__ cRess_t ;
typedef int ZSTD_compressionParameters ;
typedef int FIO_prefs_t ;


 int FUNC_0 (int,char*,int ,char const*) ;
 int FUNC_1 (char const**,unsigned int) ;
 int FUNC_2 (int * const,TYPE_1__,char const* const,char const* const,int) ;
 TYPE_1__ FUNC_3 (int * const,char const*,int,int ) ;
 char* FUNC_4 (char const* const,char const*,char const*) ;
 int FUNC_5 (TYPE_1__) ;
 int * FUNC_6 (int * const,int *,char const*) ;
 int FUNC_7 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

int FUNC_10(FIO_prefs_t* const VAR_1,
                                  const char** VAR_2, unsigned VAR_3,
                                  const char* VAR_4,
                                  const char* VAR_5, const char* VAR_6,
                                  const char* VAR_7, int VAR_8,
                                  ZSTD_compressionParameters VAR_9)
{
    int VAR_10 = 0;
    cRess_t VAR_11 = FUNC_3(VAR_1, VAR_7, VAR_8, VAR_9);


    FUNC_7(VAR_5 != ((void*)0) || VAR_6 != ((void*)0));
    if (VAR_5 != ((void*)0)) {
        VAR_11.dstFile = FUNC_6(VAR_1, ((void*)0), VAR_5);
        if (VAR_11.dstFile == ((void*)0)) {
            VAR_10 = 1;
        } else {
            unsigned VAR_12;
            for (VAR_12=0; VAR_12<VAR_3; VAR_12++)
                VAR_10 |= FUNC_2(VAR_1, VAR_11, VAR_5, VAR_2[VAR_12], VAR_8);
            if (FUNC_8(VAR_11.dstFile))
                FUNC_0(29, "Write error (%s) : cannot properly close %s",
                            FUNC_9(VAR_0), VAR_5);
            VAR_11.dstFile = ((void*)0);
        }
    } else {
        unsigned VAR_13;
        for (VAR_13=0; VAR_13<VAR_3; VAR_13++) {
            const char* const VAR_14 = VAR_2[VAR_13];
            const char* const VAR_15 = FUNC_4(VAR_14, VAR_4, VAR_6);
            VAR_10 |= FUNC_2(VAR_1, VAR_11, VAR_15, VAR_14, VAR_8);
        }
        if (VAR_4)
            FUNC_1(VAR_2 ,VAR_3);
    }

    FUNC_5(VAR_11);
    return VAR_10;
}
