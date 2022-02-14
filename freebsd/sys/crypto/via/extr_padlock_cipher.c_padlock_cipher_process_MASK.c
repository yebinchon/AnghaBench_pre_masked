
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union padlock_cw {int cw_direction; scalar_t__ cw_filler3; scalar_t__ cw_filler2; scalar_t__ cw_filler1; scalar_t__ cw_filler0; } ;
typedef int uint32_t ;
typedef int u_char ;
struct thread {int dummy; } ;
struct padlock_session {int * ses_iv; int ses_fpu_ctx; int * ses_dkey; int * ses_ekey; union padlock_cw ses_cw; } ;
struct cryptop {int crp_buf; int crp_flags; } ;
struct cryptodesc {int crd_flags; int crd_len; scalar_t__ crd_skip; scalar_t__ crd_inject; int crd_iv; int crd_klen; int crd_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_0 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ,scalar_t__,int,int *) ;
 int FUNC_4 (int ,int ,scalar_t__,int,int *) ;
 struct thread* VAR_11 ;
 int FUNC_5 (struct thread*,int ,int) ;
 int FUNC_6 (struct thread*,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *,int,int *,union padlock_cw*,int *) ;
 int * FUNC_9 (struct cryptodesc*,struct cryptop*,int*) ;
 int FUNC_10 (struct padlock_session*,int ,int ) ;

int
FUNC_11(struct padlock_session *VAR_12, struct cryptodesc *VAR_13,
    struct cryptop *VAR_14)
{
 union padlock_cw *VAR_15;
 struct thread *VAR_16;
 u_char *VAR_17, *VAR_18;
 uint32_t *VAR_19;
 int VAR_20;

 VAR_17 = FUNC_9(VAR_13, VAR_14, &VAR_20);
 if (VAR_17 == ((void*)0))
  return (VAR_5);

 VAR_18 = FUNC_0(VAR_17);

 if ((VAR_13->crd_flags & VAR_4) != 0) {
  FUNC_10(VAR_12, VAR_13->crd_key,
      VAR_13->crd_klen);
 }

 VAR_15 = &VAR_12->ses_cw;
 VAR_15->cw_filler0 = 0;
 VAR_15->cw_filler1 = 0;
 VAR_15->cw_filler2 = 0;
 VAR_15->cw_filler3 = 0;
 if ((VAR_13->crd_flags & VAR_1) != 0) {
  VAR_15->cw_direction = VAR_10;
  VAR_19 = VAR_12->ses_ekey;
  if ((VAR_13->crd_flags & VAR_2) != 0)
   FUNC_1(VAR_13->crd_iv, VAR_12->ses_iv, VAR_0);

  if ((VAR_13->crd_flags & VAR_3) == 0) {
   FUNC_3(VAR_14->crp_flags, VAR_14->crp_buf,
       VAR_13->crd_inject, VAR_0, VAR_12->ses_iv);
  }
 } else {
  VAR_15->cw_direction = VAR_9;
  VAR_19 = VAR_12->ses_dkey;
  if ((VAR_13->crd_flags & VAR_2) != 0)
   FUNC_1(VAR_13->crd_iv, VAR_12->ses_iv, VAR_0);
  else {
   FUNC_4(VAR_14->crp_flags, VAR_14->crp_buf,
       VAR_13->crd_inject, VAR_0, VAR_12->ses_iv);
  }
 }

 if (VAR_20) {
  FUNC_4(VAR_14->crp_flags, VAR_14->crp_buf, VAR_13->crd_skip,
      VAR_13->crd_len, VAR_18);
 }

 VAR_16 = VAR_11;
 FUNC_5(VAR_16, VAR_12->ses_fpu_ctx, VAR_7 | VAR_6);
 FUNC_8(VAR_18, VAR_18, VAR_13->crd_len / VAR_0, VAR_19, VAR_15,
     VAR_12->ses_iv);
 FUNC_6(VAR_16, VAR_12->ses_fpu_ctx);

 if (VAR_20) {
  FUNC_3(VAR_14->crp_flags, VAR_14->crp_buf, VAR_13->crd_skip,
      VAR_13->crd_len, VAR_18);
 }


 if ((VAR_13->crd_flags & VAR_1) != 0) {
  FUNC_4(VAR_14->crp_flags, VAR_14->crp_buf,
      VAR_13->crd_skip + VAR_13->crd_len - VAR_0,
      VAR_0, VAR_12->ses_iv);
 }

 if (VAR_20) {
  FUNC_2(VAR_17, VAR_13->crd_len + 16);
  FUNC_7(VAR_17, VAR_8);
 }
 return (0);
}
