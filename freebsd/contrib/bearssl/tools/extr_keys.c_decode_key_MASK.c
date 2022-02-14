
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int xlen; void* x; int curve; } ;
struct TYPE_11__ {int iqlen; void* iq; int dqlen; void* dq; int dplen; void* dp; int qlen; void* q; int plen; void* p; int n_bitlen; } ;
struct TYPE_13__ {TYPE_2__ ec; TYPE_1__ rsa; } ;
struct TYPE_14__ {int key_type; TYPE_3__ key; } ;
typedef TYPE_4__ private_key ;
typedef int br_skey_decoder_context ;
struct TYPE_15__ {int iqlen; int iq; int dqlen; int dq; int dplen; int dp; int qlen; int q; int plen; int p; int n_bitlen; } ;
typedef TYPE_5__ br_rsa_private_key ;
struct TYPE_16__ {int xlen; int x; int curve; } ;
typedef TYPE_6__ br_ec_private_key ;




 TYPE_6__* FUNC_0 (int *) ;
 TYPE_5__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char const*,size_t) ;
 char* FUNC_6 (int,char const**) ;
 int FUNC_7 (int ,char*,...) ;
 int VAR_0 ;
 void* FUNC_8 (int ,int ) ;
 TYPE_4__* FUNC_9 (int) ;

__attribute__((used)) static private_key *
FUNC_10(const unsigned char *VAR_1, size_t VAR_2)
{
 br_skey_decoder_context VAR_3;
 int VAR_4;
 private_key *VAR_5;

 FUNC_2(&VAR_3);
 FUNC_5(&VAR_3, VAR_1, VAR_2);
 VAR_4 = FUNC_4(&VAR_3);
 if (VAR_4 != 0) {
  const char *VAR_6, *VAR_7;

  FUNC_7(VAR_0, "ERROR (decoding): err=%d\n", VAR_4);
  VAR_6 = FUNC_6(VAR_4, &VAR_7);
  if (VAR_6 != ((void*)0)) {
   FUNC_7(VAR_0, "  %s: %s\n", VAR_6, VAR_7);
  } else {
   FUNC_7(VAR_0, "  (unknown)\n");
  }
  return ((void*)0);
 }
 switch (FUNC_3(&VAR_3)) {
  const br_rsa_private_key *VAR_8;
  const br_ec_private_key *VAR_9;

 case 128:
  VAR_8 = FUNC_1(&VAR_3);
  VAR_5 = FUNC_9(sizeof *VAR_5);
  VAR_5->key_type = 128;
  VAR_5->key.rsa.n_bitlen = VAR_8->n_bitlen;
  VAR_5->key.rsa.p = FUNC_8(VAR_8->p, VAR_8->plen);
  VAR_5->key.rsa.plen = VAR_8->plen;
  VAR_5->key.rsa.q = FUNC_8(VAR_8->q, VAR_8->qlen);
  VAR_5->key.rsa.qlen = VAR_8->qlen;
  VAR_5->key.rsa.dp = FUNC_8(VAR_8->dp, VAR_8->dplen);
  VAR_5->key.rsa.dplen = VAR_8->dplen;
  VAR_5->key.rsa.dq = FUNC_8(VAR_8->dq, VAR_8->dqlen);
  VAR_5->key.rsa.dqlen = VAR_8->dqlen;
  VAR_5->key.rsa.iq = FUNC_8(VAR_8->iq, VAR_8->iqlen);
  VAR_5->key.rsa.iqlen = VAR_8->iqlen;
  break;

 case 129:
  VAR_9 = FUNC_0(&VAR_3);
  VAR_5 = FUNC_9(sizeof *VAR_5);
  VAR_5->key_type = 129;
  VAR_5->key.ec.curve = VAR_9->curve;
  VAR_5->key.ec.x = FUNC_8(VAR_9->x, VAR_9->xlen);
  VAR_5->key.ec.xlen = VAR_9->xlen;
  break;

 default:
  FUNC_7(VAR_0, "Unknown key type: %d\n",
   FUNC_3(&VAR_3));
  VAR_5 = ((void*)0);
  break;
 }

 return VAR_5;
}
