
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t qlen; unsigned char const* q; } ;
typedef TYPE_1__ br_ec_public_key ;
struct TYPE_6__ {size_t xlen; unsigned char const* x; int curve; } ;
typedef TYPE_2__ br_ec_private_key ;


 size_t FUNC_0 (unsigned char*,int) ;
 unsigned char* FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (unsigned char*,unsigned char const*,unsigned char const) ;

size_t
FUNC_4(void *VAR_0,
 const br_ec_private_key *VAR_1, const br_ec_public_key *VAR_2,
 int VAR_3)
{
 size_t VAR_4, VAR_5, VAR_6, VAR_7;
 size_t VAR_8, VAR_9;
 const unsigned char *VAR_10;

 if (VAR_3) {
  VAR_10 = FUNC_1(VAR_1->curve);
  if (VAR_10 == ((void*)0)) {
   return 0;
  }
 } else {
  VAR_10 = ((void*)0);
 }
 VAR_4 = 3;
 VAR_5 = 1 + FUNC_2(VAR_1->xlen) + VAR_1->xlen;
 if (VAR_3) {
  VAR_6 = 4 + VAR_10[0];
 } else {
  VAR_6 = 0;
 }
 if (VAR_2 == ((void*)0)) {
  VAR_7 = 0;
  VAR_8 = 0;
 } else {
  VAR_8 = 2 + FUNC_2(VAR_2->qlen) + VAR_2->qlen;
  VAR_7 = 1 + FUNC_2(VAR_8)
   + VAR_8;
 }
 VAR_9 = VAR_4 + VAR_5 + VAR_6 + VAR_7;
 if (VAR_0 == ((void*)0)) {
  return 1 + FUNC_2(VAR_9) + VAR_9;
 } else {
  unsigned char *VAR_11;
  size_t VAR_12;

  VAR_11 = VAR_0;
  *VAR_11 ++ = 0x30;
  VAR_12 = FUNC_0(VAR_11, VAR_9);
  VAR_11 += VAR_12;


  *VAR_11 ++ = 0x02;
  *VAR_11 ++ = 0x01;
  *VAR_11 ++ = 0x01;


  *VAR_11 ++ = 0x04;
  VAR_11 += FUNC_0(VAR_11, VAR_1->xlen);
  FUNC_3(VAR_11, VAR_1->x, VAR_1->xlen);
  VAR_11 += VAR_1->xlen;


  if (VAR_3) {
   *VAR_11 ++ = 0xA0;
   *VAR_11 ++ = VAR_10[0] + 2;
   *VAR_11 ++ = 0x06;
   FUNC_3(VAR_11, VAR_10, VAR_10[0] + 1);
   VAR_11 += VAR_10[0] + 1;
  }


  if (VAR_2 != ((void*)0)) {
   *VAR_11 ++ = 0xA1;
   VAR_11 += FUNC_0(VAR_11, VAR_8);
   *VAR_11 ++ = 0x03;
   VAR_11 += FUNC_0(VAR_11, VAR_2->qlen + 1);
   *VAR_11 ++ = 0x00;
   FUNC_3(VAR_11, VAR_2->q, VAR_2->qlen);

  }

  return 1 + VAR_12 + VAR_9;
 }
}
