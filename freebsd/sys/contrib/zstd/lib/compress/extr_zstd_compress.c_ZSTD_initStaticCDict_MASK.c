
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_dictLoadMethod_e ;
typedef int ZSTD_dictContentType_e ;
typedef int ZSTD_cwksp ;
typedef int ZSTD_compressionParameters ;
struct TYPE_4__ {int workspace; } ;
typedef TYPE_1__ const ZSTD_CDict ;


 int FUNC_0 (int,char*,unsigned int,unsigned int,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (size_t,int) ;
 size_t const FUNC_2 (int) ;
 int FUNC_3 (int *,void*,size_t) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_1__ const*,void const*,size_t,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 size_t FUNC_8 (int *,int ) ;

const ZSTD_CDict* FUNC_9(
                                 void* VAR_2, size_t VAR_3,
                           const void* VAR_4, size_t VAR_5,
                                 ZSTD_dictLoadMethod_e VAR_6,
                                 ZSTD_dictContentType_e VAR_7,
                                 ZSTD_compressionParameters VAR_8)
{
    size_t const VAR_9 = FUNC_8(&VAR_8, 0);
    size_t const VAR_10 = FUNC_2(sizeof(ZSTD_CDict))
                            + (VAR_6 == VAR_1 ? 0
                               : FUNC_2(FUNC_1(VAR_5, sizeof(void*))))
                            + FUNC_2(VAR_0)
                            + VAR_9;
    ZSTD_CDict* VAR_11;

    if ((size_t)VAR_2 & 7) return ((void*)0);

    {
        ZSTD_cwksp VAR_12;
        FUNC_3(&VAR_12, VAR_2, VAR_3);
        VAR_11 = (ZSTD_CDict*)FUNC_5(&VAR_12, sizeof(ZSTD_CDict));
        if (VAR_11 == ((void*)0)) return ((void*)0);
        FUNC_4(&VAR_11->workspace, &VAR_12);
    }

    FUNC_0(4, "(workspaceSize < neededSize) : (%u < %u) => %u",
        (unsigned)VAR_3, (unsigned)VAR_10, (unsigned)(VAR_3 < VAR_10));
    if (VAR_3 < VAR_10) return ((void*)0);

    if (FUNC_7( FUNC_6(VAR_11,
                                              VAR_4, VAR_5,
                                              VAR_6, VAR_7,
                                              VAR_8) ))
        return ((void*)0);

    return VAR_11;
}
