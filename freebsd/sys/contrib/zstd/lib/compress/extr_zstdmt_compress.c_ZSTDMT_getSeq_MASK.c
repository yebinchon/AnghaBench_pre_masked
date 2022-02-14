
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int rawSeqStore_t ;
struct TYPE_4__ {scalar_t__ bufferSize; } ;
typedef TYPE_1__ ZSTDMT_seqPool ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static rawSeqStore_t FUNC_2(ZSTDMT_seqPool* VAR_1)
{
    if (VAR_1->bufferSize == 0) {
        return VAR_0;
    }
    return FUNC_1(FUNC_0(VAR_1));
}
