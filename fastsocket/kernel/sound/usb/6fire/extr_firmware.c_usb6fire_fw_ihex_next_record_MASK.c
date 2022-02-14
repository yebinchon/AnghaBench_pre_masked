
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ihex_record {int error; int txt_offset; int txt_length; char* txt_data; int len; int address; int* data; } ;


 int FUNC_0 (char*,int*) ;

__attribute__((used)) static bool FUNC_1(struct ihex_record *VAR_0)
{
 u8 VAR_1 = 0;
 u8 VAR_2;
 int VAR_3;

 VAR_0->error = 0;


 while (VAR_0->txt_offset < VAR_0->txt_length
   && VAR_0->txt_data[VAR_0->txt_offset] != ':')
  VAR_0->txt_offset++;
 if (VAR_0->txt_offset == VAR_0->txt_length)
  return 0;


 VAR_0->txt_offset++;
 if (VAR_0->txt_offset + 8 > VAR_0->txt_length) {
  VAR_0->error = 1;
  return 0;
 }

 VAR_0->len = FUNC_0(VAR_0->txt_data +
   VAR_0->txt_offset, &VAR_1);
 VAR_0->txt_offset += 2;
 VAR_0->address = FUNC_0(VAR_0->txt_data +
   VAR_0->txt_offset, &VAR_1) << 8;
 VAR_0->txt_offset += 2;
 VAR_0->address |= FUNC_0(VAR_0->txt_data +
   VAR_0->txt_offset, &VAR_1);
 VAR_0->txt_offset += 2;
 VAR_2 = FUNC_0(VAR_0->txt_data +
   VAR_0->txt_offset, &VAR_1);
 VAR_0->txt_offset += 2;


 if (VAR_0->txt_offset + 2 * (VAR_0->len + 1) > VAR_0->txt_length) {
  VAR_0->error = 1;
  return 0;
 }
 for (VAR_3 = 0; VAR_3 < VAR_0->len; VAR_3++) {
  VAR_0->data[VAR_3] = FUNC_0(VAR_0->txt_data
    + VAR_0->txt_offset, &VAR_1);
  VAR_0->txt_offset += 2;
 }
 FUNC_0(VAR_0->txt_data + VAR_0->txt_offset, &VAR_1);
 if (VAR_1) {
  VAR_0->error = 1;
  return 0;
 }

 if (VAR_2 == 1 || !VAR_0->len)
  return 0;
 else if (VAR_2 == 0)
  return 1;
 else {
  VAR_0->error = 1;
  return 0;
 }
}
