
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glxsb_session {int dummy; } ;
struct cryptop {int crp_flags; int crp_buf; } ;
struct cryptodesc {int crd_flags; int crd_klen; int crd_key; } ;


 int VAR_0 ;
 int FUNC_0 (struct glxsb_session*,struct cryptodesc*,int ,int ) ;
 int FUNC_1 (struct glxsb_session*,int ,int ) ;

int
FUNC_2(struct glxsb_session *VAR_1, struct cryptodesc *VAR_2,
    struct cryptop *VAR_3)
{
 int VAR_4;

 if ((VAR_2->crd_flags & VAR_0) != 0)
  FUNC_1(VAR_1, VAR_2->crd_key, VAR_2->crd_klen);

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3->crp_buf, VAR_3->crp_flags);
 return (VAR_4);
}
