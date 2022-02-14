
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int br_ec_public_key ;
struct TYPE_4__ {int curve; } ;
typedef TYPE_1__ br_ec_private_key ;


 size_t FUNC_0 (unsigned char*,size_t) ;
 size_t FUNC_1 (unsigned char*,TYPE_1__ const*,int const*,int ) ;
 unsigned char* FUNC_2 (int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (unsigned char*,unsigned char const*,int) ;

size_t
FUNC_5(void *VAR_0,
 const br_ec_private_key *VAR_1, const br_ec_public_key *VAR_2)
{
 static const unsigned char VAR_3[] = {
  0x06, 0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x02, 0x01
 };

 size_t VAR_4, VAR_5, VAR_6;
 size_t VAR_7, VAR_8;
 const unsigned char *VAR_9;

 VAR_9 = FUNC_2(VAR_1->curve);
 if (VAR_9 == ((void*)0)) {
  return 0;
 }
 VAR_4 = 3;
 VAR_5 = 2 + sizeof VAR_3 + 2 + VAR_9[0];
 VAR_6 = FUNC_1(((void*)0), VAR_1, VAR_2, 0);
 VAR_7 = 1 + FUNC_3(VAR_6)
  + VAR_6;
 VAR_8 = VAR_4 + VAR_5 + VAR_7;

 if (VAR_0 == ((void*)0)) {
  return 1 + FUNC_3(VAR_8) + VAR_8;
 } else {
  unsigned char *VAR_10;
  size_t VAR_11;

  VAR_10 = VAR_0;
  *VAR_10 ++ = 0x30;
  VAR_11 = FUNC_0(VAR_10, VAR_8);
  VAR_10 += VAR_11;


  *VAR_10 ++ = 0x02;
  *VAR_10 ++ = 0x01;
  *VAR_10 ++ = 0x00;


  *VAR_10 ++ = 0x30;
  *VAR_10 ++ = (sizeof VAR_3) + 2 + VAR_9[0];
  FUNC_4(VAR_10, VAR_3, sizeof VAR_3);
  VAR_10 += sizeof VAR_3;
  *VAR_10 ++ = 0x06;
  FUNC_4(VAR_10, VAR_9, 1 + VAR_9[0]);
  VAR_10 += 1 + VAR_9[0];


  *VAR_10 ++ = 0x04;
  VAR_10 += FUNC_0(VAR_10, VAR_6);
  FUNC_1(VAR_10, VAR_1, VAR_2, 0);

  return 1 + VAR_11 + VAR_8;
 }
}
