
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct krb5_key_state {struct des3_state* ks_priv; } ;
struct des3_state {int ds_lock; int ds_session; } ;
struct cryptop {size_t crp_ilen; int crp_olen; int crp_flags; int crp_callback; void* crp_opaque; void* crp_buf; scalar_t__ crp_etype; int crp_session; struct cryptodesc* crp_desc; } ;
struct cryptodesc {size_t crd_skip; size_t crd_len; size_t crd_inject; int crd_alg; int * crd_next; scalar_t__ crd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cryptop*) ;
 int FUNC_1 (struct cryptop*) ;
 struct cryptop* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (struct cryptop*,int *,int ,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(const struct krb5_key_state *VAR_6, int VAR_7,
    struct mbuf *VAR_8, size_t VAR_9, size_t VAR_10, size_t VAR_11)
{
 struct des3_state *VAR_12 = VAR_6->ks_priv;
 struct cryptop *VAR_13;
 struct cryptodesc *VAR_14;
 int VAR_15;

 VAR_13 = FUNC_2(1);
 VAR_14 = VAR_13->crp_desc;

 VAR_14->crd_skip = VAR_9;
 VAR_14->crd_len = VAR_10;
 VAR_14->crd_inject = VAR_9 + VAR_10;
 VAR_14->crd_flags = 0;
 VAR_14->crd_next = ((void*)0);
 VAR_14->crd_alg = VAR_4;

 VAR_13->crp_session = VAR_12->ds_session;
 VAR_13->crp_ilen = VAR_10;
 VAR_13->crp_olen = 20;
 VAR_13->crp_etype = 0;
 VAR_13->crp_flags = VAR_3 | VAR_1;
 VAR_13->crp_buf = (void *) VAR_8;
 VAR_13->crp_opaque = (void *) VAR_12;
 VAR_13->crp_callback = VAR_5;

 VAR_15 = FUNC_0(VAR_13);

 if ((FUNC_3(VAR_12->ds_session) & VAR_0) == 0) {
  FUNC_5(&VAR_12->ds_lock);
  if (!VAR_15 && !(VAR_13->crp_flags & VAR_2))
   VAR_15 = FUNC_4(VAR_13, &VAR_12->ds_lock, 0, "gssdes3", 0);
  FUNC_6(&VAR_12->ds_lock);
 }

 FUNC_1(VAR_13);
}
