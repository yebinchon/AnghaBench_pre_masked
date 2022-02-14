
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {scalar_t__* n; unsigned int nlen; scalar_t__* e; int elen; } ;
typedef TYPE_1__ br_rsa_public_key ;
struct TYPE_6__ {unsigned int n_bitlen; int* p; int plen; int* q; int qlen; int* dp; size_t dplen; int* dq; size_t dqlen; int* iq; size_t iqlen; } ;
typedef TYPE_2__ br_rsa_private_key ;
typedef int br_prng_class ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,size_t,int*) ;
 int FUNC_4 (int*,int*,int*,int ,int*) ;
 int FUNC_5 (int*,int*,int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int*,int) ;
 int FUNC_8 (int*,int*,int ) ;
 int FUNC_9 (int*,int) ;
 int FUNC_10 (int*,int*,int) ;
 scalar_t__ FUNC_11 (int*,int*,int,int*) ;
 int FUNC_12 (int const**,int*,int,int,int*,size_t) ;

uint32_t
FUNC_13(const br_prng_class **VAR_3,
 br_rsa_private_key *VAR_4, void *VAR_5,
 br_rsa_public_key *VAR_6, void *VAR_7,
 unsigned VAR_8, uint32_t VAR_9)
{
 uint32_t VAR_10, VAR_11;
 size_t VAR_12, VAR_13, VAR_14;
 uint16_t *VAR_15, *VAR_16, *VAR_17;
 uint16_t VAR_18[VAR_2];
 uint32_t VAR_19;

 if (VAR_8 < VAR_1 || VAR_8 > VAR_0) {
  return 0;
 }
 if (VAR_9 == 0) {
  VAR_9 = 3;
 } else if (VAR_9 == 1 || (VAR_9 & 1) == 0) {
  return 0;
 }

 VAR_10 = (VAR_8 + 1) >> 1;
 VAR_11 = VAR_8 - VAR_10;
 VAR_4->n_bitlen = VAR_8;
 VAR_4->p = VAR_5;
 VAR_4->plen = (VAR_10 + 7) >> 3;
 VAR_4->q = VAR_4->p + VAR_4->plen;
 VAR_4->qlen = (VAR_11 + 7) >> 3;
 VAR_4->dp = VAR_4->q + VAR_4->qlen;
 VAR_4->dplen = VAR_4->plen;
 VAR_4->dq = VAR_4->dp + VAR_4->dplen;
 VAR_4->dqlen = VAR_4->qlen;
 VAR_4->iq = VAR_4->dq + VAR_4->dqlen;
 VAR_4->iqlen = VAR_4->plen;

 if (VAR_6 != ((void*)0)) {
  VAR_6->n = VAR_7;
  VAR_6->nlen = (VAR_8 + 7) >> 3;
  VAR_6->e = VAR_6->n + VAR_6->nlen;
  VAR_6->elen = 4;
  FUNC_1(VAR_6->e, VAR_9);
  while (*VAR_6->e == 0) {
   VAR_6->e ++;
   VAR_6->elen --;
  }
 }







 VAR_10 += FUNC_0(VAR_10, 17477) >> 18;
 VAR_11 += FUNC_0(VAR_11, 17477) >> 18;
 VAR_12 = (VAR_10 + 15) >> 4;
 VAR_13 = (VAR_11 + 15) >> 4;
 VAR_15 = VAR_18;
 VAR_16 = VAR_15 + 1 + VAR_12;
 VAR_17 = VAR_16 + 1 + VAR_13;
 VAR_14 = ((sizeof VAR_18) / sizeof(uint16_t)) - (2 + VAR_12 + VAR_13);







 for (;;) {
  FUNC_12(VAR_3, VAR_15, VAR_10, VAR_9, VAR_17, VAR_14);
  FUNC_7(VAR_15, 1);
  if (FUNC_11(VAR_17, VAR_15, VAR_9, VAR_17 + 1 + VAR_12)) {
   FUNC_2(VAR_15, VAR_15, 1);
   VAR_15[1] |= 1;
   FUNC_3(VAR_4->p, VAR_4->plen, VAR_15);
   FUNC_3(VAR_4->dp, VAR_4->dplen, VAR_17);
   break;
  }
 }

 for (;;) {
  FUNC_12(VAR_3, VAR_16, VAR_11, VAR_9, VAR_17, VAR_14);
  FUNC_7(VAR_16, 1);
  if (FUNC_11(VAR_17, VAR_16, VAR_9, VAR_17 + 1 + VAR_13)) {
   FUNC_2(VAR_16, VAR_16, 1);
   VAR_16[1] |= 1;
   FUNC_3(VAR_4->q, VAR_4->qlen, VAR_16);
   FUNC_3(VAR_4->dq, VAR_4->dqlen, VAR_17);
   break;
  }
 }
 if (VAR_10 == VAR_11 && FUNC_8(VAR_15, VAR_16, 0) == 1) {
  FUNC_10(VAR_15, VAR_16, (1 + VAR_12) * sizeof *VAR_15);
  FUNC_10(VAR_4->p, VAR_4->q, VAR_4->plen);
  FUNC_10(VAR_4->dp, VAR_4->dq, VAR_4->dplen);
 }
 VAR_16[0] = VAR_15[0];
 if (VAR_12 > VAR_13) {
  VAR_16[VAR_12] = 0;
  VAR_17 ++;
  VAR_14 --;
 }
 FUNC_9(VAR_17, VAR_15[0]);
 VAR_17[1] = 1;
 VAR_19 = FUNC_4(VAR_17, VAR_16, VAR_15, FUNC_6(VAR_15[1]), VAR_17 + 1 + VAR_12);
 FUNC_3(VAR_4->iq, VAR_4->iqlen, VAR_17);




 if (VAR_6 != ((void*)0)) {
  FUNC_9(VAR_17, VAR_15[0]);
  FUNC_5(VAR_17, VAR_15, VAR_16);
  FUNC_3(VAR_6->n, VAR_6->nlen, VAR_17);
 }

 return VAR_19;
}
