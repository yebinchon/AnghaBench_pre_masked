
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t tableLen; TYPE_1__* entries; } ;
struct TYPE_7__ {TYPE_2__ seekTable; } ;
typedef TYPE_3__ ZSTD_seekable ;
typedef int U32 ;
struct TYPE_5__ {unsigned long long dOffset; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;

unsigned FUNC_1(ZSTD_seekable* const VAR_1, unsigned long long VAR_2)
{
    U32 VAR_3 = 0;
    U32 VAR_4 = (U32)VAR_1->seekTable.tableLen;
    FUNC_0(VAR_1->seekTable.tableLen <= VAR_0);

    if (VAR_2 >= VAR_1->seekTable.entries[VAR_1->seekTable.tableLen].dOffset) {
        return (U32)VAR_1->seekTable.tableLen;
    }

    while (VAR_3 + 1 < VAR_4) {
        U32 const VAR_5 = VAR_3 + ((VAR_4 - VAR_3) >> 1);
        if (VAR_1->seekTable.entries[VAR_5].dOffset <= VAR_2) {
            VAR_3 = VAR_5;
        } else {
            VAR_4 = VAR_5;
        }
    }
    return VAR_3;
}
