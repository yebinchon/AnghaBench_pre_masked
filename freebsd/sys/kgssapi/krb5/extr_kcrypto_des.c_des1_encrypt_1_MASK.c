
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_key_state {struct des1_state* ks_priv; } ;
struct des1_state {int ds_lock; int ds_session; } ;
struct cryptop {int crp_flags; int crp_callback; void* crp_opaque; void* crp_buf; int crp_session; struct cryptodesc* crp_desc; } ;
struct cryptodesc {size_t crd_skip; size_t crd_len; int crd_flags; int crd_alg; int * crd_next; int crd_iv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct cryptop*) ;
 int FUNC_3 (struct cryptop*) ;
 struct cryptop* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (struct cryptop*,int *,int ,char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(const struct krb5_key_state *VAR_7, int VAR_8, void *VAR_9,
    size_t VAR_10, size_t VAR_11, void *VAR_12, int VAR_13)
{
 struct des1_state *VAR_14 = VAR_7->ks_priv;
 struct cryptop *VAR_15;
 struct cryptodesc *VAR_16;
 int VAR_17;

 VAR_15 = FUNC_4(1);
 VAR_16 = VAR_15->crp_desc;

 VAR_16->crd_skip = VAR_10;
 VAR_16->crd_len = VAR_11;
 VAR_16->crd_flags = VAR_0 | VAR_1 | VAR_13;
 if (VAR_12) {
  FUNC_0(VAR_12, VAR_16->crd_iv, 8);
 } else {
  FUNC_1(VAR_16->crd_iv, 8);
 }
 VAR_16->crd_next = ((void*)0);
 VAR_16->crd_alg = VAR_3;

 VAR_15->crp_session = VAR_14->ds_session;
 VAR_15->crp_flags = VAR_8 | VAR_4;
 VAR_15->crp_buf = VAR_9;
 VAR_15->crp_opaque = (void *) VAR_14;
 VAR_15->crp_callback = VAR_6;

 VAR_17 = FUNC_2(VAR_15);

 if ((FUNC_5(VAR_14->ds_session) & VAR_2) == 0) {
  FUNC_7(&VAR_14->ds_lock);
  if (!VAR_17 && !(VAR_15->crp_flags & VAR_5))
   VAR_17 = FUNC_6(VAR_15, &VAR_14->ds_lock, 0, "gssdes", 0);
  FUNC_8(&VAR_14->ds_lock);
 }

 FUNC_3(VAR_15);
}
