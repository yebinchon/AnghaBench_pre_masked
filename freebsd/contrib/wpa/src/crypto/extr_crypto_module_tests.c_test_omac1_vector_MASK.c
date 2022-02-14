
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct omac1_test_vector {int* k; int* msg; int msg_len; int* tag; } ;
typedef int msg ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,int*,int,int*) ;
 scalar_t__ FUNC_1 (int*,int,int const**,size_t*,int*) ;
 scalar_t__ FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(const struct omac1_test_vector *VAR_1,
        unsigned int VAR_2)
{
 u8 VAR_3[] = {
  0x2b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6,
  0xab, 0xf7, 0x15, 0x88, 0x09, 0xcf, 0x4f, 0x3c
 };
 u8 VAR_4[] = { 0x12, 0x34, 0x56 };
 u8 VAR_5[24], VAR_6[24];
 const u8 *VAR_7[3];
 size_t VAR_8[3];

 if (FUNC_0(VAR_1->k, VAR_1->msg, VAR_1->msg_len, VAR_5) ||
     FUNC_2(VAR_5, VAR_1->tag, 16) != 0) {
  FUNC_3(VAR_0, "OMAC1-AES-128 test vector %u failed", VAR_2);
  return 1;
 }

 if (VAR_1->msg_len > 1) {

  VAR_7[0] = VAR_1->msg;
  VAR_8[0] = 1;
  VAR_7[1] = VAR_1->msg + 1;
  VAR_8[1] = VAR_1->msg_len - 1;

  if (FUNC_1(VAR_1->k, 2, VAR_7, VAR_8, VAR_5) ||
      FUNC_2(VAR_5, VAR_1->tag, 16) != 0) {
   FUNC_3(VAR_0,
       "OMAC1-AES-128(vector) test vector %u failed",
       VAR_2);
   return 1;
  }

  VAR_7[0] = VAR_1->msg;
  VAR_8[0] = VAR_1->msg_len - 2;
  VAR_7[1] = VAR_1->msg + VAR_1->msg_len - 2;
  VAR_8[1] = 1;
  VAR_7[2] = VAR_1->msg + VAR_1->msg_len - 1;
  VAR_8[2] = 1;

  if (FUNC_1(VAR_1->k, 3, VAR_7, VAR_8, VAR_5) ||
      FUNC_2(VAR_5, VAR_1->tag, 16) != 0) {
   FUNC_3(VAR_0,
       "OMAC1-AES-128(vector2) test vector %u failed",
       VAR_2);
   return 1;
  }
 }

 VAR_7[0] = &VAR_4[0];
 VAR_8[0] = 1;
 VAR_7[1] = &VAR_4[1];
 VAR_8[1] = 1;
 VAR_7[2] = &VAR_4[2];
 VAR_8[2] = 1;
 if (FUNC_0(VAR_3, VAR_4, sizeof(VAR_4), VAR_5) ||
     FUNC_1(VAR_3, 3, VAR_7, VAR_8, VAR_6) ||
     FUNC_2(VAR_5, VAR_6, 16) != 0) {
  FUNC_3(VAR_0, "OMAC1-AES-128 short test mismatch");
  return 1;
 }

 return 0;
}
