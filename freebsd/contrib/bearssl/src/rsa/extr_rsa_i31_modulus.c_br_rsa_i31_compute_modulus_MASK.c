
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {unsigned char* p; size_t plen; unsigned char* q; size_t qlen; int n_bitlen; } ;
typedef TYPE_1__ br_rsa_private_key ;


 int VAR_0 ;
 int FUNC_0 (int*,unsigned char const*,size_t) ;
 int FUNC_1 (void*,size_t,int*) ;
 int FUNC_2 (int*,int*,int*) ;
 int FUNC_3 (int*,int) ;

size_t
FUNC_4(void *VAR_1, const br_rsa_private_key *VAR_2)
{
 uint32_t VAR_3[2 * ((VAR_0 + 30) / 31) + 5];
 uint32_t *VAR_4, *VAR_5, *VAR_6;
 const unsigned char *VAR_7, *VAR_8;
 size_t VAR_9, VAR_10, VAR_11, VAR_12;




 VAR_7 = VAR_2->p;
 VAR_10 = VAR_2->plen;
 while (VAR_10 > 0 && *VAR_7 == 0) {
  VAR_7 ++;
  VAR_10 --;
 }
 VAR_8 = VAR_2->q;
 VAR_11 = VAR_2->qlen;
 while (VAR_11 > 0 && *VAR_8 == 0) {
  VAR_8 ++;
  VAR_11 --;
 }

 VAR_4 = VAR_3;
 VAR_12 = (sizeof VAR_3) / (sizeof VAR_3[0]);




 if ((31 * VAR_12) < (VAR_10 << 3) + 31) {
  return 0;
 }
 FUNC_0(VAR_4, VAR_7, VAR_10);
 VAR_5 = VAR_4;
 VAR_10 = (VAR_5[0] + 63) >> 5;
 VAR_4 += VAR_10;
 VAR_12 -= VAR_10;




 if ((31 * VAR_12) < (VAR_11 << 3) + 31) {
  return 0;
 }
 FUNC_0(VAR_4, VAR_8, VAR_11);
 VAR_6 = VAR_4;
 VAR_11 = (VAR_6[0] + 63) >> 5;
 VAR_4 += VAR_11;
 VAR_12 -= VAR_11;





 if (VAR_12 < (VAR_10 + VAR_11 + 1)) {
  return 0;
 }






 VAR_9 = (VAR_2->n_bitlen + 7) >> 3;
 if (VAR_1 != ((void*)0)) {
  FUNC_3(VAR_4, VAR_5[0]);
  FUNC_2(VAR_4, VAR_5, VAR_6);
  FUNC_1(VAR_1, VAR_9, VAR_4);
 }
 return VAR_9;
}
