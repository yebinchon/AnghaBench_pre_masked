
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
struct rar5 {int dummy; } ;
struct decode_table {int* decode_len; size_t quick_bits; int* quick_len; int* quick_num; size_t* decode_pos; size_t size; int* decode_num; } ;
struct archive_read {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rar5* FUNC_0 (struct archive_read*) ;
 scalar_t__ FUNC_1 (struct rar5*,int const*,int*) ;
 int FUNC_2 (struct rar5*,int) ;

__attribute__((used)) static int FUNC_3(struct archive_read* VAR_2, struct decode_table* VAR_3,
    const uint8_t* VAR_4, uint16_t* VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 uint16_t VAR_9;
 uint32_t VAR_10;
 struct rar5* VAR_11 = FUNC_0(VAR_2);

 if(VAR_1 != FUNC_1(VAR_11, VAR_4, &VAR_9)) {
  return VAR_0;
 }

 VAR_9 &= 0xfffe;

 if(VAR_9 < VAR_3->decode_len[VAR_3->quick_bits]) {
  int VAR_12 = VAR_9 >> (16 - VAR_3->quick_bits);
  FUNC_2(VAR_11, VAR_3->quick_len[VAR_12]);
  *VAR_5 = VAR_3->quick_num[VAR_12];
  return VAR_1;
 }

 VAR_7 = 15;

 for(VAR_6 = VAR_3->quick_bits + 1; VAR_6 < 15; VAR_6++) {
  if(VAR_9 < VAR_3->decode_len[VAR_6]) {
   VAR_7 = VAR_6;
   break;
  }
 }

 FUNC_2(VAR_11, VAR_7);

 VAR_8 = VAR_9 - VAR_3->decode_len[VAR_7 - 1];
 VAR_8 >>= (16 - VAR_7);
 VAR_10 = VAR_3->decode_pos[VAR_7] + VAR_8;

 if(VAR_10 >= VAR_3->size)
  VAR_10 = 0;

 *VAR_5 = VAR_3->decode_num[VAR_10];
 return VAR_1;
}
