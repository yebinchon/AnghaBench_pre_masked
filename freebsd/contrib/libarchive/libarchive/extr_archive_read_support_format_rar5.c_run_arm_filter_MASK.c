
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int* window_buf; int window_mask; int solid_offset; int filtered_buf; } ;
struct rar5 {TYPE_1__ cstate; } ;
struct filter_info {int block_start; int block_length; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int,int,int) ;
 int FUNC_1 (struct rar5*,int) ;
 int FUNC_2 (struct rar5*,int,int) ;

__attribute__((used)) static int FUNC_3(struct rar5* VAR_1, struct filter_info* VAR_2) {
 ssize_t VAR_3 = 0;
 uint32_t VAR_4;

 FUNC_0(VAR_1->cstate.filtered_buf,
     VAR_1->cstate.window_buf, VAR_1->cstate.window_mask,
     VAR_1->cstate.solid_offset + VAR_2->block_start,
     VAR_1->cstate.solid_offset + VAR_2->block_start + VAR_2->block_length);

 for(VAR_3 = 0; VAR_3 < VAR_2->block_length - 3; VAR_3 += 4) {
  uint8_t* VAR_5 = &VAR_1->cstate.window_buf[
      (VAR_1->cstate.solid_offset +
      VAR_2->block_start + VAR_3 + 3) & VAR_1->cstate.window_mask];

  if(*VAR_5 == 0xEB) {

   VAR_4 = FUNC_1(VAR_1,
       (VAR_1->cstate.solid_offset + VAR_2->block_start + VAR_3) &
        VAR_1->cstate.window_mask) & 0x00ffffff;

   VAR_4 -= (uint32_t) ((VAR_3 + VAR_2->block_start) / 4);
   VAR_4 = (VAR_4 & 0x00ffffff) | 0xeb000000;
   FUNC_2(VAR_1, (uint32_t)VAR_3, VAR_4);
  }
 }

 return VAR_0;
}
