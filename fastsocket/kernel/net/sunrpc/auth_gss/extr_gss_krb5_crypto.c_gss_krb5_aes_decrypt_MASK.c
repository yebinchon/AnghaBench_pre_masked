
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct xdr_netobj {int len; int * data; } ;
struct xdr_buf {scalar_t__ len; } ;
struct krb5_ctx {TYPE_2__* gk5e; int * initiator_integ; struct crypto_blkcipher* initiator_enc_aux; struct crypto_blkcipher* initiator_enc; int * acceptor_integ; struct crypto_blkcipher* acceptor_enc_aux; struct crypto_blkcipher* acceptor_enc; scalar_t__ initiate; } ;
struct TYPE_3__ {struct crypto_blkcipher* tfm; scalar_t__ flags; int info; } ;
struct decryptor_desc {int iv; int frags; TYPE_1__ desc; scalar_t__ fraglen; scalar_t__ fragno; } ;
struct crypto_blkcipher {int dummy; } ;
typedef int our_hmac ;
struct TYPE_4__ {scalar_t__ cksumlength; scalar_t__ conflen; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct crypto_blkcipher*) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct crypto_blkcipher*,struct xdr_buf*,int,int ,int *,int ) ;
 scalar_t__ FUNC_2 (struct krb5_ctx*,int *,int ,struct xdr_buf*,int ,int *,unsigned int,struct xdr_netobj*) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (struct xdr_buf*,int,int *,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct xdr_buf*,struct xdr_buf*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (struct xdr_buf*,int ,int,int ,struct decryptor_desc*) ;

u32
FUNC_9(struct krb5_ctx *VAR_7, u32 VAR_8, struct xdr_buf *VAR_9,
       u32 *VAR_10, u32 *VAR_11)
{
 struct xdr_buf VAR_12;
 u32 VAR_13 = 0;
 u8 *VAR_14;
 struct crypto_blkcipher *VAR_15, *VAR_16;
 struct xdr_netobj VAR_17;
 u8 VAR_18[VAR_0];
 u8 VAR_19[VAR_0];
 int VAR_20, VAR_21, VAR_22;
 struct decryptor_desc VAR_23;
 unsigned int VAR_24;

 if (VAR_7->initiate) {
  VAR_15 = VAR_7->acceptor_enc;
  VAR_16 = VAR_7->acceptor_enc_aux;
  VAR_14 = VAR_7->acceptor_integ;
  VAR_24 = VAR_4;
 } else {
  VAR_15 = VAR_7->initiator_enc;
  VAR_16 = VAR_7->initiator_enc_aux;
  VAR_14 = VAR_7->initiator_integ;
  VAR_24 = VAR_5;
 }
 VAR_21 = FUNC_0(VAR_15);



 FUNC_7(VAR_9, &VAR_12, VAR_8 + VAR_1,
        (VAR_9->len - VAR_8 - VAR_1 -
         VAR_7->gk5e->cksumlength));

 VAR_20 = (VAR_12.len + VAR_21 - 1) / VAR_21;

 VAR_22 = 0;
 if (VAR_20 > 2)
  VAR_22 = (VAR_20 - 2) * VAR_21;

 FUNC_4(VAR_23.iv, 0, sizeof(VAR_23.iv));

 if (VAR_22) {
  VAR_23.fragno = 0;
  VAR_23.fraglen = 0;
  VAR_23.desc.info = VAR_23.iv;
  VAR_23.desc.flags = 0;
  VAR_23.desc.tfm = VAR_16;

  FUNC_6(VAR_23.frags, 4);

  VAR_13 = FUNC_8(&VAR_12, 0, VAR_22, VAR_6, &VAR_23);
  if (VAR_13)
   goto out_err;
 }


 VAR_13 = FUNC_1(VAR_15, &VAR_12, VAR_22, VAR_23.iv, ((void*)0), 0);
 if (VAR_13)
  goto out_err;



 VAR_17.len = sizeof(VAR_18);
 VAR_17.data = VAR_18;

 VAR_13 = FUNC_2(VAR_7, ((void*)0), 0, &VAR_12, 0,
          VAR_14, VAR_24, &VAR_17);
 if (VAR_13)
  goto out_err;


 VAR_13 = FUNC_5(VAR_9, VAR_9->len - VAR_7->gk5e->cksumlength,
          VAR_19, VAR_7->gk5e->cksumlength);
 if (VAR_13)
  goto out_err;

 if (FUNC_3(VAR_19, VAR_18, VAR_7->gk5e->cksumlength) != 0) {
  VAR_13 = VAR_2;
  goto out_err;
 }
 *VAR_10 = VAR_7->gk5e->conflen;
 *VAR_11 = VAR_7->gk5e->cksumlength;
out_err:
 if (VAR_13 && VAR_13 != VAR_2)
  VAR_13 = VAR_3;
 return VAR_13;
}
