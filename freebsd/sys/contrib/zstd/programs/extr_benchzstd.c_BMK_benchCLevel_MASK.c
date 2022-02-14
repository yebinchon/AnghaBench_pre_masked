
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_compressionParameters ;
struct TYPE_4__ {int blockSize; int nbSeconds; int additionalParam; scalar_t__ realTime; } ;
typedef int BMK_benchOutcome_t ;
typedef TYPE_1__ BMK_advancedParams_t ;


 int FUNC_0 (void const*,size_t,int *,int ,size_t const*,unsigned int,int,int const*,void const*,size_t,int,char const*,TYPE_1__ const* const) ;
 int FUNC_1 (char*,int ,int ,unsigned int,int ,unsigned int) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static BMK_benchOutcome_t FUNC_4(const void* VAR_3, size_t VAR_4,
                            const size_t* VAR_5, unsigned VAR_6,
                            int VAR_7, const ZSTD_compressionParameters* VAR_8,
                            const void* VAR_9, size_t VAR_10,
                            int VAR_11, const char* VAR_12,
                            BMK_advancedParams_t const * const VAR_13)
{
    const char* VAR_14 = FUNC_3(VAR_12, '\\');
    if (!VAR_14) VAR_14 = FUNC_3(VAR_12, '/');
    if (VAR_14) VAR_12 = VAR_14+1;

    if (VAR_13->realTime) {
        FUNC_2(2, "Note : switching to real-time priority \n");
        VAR_0;
    }

    if (VAR_11 == 1 && !VAR_13->additionalParam)
        FUNC_1("bench %s %s: input %u bytes, %u seconds, %u KB blocks\n",
                VAR_2, VAR_1,
                (unsigned)VAR_4, VAR_13->nbSeconds, (unsigned)(VAR_13->blockSize>>10));

    return FUNC_0(VAR_3, VAR_4,
                                ((void*)0), 0,
                                VAR_5, VAR_6,
                                VAR_7, VAR_8,
                                VAR_9, VAR_10,
                                VAR_11, VAR_12, VAR_13);
}
