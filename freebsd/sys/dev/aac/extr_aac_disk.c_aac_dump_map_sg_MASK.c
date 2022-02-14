
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct aac_sg_table {int SgCount; TYPE_1__* SgEntry; } ;
struct aac_sg_entry {int dummy; } ;
struct TYPE_6__ {int Size; } ;
struct aac_fib {TYPE_2__ Header; int * data; } ;
struct aac_blockwrite {struct aac_sg_table SgMap; } ;
struct TYPE_7__ {scalar_t__ ds_addr; int ds_len; } ;
typedef TYPE_3__ bus_dma_segment_t ;
struct TYPE_5__ {scalar_t__ SgAddress; int SgByteCount; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(void *VAR_1, bus_dma_segment_t *VAR_2, int VAR_3, int VAR_4)
{
 struct aac_fib *VAR_5;
 struct aac_blockwrite *VAR_6;
 struct aac_sg_table *VAR_7;
 int VAR_8;

 VAR_5 = (struct aac_fib *)VAR_1;
 VAR_6 = (struct aac_blockwrite *)&VAR_5->data[0];
 VAR_7 = &VAR_6->SgMap;

 if (VAR_7 != ((void*)0)) {
  VAR_7->SgCount = VAR_3;
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
   if (VAR_2[VAR_8].ds_addr >= VAR_0)
    return;
   VAR_7->SgEntry[VAR_8].SgAddress = VAR_2[VAR_8].ds_addr;
   VAR_7->SgEntry[VAR_8].SgByteCount = VAR_2[VAR_8].ds_len;
  }
  VAR_5->Header.Size = VAR_3 * sizeof(struct aac_sg_entry);
 }
}
