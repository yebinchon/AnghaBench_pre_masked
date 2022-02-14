
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int tableLen; TYPE_1__* entries; } ;
struct TYPE_7__ {TYPE_2__ seekTable; } ;
typedef TYPE_3__ ZSTD_seekable ;
struct TYPE_5__ {unsigned long long cOffset; } ;


 unsigned long long VAR_0 ;

unsigned long long FUNC_0(ZSTD_seekable* const VAR_1, unsigned VAR_2)
{
    if (VAR_2 >= VAR_1->seekTable.tableLen) return VAR_0;
    return VAR_1->seekTable.entries[VAR_2].cOffset;
}
