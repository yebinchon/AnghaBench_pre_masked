
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ndef_record {int payload_length; int const* type; int const* id; int const* payload; int total_length; int id_length; int type_length; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_2, u32 VAR_3,
        struct ndef_record *VAR_4)
{
 const u8 *VAR_5 = VAR_2 + 1;

 if (VAR_3 < 2)
  return -1;
 VAR_4->type_length = *VAR_5++;
 if (VAR_2[0] & VAR_1) {
  if (VAR_3 < 3)
   return -1;
  VAR_4->payload_length = *VAR_5++;
 } else {
  u32 VAR_6;

  if (VAR_3 < 6)
   return -1;
  VAR_6 = FUNC_0(VAR_5);
  if (VAR_6 > VAR_3 - 6 || VAR_6 > 20000)
   return -1;
  VAR_4->payload_length = VAR_6;
  VAR_5 += sizeof(u32);
 }

 if (VAR_2[0] & VAR_0) {
  if ((int) VAR_3 < VAR_5 - VAR_2 + 1)
   return -1;
  VAR_4->id_length = *VAR_5++;
 } else
  VAR_4->id_length = 0;

 VAR_4->type = VAR_4->type_length == 0 ? ((void*)0) : VAR_5;
 VAR_5 += VAR_4->type_length;

 VAR_4->id = VAR_4->id_length == 0 ? ((void*)0) : VAR_5;
 VAR_5 += VAR_4->id_length;

 VAR_4->payload = VAR_4->payload_length == 0 ? ((void*)0) : VAR_5;
 VAR_5 += VAR_4->payload_length;

 VAR_4->total_length = VAR_5 - VAR_2;
 if (VAR_4->total_length > VAR_3 ||
     VAR_4->total_length < VAR_4->payload_length)
  return -1;
 return 0;
}
