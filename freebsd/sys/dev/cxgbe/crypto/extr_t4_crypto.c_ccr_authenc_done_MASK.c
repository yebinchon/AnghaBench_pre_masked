
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cryptop {int crp_buf; int crp_flags; struct cryptodesc* crp_desc; } ;
struct cryptodesc {int crd_flags; int crd_inject; } ;
struct cpl_fw6_pld {int * data; } ;
struct ccr_softc {int dummy; } ;
struct TYPE_2__ {int hash_len; } ;
struct ccr_session {TYPE_1__ hmac; } ;
typedef int c_caddr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct ccr_softc *VAR_2, struct ccr_session *VAR_3,
    struct cryptop *VAR_4, const struct cpl_fw6_pld *VAR_5, int VAR_6)
{
 struct cryptodesc *VAR_7;
 VAR_7 = VAR_4->crp_desc;
 if (VAR_6 == VAR_1 && !FUNC_0(FUNC_1(VAR_5->data[0])) &&
     !(VAR_7->crd_flags & VAR_0)) {
  FUNC_2(VAR_4->crp_flags, VAR_4->crp_buf, VAR_7->crd_inject,
      VAR_3->hmac.hash_len, (c_caddr_t)(VAR_5 + 1));
  VAR_6 = 0;
 }
 return (VAR_6);
}
