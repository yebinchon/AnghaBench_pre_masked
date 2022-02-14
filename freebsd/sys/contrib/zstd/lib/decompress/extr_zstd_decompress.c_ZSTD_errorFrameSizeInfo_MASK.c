
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t compressedSize; int decompressedBound; } ;
typedef TYPE_1__ ZSTD_frameSizeInfo ;


 int VAR_0 ;

__attribute__((used)) static ZSTD_frameSizeInfo FUNC_0(size_t VAR_1)
{
    ZSTD_frameSizeInfo VAR_2;
    VAR_2.compressedSize = VAR_1;
    VAR_2.decompressedBound = VAR_0;
    return VAR_2;
}
