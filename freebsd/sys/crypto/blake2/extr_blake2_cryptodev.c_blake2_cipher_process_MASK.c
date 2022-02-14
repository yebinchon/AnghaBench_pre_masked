
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpu_kern_ctx {int dummy; } ;
struct cryptop {int crp_buf; int crp_flags; struct cryptodesc* crp_desc; } ;
struct cryptodesc {scalar_t__ crd_flags; int crd_inject; int crd_len; int crd_skip; } ;
struct blake2_session {int algo; size_t mlen; int klen; int key; } ;
typedef int blake2s_state ;
typedef int blake2b_state ;


 int FUNC_0 (int,struct fpu_kern_ctx*) ;
 int VAR_0 ;
 size_t VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,struct fpu_kern_ctx*) ;
 int VAR_5 ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,size_t,int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (int *,char*,size_t) ;
 int FUNC_6 (int *,size_t) ;
 int FUNC_7 (int *,size_t,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int *) ;
 int FUNC_9 (int ,int ,int ,size_t,void*) ;
 int VAR_7 ;
 int FUNC_10 (int ,struct fpu_kern_ctx*,int) ;
 int FUNC_11 (int ,struct fpu_kern_ctx*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static int
FUNC_14(struct blake2_session *VAR_8, struct cryptop *VAR_9)
{
 union {
  blake2b_state sb;
  blake2s_state ss;
 } VAR_10;
 char VAR_11[VAR_0];
 struct fpu_kern_ctx *VAR_12;
 int VAR_13;
 bool VAR_14;
 struct cryptodesc *VAR_15;
 int VAR_16, VAR_17;
 size_t VAR_18;

 VAR_15 = VAR_9->crp_desc;
 VAR_12 = ((void*)0);
 VAR_13 = 0;
 VAR_16 = VAR_2;

 VAR_14 = FUNC_12(0);
 if (!VAR_14) {
  FUNC_0(VAR_13, VAR_12);
  FUNC_10(VAR_7, VAR_12,
      VAR_4 | VAR_3);
 }

 if (VAR_15->crd_flags != 0)
  goto out;

 switch (VAR_8->algo) {
 case 129:
  if (VAR_8->mlen != 0)
   VAR_18 = VAR_8->mlen;
  else
   VAR_18 = VAR_0;
  if (VAR_8->klen > 0)
   VAR_17 = FUNC_4(&VAR_10.sb, VAR_18, VAR_8->key, VAR_8->klen);
  else
   VAR_17 = FUNC_3(&VAR_10.sb, VAR_18);
  if (VAR_17 != 0)
   goto out;
  VAR_16 = FUNC_8(VAR_9->crp_flags, VAR_9->crp_buf, VAR_15->crd_skip,
      VAR_15->crd_len, VAR_5, &VAR_10.sb);
  if (VAR_16 != 0)
   goto out;
  VAR_17 = FUNC_2(&VAR_10.sb, VAR_11, VAR_18);
  if (VAR_17 != 0) {
   VAR_16 = VAR_2;
   goto out;
  }
  break;
 case 128:
  if (VAR_8->mlen != 0)
   VAR_18 = VAR_8->mlen;
  else
   VAR_18 = VAR_1;
  if (VAR_8->klen > 0)
   VAR_17 = FUNC_7(&VAR_10.ss, VAR_18, VAR_8->key, VAR_8->klen);
  else
   VAR_17 = FUNC_6(&VAR_10.ss, VAR_18);
  if (VAR_17 != 0)
   goto out;
  VAR_16 = FUNC_8(VAR_9->crp_flags, VAR_9->crp_buf, VAR_15->crd_skip,
      VAR_15->crd_len, VAR_6, &VAR_10.ss);
  if (VAR_16 != 0)
   goto out;
  VAR_17 = FUNC_5(&VAR_10.ss, VAR_11, VAR_18);
  if (VAR_17 != 0) {
   VAR_16 = VAR_2;
   goto out;
  }
  break;
 default:
  FUNC_13("unreachable");
 }

 FUNC_9(VAR_9->crp_flags, VAR_9->crp_buf, VAR_15->crd_inject, VAR_18,
     (void *)VAR_11);

out:
 if (!VAR_14) {
  FUNC_11(VAR_7, VAR_12);
  FUNC_1(VAR_13, VAR_12);
 }
 return (VAR_16);
}
