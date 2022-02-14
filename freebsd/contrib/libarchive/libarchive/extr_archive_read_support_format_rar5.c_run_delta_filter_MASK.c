
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {size_t solid_offset; size_t window_mask; scalar_t__* filtered_buf; scalar_t__* window_buf; } ;
struct rar5 {TYPE_1__ cstate; } ;
struct filter_info {int channels; size_t block_length; size_t block_start; } ;
typedef size_t ssize_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct rar5* VAR_1, struct filter_info* VAR_2) {
 int VAR_3;
 ssize_t VAR_4, VAR_5 = 0;

 for(VAR_3 = 0; VAR_3 < VAR_2->channels; VAR_3++) {
  uint8_t VAR_6 = 0;
  for(VAR_4 = VAR_3;
    VAR_4 < VAR_2->block_length;
    VAR_4 += VAR_2->channels)
  {
   uint8_t VAR_7;

   VAR_7 = VAR_1->cstate.window_buf[
       (VAR_1->cstate.solid_offset + VAR_2->block_start +
       VAR_5) & VAR_1->cstate.window_mask];

   VAR_6 -= VAR_7;
   VAR_1->cstate.filtered_buf[VAR_4] = VAR_6;
   VAR_5++;
  }
 }

 return VAR_0;
}
