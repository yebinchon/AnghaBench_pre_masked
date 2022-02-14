
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_compressionParameters ;
struct TYPE_4__ {int compressionLevel; } ;
typedef TYPE_1__ ZSTD_CDict ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (void const*,size_t,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ,size_t) ;

ZSTD_CDict* FUNC_2(const void* VAR_4, size_t VAR_5, int VAR_6)
{
    ZSTD_compressionParameters VAR_7 = FUNC_1(VAR_6, 0, VAR_5);
    ZSTD_CDict* VAR_8 = FUNC_0(VAR_4, VAR_5,
                                                  VAR_3, VAR_1,
                                                  VAR_7, VAR_2);
    if (VAR_8)
        VAR_8->compressionLevel = VAR_6 == 0 ? VAR_0 : VAR_6;
    return VAR_8;
}
