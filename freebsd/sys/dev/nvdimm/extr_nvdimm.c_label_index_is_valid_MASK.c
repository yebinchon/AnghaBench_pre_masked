
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct nvdimm_label_index {scalar_t__ checksum; size_t this_offset; size_t this_size; size_t other_offset; int seq; scalar_t__ slot_cnt; int label_size; int signature; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nvdimm_label_index*,size_t) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static bool
FUNC_2(struct nvdimm_label_index *VAR_1, uint32_t VAR_2,
    size_t VAR_3, size_t VAR_4)
{
 uint64_t VAR_5;

 VAR_1 = (struct nvdimm_label_index *)((uint8_t *)VAR_1 + VAR_3 * VAR_4);
 if (FUNC_1(VAR_1->signature, VAR_0) != 0)
  return 0;
 VAR_5 = VAR_1->checksum;
 VAR_1->checksum = 0;
 if (VAR_5 != FUNC_0(VAR_1, VAR_3) ||
     VAR_1->this_offset != VAR_3 * VAR_4 || VAR_1->this_size != VAR_3 ||
     VAR_1->other_offset != VAR_3 * (VAR_4 == 0 ? 1 : 0) ||
     VAR_1->seq == 0 || VAR_1->seq > 3 || VAR_1->slot_cnt > VAR_2 ||
     VAR_1->label_size != 1)
  return 0;
 return 1;
}
