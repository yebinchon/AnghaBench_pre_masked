
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct nvdimm_label_index {scalar_t__ seq; } ;
struct nvdimm_label {int dummy; } ;
struct nvdimm_dev {size_t label_area_size; TYPE_1__* label_index; } ;
typedef int bitstr_t ;
struct TYPE_2__ {int slot_cnt; scalar_t__ free; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nvdimm_label_index*,TYPE_1__*,size_t) ;
 int FUNC_1 (int *,int,int ,int*) ;
 int FUNC_2 (struct nvdimm_label_index*,int ) ;
 int FUNC_3 (struct nvdimm_label_index*,size_t,size_t,int) ;
 void* FUNC_4 (size_t,int ,int ) ;
 int FUNC_5 (struct nvdimm_dev*,int) ;
 int FUNC_6 (struct nvdimm_dev*,void*,int ,int) ;
 int FUNC_7 (size_t,int) ;

__attribute__((used)) static int
FUNC_8(struct nvdimm_dev *VAR_3)
{
 struct nvdimm_label_index *VAR_4, *VAR_5;
 size_t VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;
 bool VAR_11, VAR_12;

 for (VAR_7 = 256; ; VAR_7 += 256) {
  VAR_8 = 8 * (VAR_7 -
      sizeof(struct nvdimm_label_index));
  if (VAR_7 + VAR_8 * sizeof(struct nvdimm_label) >=
      VAR_3->label_area_size)
   break;
 }
 VAR_8 = (VAR_3->label_area_size - VAR_7) /
     sizeof(struct nvdimm_label);
 VAR_6 = FUNC_7(VAR_8, 8) / 8;
 VAR_4 = FUNC_4(2 * VAR_7, VAR_1, VAR_2);
 VAR_5 = (void *)((uint8_t *)VAR_4 + VAR_7);
 VAR_9 = FUNC_6(VAR_3, (void *)VAR_4, 0, 2 * VAR_7);
 if (VAR_9 != 0) {
  FUNC_2(VAR_4, VAR_1);
  return (VAR_9);
 }
 VAR_11 = FUNC_3(VAR_4, VAR_8, VAR_7,
     0);
 VAR_12 = FUNC_3(VAR_4, VAR_8, VAR_7,
     1);
 if (!VAR_11 && !VAR_12) {
  FUNC_2(VAR_4, VAR_1);
  return (VAR_0);
 }
 if (VAR_11 && VAR_12) {
  if (((int)VAR_4->seq - (int)VAR_5->seq + 3) % 3 == 1) {

   VAR_12 = 0;
  } else {






   VAR_11 = 0;
  }
 }
 VAR_3->label_index = FUNC_4(VAR_7, VAR_1, VAR_2);
 FUNC_0(VAR_11 ? VAR_4 : VAR_5, VAR_3->label_index, VAR_7);
 FUNC_2(VAR_4, VAR_1);
 FUNC_1((bitstr_t *)VAR_3->label_index->free, 0,
     VAR_3->label_index->slot_cnt, &VAR_10);
 while (VAR_10 >= 0) {
  FUNC_5(VAR_3, VAR_10);
  FUNC_1((bitstr_t *)VAR_3->label_index->free, VAR_10 + 1,
      VAR_3->label_index->slot_cnt, &VAR_10);
 }
 return (0);
}
