
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_8__ {void const* n; size_t nlen; void const* e; size_t elen; } ;
typedef TYPE_1__ br_rsa_public_key ;
struct TYPE_9__ {void const* p; size_t plen; void const* q; size_t qlen; void const* dp; size_t dplen; void const* dq; size_t dqlen; void const* iq; size_t iqlen; } ;
typedef TYPE_2__ br_rsa_private_key ;
struct TYPE_10__ {size_t asn1len; } ;
typedef TYPE_3__ br_asn1_uint ;


 size_t FUNC_0 (unsigned char*,size_t) ;
 int FUNC_1 (unsigned char*,TYPE_3__) ;
 TYPE_3__ FUNC_2 (void const*,size_t) ;
 size_t FUNC_3 (size_t) ;

size_t
FUNC_4(void *VAR_0, const br_rsa_private_key *VAR_1,
 const br_rsa_public_key *VAR_2, const void *VAR_3, size_t VAR_4)
{
 br_asn1_uint VAR_5[9];
 size_t VAR_6, VAR_7;





 VAR_5[0] = FUNC_2(((void*)0), 0);
 VAR_5[1] = FUNC_2(VAR_2->n, VAR_2->nlen);
 VAR_5[2] = FUNC_2(VAR_2->e, VAR_2->elen);
 VAR_5[3] = FUNC_2(VAR_3, VAR_4);
 VAR_5[4] = FUNC_2(VAR_1->p, VAR_1->plen);
 VAR_5[5] = FUNC_2(VAR_1->q, VAR_1->qlen);
 VAR_5[6] = FUNC_2(VAR_1->dp, VAR_1->dplen);
 VAR_5[7] = FUNC_2(VAR_1->dq, VAR_1->dqlen);
 VAR_5[8] = FUNC_2(VAR_1->iq, VAR_1->iqlen);




 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < 9; VAR_6 ++) {
  uint32_t VAR_8;

  VAR_8 = VAR_5[VAR_6].asn1len;
  VAR_7 += 1 + FUNC_3(VAR_8) + VAR_8;
 }

 if (VAR_0 == ((void*)0)) {
  return 1 + FUNC_3(VAR_7) + VAR_7;
 } else {
  unsigned char *VAR_9;
  size_t VAR_10;

  VAR_9 = VAR_0;
  *VAR_9 ++ = 0x30;
  VAR_10 = FUNC_0(VAR_9, VAR_7);
  VAR_9 += VAR_10;
  for (VAR_6 = 0; VAR_6 < 9; VAR_6 ++) {
   VAR_9 += FUNC_1(VAR_9, VAR_5[VAR_6]);
  }
  return 1 + VAR_10 + VAR_7;
 }
}
