
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct cryptop {scalar_t__ crp_etype; int crp_buf; int crp_flags; } ;
struct cryptodesc {int crd_flags; int crd_len; scalar_t__ crd_inject; scalar_t__ crd_skip; int crd_iv; } ;
struct TYPE_2__ {int key_len; int enckey; } ;
struct ccp_session {TYPE_1__ blkcipher; } ;
struct aes_gmac_ctx {int dummy; } ;
typedef int iv ;
typedef int digest2 ;
typedef int digest ;
typedef int block ;


 int VAR_0 ;
 int FUNC_0 (char*,struct aes_gmac_ctx*) ;
 int FUNC_1 (struct aes_gmac_ctx*) ;
 int FUNC_2 (struct aes_gmac_ctx*,char*,int) ;
 int FUNC_3 (struct aes_gmac_ctx*,int ,int ) ;
 int FUNC_4 (struct aes_gmac_ctx*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ,int ,scalar_t__,int,char*) ;
 int FUNC_8 (int ,int ,scalar_t__,int,char*) ;
 int FUNC_9 (struct cryptop*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (char*,int ,int) ;
 scalar_t__ FUNC_13 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_14(struct ccp_session *VAR_7, struct cryptop *VAR_8,
    struct cryptodesc *VAR_9, struct cryptodesc *VAR_10)
{
 struct aes_gmac_ctx VAR_11;
 char VAR_12[VAR_5];
 char VAR_13[VAR_6];
 char VAR_14[VAR_0];
 int VAR_15, VAR_16;





 if (VAR_10->crd_flags & VAR_1) {
  if (VAR_10->crd_flags & VAR_2)
   FUNC_12(VAR_14, VAR_10->crd_iv, 12);
  else
   FUNC_5(VAR_14, 12, 0);
  if ((VAR_10->crd_flags & VAR_3) == 0)
   FUNC_7(VAR_8->crp_flags, VAR_8->crp_buf,
       VAR_10->crd_inject, 12, VAR_14);
 } else {
  if (VAR_10->crd_flags & VAR_2)
   FUNC_12(VAR_14, VAR_10->crd_iv, 12);
  else
   FUNC_8(VAR_8->crp_flags, VAR_8->crp_buf,
       VAR_10->crd_inject, 12, VAR_14);
 }
 *(uint32_t *)&VAR_14[12] = FUNC_10(1);


 FUNC_1(&VAR_11);
 FUNC_3(&VAR_11, VAR_7->blkcipher.enckey, VAR_7->blkcipher.key_len);
 FUNC_2(&VAR_11, VAR_14, sizeof(VAR_14));


 for (VAR_15 = 0; VAR_15 < VAR_9->crd_len; VAR_15 += sizeof(VAR_12)) {
  VAR_16 = FUNC_11(VAR_9->crd_len - VAR_15, sizeof(VAR_12));
  FUNC_8(VAR_8->crp_flags, VAR_8->crp_buf, VAR_9->crd_skip +
      VAR_15, VAR_16, VAR_12);
  FUNC_6(VAR_12 + VAR_16, sizeof(VAR_12) - VAR_16);
  FUNC_4(&VAR_11, VAR_12, sizeof(VAR_12));
 }


 FUNC_6(VAR_12, sizeof(VAR_12));
 ((uint32_t *)VAR_12)[1] = FUNC_10(VAR_9->crd_len * 8);
 FUNC_4(&VAR_11, VAR_12, sizeof(VAR_12));
 FUNC_0(VAR_13, &VAR_11);

 if (VAR_10->crd_flags & VAR_1) {
  FUNC_7(VAR_8->crp_flags, VAR_8->crp_buf, VAR_9->crd_inject,
      sizeof(VAR_13), VAR_13);
  VAR_8->crp_etype = 0;
 } else {
  char VAR_17[VAR_6];

  FUNC_8(VAR_8->crp_flags, VAR_8->crp_buf, VAR_9->crd_inject,
      sizeof(VAR_17), VAR_17);
  if (FUNC_13(VAR_13, VAR_17, sizeof(VAR_13)) == 0)
   VAR_8->crp_etype = 0;
  else
   VAR_8->crp_etype = VAR_4;
 }
 FUNC_9(VAR_8);
}
