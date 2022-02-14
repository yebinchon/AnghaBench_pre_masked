
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int* window_buf; size_t window_mask; int solid_offset; int filtered_buf; } ;
struct rar5 {TYPE_1__ cstate; } ;
struct filter_info {int block_start; int block_length; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,size_t,int,int) ;
 int FUNC_1 (struct rar5*,int) ;
 int FUNC_2 (struct rar5*,int,int) ;

__attribute__((used)) static int FUNC_3(struct rar5* VAR_1, struct filter_info* VAR_2,
  int VAR_3)
{
 const uint32_t VAR_4 = 0x1000000;
 ssize_t VAR_5;

 FUNC_0(VAR_1->cstate.filtered_buf,
     VAR_1->cstate.window_buf, VAR_1->cstate.window_mask,
     VAR_1->cstate.solid_offset + VAR_2->block_start,
     VAR_1->cstate.solid_offset + VAR_2->block_start + VAR_2->block_length);

 for(VAR_5 = 0; VAR_5 < VAR_2->block_length - 4;) {
  uint8_t VAR_6 = VAR_1->cstate.window_buf[
      (VAR_1->cstate.solid_offset + VAR_2->block_start +
      VAR_5++) & VAR_1->cstate.window_mask];





  if(VAR_6 == 0xE8 || (VAR_3 && VAR_6 == 0xE9)) {

   uint32_t VAR_7;
   uint32_t VAR_8 = (VAR_5 + VAR_2->block_start) % VAR_4;

   VAR_7 = FUNC_1(VAR_1,
       (uint32_t)(VAR_1->cstate.solid_offset +
       VAR_2->block_start + VAR_5) & VAR_1->cstate.window_mask);

   if(VAR_7 & 0x80000000) {
    if(((VAR_7 + VAR_8) & 0x80000000) == 0) {
     FUNC_2(VAR_1, (uint32_t)VAR_5,
         VAR_7 + VAR_4);
    }
   } else {
    if((VAR_7 - VAR_4) & 0x80000000) {
     uint32_t VAR_9 = VAR_7 - VAR_8;
     FUNC_2(VAR_1, (uint32_t)VAR_5,
         VAR_9);
    }
   }

   VAR_5 += 4;
  }
 }

 return VAR_0;
}
