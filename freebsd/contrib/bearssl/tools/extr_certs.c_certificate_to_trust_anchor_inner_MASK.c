
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int bvector ;
struct TYPE_24__ {int data; int len; } ;
struct TYPE_19__ {int qlen; void* q; int curve; } ;
struct TYPE_17__ {int elen; void* e; int nlen; void* n; } ;
struct TYPE_20__ {TYPE_3__ ec; TYPE_1__ rsa; } ;
struct TYPE_21__ {int key_type; TYPE_4__ key; } ;
struct TYPE_25__ {TYPE_8__ dn; TYPE_5__ pkey; int flags; } ;
typedef TYPE_9__ br_x509_trust_anchor ;
struct TYPE_22__ {int qlen; int q; int curve; } ;
struct TYPE_18__ {int elen; int e; int nlen; int n; } ;
struct TYPE_23__ {TYPE_6__ ec; TYPE_2__ rsa; } ;
struct TYPE_15__ {int key_type; TYPE_7__ key; } ;
typedef TYPE_10__ br_x509_pkey ;
typedef int br_x509_decoder_context ;
struct TYPE_16__ {int data_len; int data; } ;
typedef TYPE_11__ br_x509_certificate ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_10__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_3 ;
 void* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(br_x509_trust_anchor *VAR_4,
 br_x509_certificate *VAR_5)
{
 br_x509_decoder_context VAR_6;
 bvector VAR_7 = VAR_1;
 br_x509_pkey *VAR_8;

 FUNC_4(&VAR_6, VAR_2, &VAR_7);
 FUNC_7(&VAR_6, VAR_5->data, VAR_5->data_len);
 VAR_8 = FUNC_3(&VAR_6);
 if (VAR_8 == ((void*)0)) {
  FUNC_8(VAR_3, "ERROR: CA decoding failed with error %d\n",
   FUNC_6(&VAR_6));
  FUNC_0(VAR_7);
  return -1;
 }
 VAR_4->dn.data = FUNC_2(VAR_7);
 VAR_4->dn.len = FUNC_1(VAR_7);
 FUNC_0(VAR_7);
 VAR_4->flags = 0;
 if (FUNC_5(&VAR_6)) {
  VAR_4->flags |= VAR_0;
 }
 switch (VAR_8->key_type) {
 case 128:
  VAR_4->pkey.key_type = 128;
  VAR_4->pkey.key.rsa.n = FUNC_9(VAR_8->key.rsa.n, VAR_8->key.rsa.nlen);
  VAR_4->pkey.key.rsa.nlen = VAR_8->key.rsa.nlen;
  VAR_4->pkey.key.rsa.e = FUNC_9(VAR_8->key.rsa.e, VAR_8->key.rsa.elen);
  VAR_4->pkey.key.rsa.elen = VAR_8->key.rsa.elen;
  break;
 case 129:
  VAR_4->pkey.key_type = 129;
  VAR_4->pkey.key.ec.curve = VAR_8->key.ec.curve;
  VAR_4->pkey.key.ec.q = FUNC_9(VAR_8->key.ec.q, VAR_8->key.ec.qlen);
  VAR_4->pkey.key.ec.qlen = VAR_8->key.ec.qlen;
  break;
 default:
  FUNC_8(VAR_3, "ERROR: unsupported public key type in CA\n");
  FUNC_10(VAR_4->dn.data);
  return -1;
 }
 return 0;
}
