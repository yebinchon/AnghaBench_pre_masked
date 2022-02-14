
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct aac_sg_table64 {int SgCount; TYPE_1__* SgEntry64; } ;
struct aac_sg_entry64 {int dummy; } ;
struct TYPE_6__ {int Size; } ;
struct aac_fib {TYPE_2__ Header; int * data; } ;
struct aac_blockwrite64 {struct aac_sg_table64 SgMap64; } ;
struct TYPE_7__ {int ds_len; int ds_addr; } ;
typedef TYPE_3__ bus_dma_segment_t ;
struct TYPE_5__ {int SgByteCount; int SgAddress; } ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, bus_dma_segment_t *VAR_1, int VAR_2, int VAR_3)
{
 struct aac_fib *VAR_4;
 struct aac_blockwrite64 *VAR_5;
 struct aac_sg_table64 *VAR_6;
 int VAR_7;

 VAR_4 = (struct aac_fib *)VAR_0;
 VAR_5 = (struct aac_blockwrite64 *)&VAR_4->data[0];
 VAR_6 = &VAR_5->SgMap64;

 if (VAR_6 != ((void*)0)) {
  VAR_6->SgCount = VAR_2;
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
   VAR_6->SgEntry64[VAR_7].SgAddress = VAR_1[VAR_7].ds_addr;
   VAR_6->SgEntry64[VAR_7].SgByteCount = VAR_1[VAR_7].ds_len;
  }
  VAR_4->Header.Size = VAR_2 * sizeof(struct aac_sg_entry64);
 }
}
