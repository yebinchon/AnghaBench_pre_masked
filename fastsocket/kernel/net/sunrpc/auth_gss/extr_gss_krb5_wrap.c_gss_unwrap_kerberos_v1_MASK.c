
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char u8 ;
typedef int u32 ;
struct xdr_netobj {int len; char* data; } ;
struct xdr_buf {scalar_t__ len; TYPE_2__* head; } ;
struct krb5_ctx {scalar_t__ enctype; unsigned char* cksum; scalar_t__ endtime; TYPE_1__* gk5e; struct crypto_blkcipher* enc; scalar_t__ initiate; int mech_used; } ;
struct crypto_blkcipher {int dummy; } ;
typedef scalar_t__ s32 ;
typedef int cksumdata ;
struct TYPE_4__ {void* iov_base; int iov_len; } ;
struct TYPE_3__ {int conflen; int signalg; int sealalg; int cksumlength; scalar_t__ keyed_cksum; int encrypt_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct crypto_blkcipher*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct crypto_blkcipher* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct crypto_blkcipher*) ;
 int FUNC_3 (struct crypto_blkcipher*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *,int*,unsigned char**,scalar_t__) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct crypto_blkcipher*,struct xdr_buf*,int) ;
 scalar_t__ FUNC_8 (struct xdr_buf*,int) ;
 scalar_t__ FUNC_9 (struct krb5_ctx*,unsigned char*,unsigned char*,int*,scalar_t__*) ;
 int FUNC_10 (struct krb5_ctx*,struct crypto_blkcipher*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct krb5_ctx*,unsigned char*,int,struct xdr_buf*,int,unsigned char*,int ,struct xdr_netobj*) ;
 scalar_t__ FUNC_12 (char*,unsigned char*,int) ;
 int FUNC_13 (void*,void*,int) ;

__attribute__((used)) static u32
FUNC_14(struct krb5_ctx *VAR_11, int VAR_12, struct xdr_buf *VAR_13)
{
 int VAR_14;
 int VAR_15;
 char VAR_16[VAR_2];
 struct xdr_netobj VAR_17 = {.len = sizeof(VAR_16),
         .data = VAR_16};
 s32 VAR_18;
 int VAR_19;
 s32 VAR_20;
 unsigned char *VAR_21;
 int VAR_22;
 void *VAR_23, *VAR_24;
 int VAR_25;
 int VAR_26;
 u32 VAR_27 = VAR_11->gk5e->conflen;
 int VAR_28;
 u8 *VAR_29;

 FUNC_4("RPC:       gss_unwrap_kerberos\n");

 VAR_21 = (u8 *)VAR_13->head[0].iov_base + VAR_12;
 if (FUNC_5(&VAR_11->mech_used, &VAR_22, &VAR_21,
     VAR_13->len - VAR_12))
  return VAR_7;

 if ((VAR_21[0] != ((VAR_9 >> 8) & 0xff)) ||
     (VAR_21[1] != (VAR_9 & 0xff)))
  return VAR_7;





 VAR_14 = VAR_21[2] + (VAR_21[3] << 8);
 if (VAR_14 != VAR_11->gk5e->signalg)
  return VAR_7;

 VAR_15 = VAR_21[4] + (VAR_21[5] << 8);
 if (VAR_15 != VAR_11->gk5e->sealalg)
  return VAR_7;

 if ((VAR_21[6] != 0xff) || (VAR_21[7] != 0xff))
  return VAR_7;





 VAR_28 = VAR_21 + (VAR_3 + VAR_11->gk5e->cksumlength) -
     (unsigned char *)VAR_13->head[0].iov_base;




 if (FUNC_9(VAR_11, VAR_21 + VAR_3,
        VAR_21 + 8, &VAR_19, &VAR_20))
  return VAR_4;

 if ((VAR_11->initiate && VAR_19 != 0xff) ||
     (!VAR_11->initiate && VAR_19 != 0))
  return VAR_4;

 if (VAR_11->enctype == VAR_1) {
  struct crypto_blkcipher *VAR_30;
  int VAR_31;

  VAR_30 = FUNC_1(VAR_11->gk5e->encrypt_name, 0,
      VAR_0);
  if (FUNC_0(VAR_30))
   return VAR_8;

  FUNC_10(VAR_11, VAR_30, VAR_20);

  VAR_31 = FUNC_7(VAR_30, VAR_13, VAR_28);
  FUNC_3(VAR_30);
  if (VAR_31)
   return VAR_7;
 } else {
  if (FUNC_7(VAR_11->enc, VAR_13, VAR_28))
   return VAR_7;
 }

 if (VAR_11->gk5e->keyed_cksum)
  VAR_29 = VAR_11->cksum;
 else
  VAR_29 = ((void*)0);

 if (FUNC_11(VAR_11, VAR_21, 8, VAR_13, VAR_28,
     VAR_29, VAR_10, &VAR_17))
  return VAR_8;

 if (FUNC_12(VAR_17.data, VAR_21 + VAR_3,
      VAR_11->gk5e->cksumlength))
  return VAR_4;



 VAR_18 = FUNC_6();

 if (VAR_18 > VAR_11->endtime)
  return VAR_6;






 VAR_26 = FUNC_2(VAR_11->enc);
 VAR_23 = VAR_21 + (VAR_3 + VAR_11->gk5e->cksumlength) +
     VAR_27;
 VAR_24 = VAR_13->head[0].iov_base + VAR_12;
 VAR_25 = (VAR_13->head[0].iov_base + VAR_13->head[0].iov_len) - VAR_23;
 FUNC_13(VAR_24, VAR_23, VAR_25);
 VAR_13->head[0].iov_len -= (VAR_23 - VAR_24);
 VAR_13->len -= (VAR_23 - VAR_24);

 if (FUNC_8(VAR_13, VAR_26))
  return VAR_7;

 return VAR_5;
}
