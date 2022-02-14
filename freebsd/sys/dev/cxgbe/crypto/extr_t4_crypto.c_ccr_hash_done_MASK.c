
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cryptop {int crp_buf; int crp_flags; struct cryptodesc* crp_desc; } ;
struct cryptodesc {int crd_inject; } ;
struct cpl_fw6_pld {int dummy; } ;
struct ccr_softc {int dummy; } ;
struct TYPE_2__ {int hash_len; } ;
struct ccr_session {TYPE_1__ hmac; } ;
typedef int c_caddr_t ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct ccr_softc *VAR_0, struct ccr_session *VAR_1, struct cryptop *VAR_2,
    const struct cpl_fw6_pld *VAR_3, int VAR_4)
{
 struct cryptodesc *VAR_5;

 VAR_5 = VAR_2->crp_desc;
 if (VAR_4 == 0) {
  FUNC_0(VAR_2->crp_flags, VAR_2->crp_buf, VAR_5->crd_inject,
      VAR_1->hmac.hash_len, (c_caddr_t)(VAR_3 + 1));
 }

 return (VAR_4);
}
