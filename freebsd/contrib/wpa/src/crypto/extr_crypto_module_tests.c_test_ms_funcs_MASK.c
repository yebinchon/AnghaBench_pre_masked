
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int send_start_key ;
typedef int password_hash_hash ;
typedef int password_hash ;
typedef int nt_response ;
typedef int master_key ;
typedef int authenticator_response ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*,int ,int*,int*,int*,int ,int*,int*) ;
 scalar_t__ FUNC_1 (int*,int*,int*,int ,int*,int ,int*) ;
 scalar_t__ FUNC_2 (int*,int*,int,int,int) ;
 scalar_t__ FUNC_3 (int*,int*,int*) ;
 scalar_t__ FUNC_4 (int*,int*) ;
 scalar_t__ FUNC_5 (int*,int ,int*) ;
 scalar_t__ FUNC_6 (int*,int*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static int FUNC_9(void)
{


 char *VAR_2 = "User";
 char *VAR_3 = "clientPass";
 u8 VAR_4[] = {
  0x5B, 0x5D, 0x7C, 0x7D, 0x7B, 0x3F, 0x2F, 0x3E,
  0x3C, 0x2C, 0x60, 0x21, 0x32, 0x26, 0x26, 0x28
 };
 u8 VAR_5[] = {
  0x21, 0x40, 0x23, 0x24, 0x25, 0x5E, 0x26, 0x2A,
  0x28, 0x29, 0x5F, 0x2B, 0x3A, 0x33, 0x7C, 0x7E
 };
 u8 VAR_6[] = {
  0x44, 0xEB, 0xBA, 0x8D, 0x53, 0x12, 0xB8, 0xD6,
  0x11, 0x47, 0x44, 0x11, 0xF5, 0x69, 0x89, 0xAE
 };
 u8 VAR_7[] = {
  0x82, 0x30, 0x9E, 0xCD, 0x8D, 0x70, 0x8B, 0x5E,
  0xA0, 0x8F, 0xAA, 0x39, 0x81, 0xCD, 0x83, 0x54,
  0x42, 0x33, 0x11, 0x4A, 0x3D, 0x85, 0xD6, 0xDF
 };
 u8 VAR_8[] = {
  0x41, 0xC0, 0x0C, 0x58, 0x4B, 0xD2, 0xD9, 0x1C,
  0x40, 0x17, 0xA2, 0xA1, 0x2F, 0xA5, 0x9F, 0x3F
 };
 u8 VAR_9[] = {
  0x40, 0x7A, 0x55, 0x89, 0x11, 0x5F, 0xD0, 0xD6,
  0x20, 0x9F, 0x51, 0x0F, 0xE9, 0xC0, 0x45, 0x66,
  0x93, 0x2C, 0xDA, 0x56
 };
 u8 VAR_10[] = {
  0xFD, 0xEC, 0xE3, 0x71, 0x7A, 0x8C, 0x83, 0x8C,
  0xB3, 0x88, 0xE5, 0x27, 0xAE, 0x3C, 0xDD, 0x31
 };
 u8 VAR_11[] = {
  0x8B, 0x7C, 0xDC, 0x14, 0x9B, 0x99, 0x3A, 0x1B,
  0xA1, 0x18, 0xCB, 0x15, 0x3F, 0x56, 0xDC, 0xCB
 };
 u8 VAR_12[32];
 int VAR_13 = 0;

 if (FUNC_5((u8 *) VAR_3, FUNC_7(VAR_3), VAR_12) ||
     FUNC_6(VAR_6, VAR_12, sizeof(VAR_6)) != 0) {
  FUNC_8(VAR_0, "nt_password_hash failed");
  VAR_13++;
 }

 if (FUNC_1(VAR_4, VAR_5,
     (u8 *) VAR_2, FUNC_7(VAR_2),
     (u8 *) VAR_3, FUNC_7(VAR_3), VAR_12) ||
     FUNC_6(VAR_7, VAR_12, sizeof(VAR_7)) != 0) {
  FUNC_8(VAR_0, "generate_nt_response failed");
  VAR_13++;
 }

 if (FUNC_4(VAR_6, VAR_12) ||
     FUNC_6(VAR_8, VAR_12,
        sizeof(VAR_8)) != 0) {
  FUNC_8(VAR_0, "hash_nt_password_hash failed");
  VAR_13++;
 }

 if (FUNC_0((u8 *) VAR_3,
         FUNC_7(VAR_3),
         VAR_5, VAR_4,
         (u8 *) VAR_2,
         FUNC_7(VAR_2),
         VAR_7, VAR_12) ||
     FUNC_6(VAR_9, VAR_12,
        sizeof(VAR_9)) != 0) {
  FUNC_8(VAR_0, "generate_authenticator_response failed");
  VAR_13++;
 }

 if (FUNC_3(VAR_8, VAR_7, VAR_12) ||
     FUNC_6(VAR_10, VAR_12, sizeof(VAR_10)) != 0) {
  FUNC_8(VAR_0, "get_master_key failed");
  VAR_13++;
 }

 if (FUNC_2(VAR_10, VAR_12, sizeof(VAR_11),
        1, 1) ||
     FUNC_6(VAR_11, VAR_12, sizeof(VAR_11)) != 0) {
  FUNC_8(VAR_0, "get_asymetric_start_key failed");
  VAR_13++;
 }

 if (VAR_13)
  FUNC_8(VAR_0, "ms_funcs: %d errors", VAR_13);
 else
  FUNC_8(VAR_1, "ms_funcs test cases passed");

 return VAR_13;




}
