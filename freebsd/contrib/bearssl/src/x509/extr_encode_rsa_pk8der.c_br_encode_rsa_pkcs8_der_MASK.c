
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_rsa_public_key ;
typedef int br_rsa_private_key ;


 size_t FUNC_0 (unsigned char*,size_t) ;
 size_t FUNC_1 (unsigned char*,int const*,int const*,void const*,size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (unsigned char*,unsigned char const*,int) ;

size_t
FUNC_4(void *VAR_0, const br_rsa_private_key *VAR_1,
 const br_rsa_public_key *VAR_2, const void *VAR_3, size_t VAR_4)
{
 static const unsigned char VAR_5[] = {
  0x02, 0x01, 0x00,
  0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86,
  0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00,
  0x04
 };

 size_t VAR_6, VAR_7;

 VAR_6 = FUNC_1(((void*)0), VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_7 = (sizeof VAR_5) + FUNC_2(VAR_6) + VAR_6;
 if (VAR_0 == ((void*)0)) {
  return 1 + FUNC_2(VAR_7) + VAR_7;
 } else {
  unsigned char *VAR_8;
  size_t VAR_9;

  VAR_8 = VAR_0;
  *VAR_8 ++ = 0x30;
  VAR_9 = FUNC_0(VAR_8, VAR_7);
  VAR_8 += VAR_9;


  FUNC_3(VAR_8, VAR_5, sizeof VAR_5);
  VAR_8 += sizeof VAR_5;


  VAR_8 += FUNC_0(VAR_8, VAR_6);
  FUNC_1(VAR_8, VAR_1, VAR_2, VAR_3, VAR_4);

  return 1 + VAR_9 + VAR_7;
 }
}
