
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int write_ptr; int last_block_start; int last_block_length; } ;
struct rar5 {TYPE_1__ cstate; } ;
struct filter_info {int type; int block_start; int block_length; int channels; } ;
struct archive_read {int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct filter_info* FUNC_0 (struct rar5*) ;
 int FUNC_1 (int *,int ,char*) ;
 struct rar5* FUNC_2 (struct archive_read*) ;
 int FUNC_3 (struct rar5*,int) ;
 scalar_t__ FUNC_4 (struct rar5*,int const*,int*) ;
 scalar_t__ FUNC_5 (struct rar5*,int const*,int*) ;
 scalar_t__ FUNC_6 (struct rar5*,int const*,int,int*) ;
 int FUNC_7 (struct rar5*,int) ;

__attribute__((used)) static int FUNC_8(struct archive_read* VAR_7, const uint8_t* VAR_8) {
 uint32_t VAR_9, VAR_10;
 uint16_t VAR_11;
 struct rar5* VAR_12 = FUNC_2(VAR_7);


 if(VAR_3 != FUNC_4(VAR_12, VAR_8, &VAR_9))
  return VAR_0;

 if(VAR_3 != FUNC_4(VAR_12, VAR_8, &VAR_10))
  return VAR_0;

 if(VAR_3 != FUNC_5(VAR_12, VAR_8, &VAR_11))
  return VAR_0;

 VAR_11 >>= 13;
 FUNC_7(VAR_12, 3);





 if(VAR_10 < 4 ||
     VAR_10 > 0x400000 ||
     VAR_11 > VAR_5 ||
     !FUNC_3(VAR_12, VAR_9))
 {
  FUNC_1(&VAR_7->archive, VAR_1,
      "Invalid filter encountered");
  return VAR_2;
 }


 struct filter_info* VAR_13 = FUNC_0(VAR_12);
 if(VAR_13 == ((void*)0)) {
  FUNC_1(&VAR_7->archive, VAR_4,
      "Can't allocate memory for a filter descriptor.");
  return VAR_2;
 }

 VAR_13->type = VAR_11;
 VAR_13->block_start = VAR_12->cstate.write_ptr + VAR_9;
 VAR_13->block_length = VAR_10;

 VAR_12->cstate.last_block_start = VAR_13->block_start;
 VAR_12->cstate.last_block_length = VAR_13->block_length;




 if(VAR_11 == VAR_6) {
  int VAR_14;

  if(VAR_3 != FUNC_6(VAR_12, VAR_8, 5, &VAR_14))
   return VAR_0;

  VAR_13->channels = VAR_14 + 1;
 }

 return VAR_3;
}
