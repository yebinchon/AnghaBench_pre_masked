
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t compressedSize; } ;
typedef TYPE_1__ ZSTD_frameSizeInfo ;


 TYPE_1__ FUNC_0 (void const*,size_t) ;

size_t FUNC_1(const void *VAR_0, size_t VAR_1)
{
    ZSTD_frameSizeInfo const VAR_2 = FUNC_0(VAR_0, VAR_1);
    return VAR_2.compressedSize;
}
