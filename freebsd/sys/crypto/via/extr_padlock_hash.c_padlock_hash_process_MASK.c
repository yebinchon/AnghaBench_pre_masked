
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct padlock_session {int ses_fpu_ctx; } ;
struct cryptop {int crp_flags; int crp_buf; } ;
struct cryptodesc {int crd_flags; int crd_klen; int crd_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct thread* VAR_3 ;
 int FUNC_0 (struct thread*,int ,int) ;
 int FUNC_1 (struct thread*,int ) ;
 int FUNC_2 (struct padlock_session*,struct cryptodesc*,int ,int ) ;
 int FUNC_3 (struct padlock_session*,int ,int ) ;

int
FUNC_4(struct padlock_session *VAR_4, struct cryptodesc *VAR_5,
    struct cryptop *VAR_6)
{
 struct thread *VAR_7;
 int VAR_8;

 VAR_7 = VAR_3;
 FUNC_0(VAR_7, VAR_4->ses_fpu_ctx, VAR_2 | VAR_1);
 if ((VAR_5->crd_flags & VAR_0) != 0)
  FUNC_3(VAR_4, VAR_5->crd_key, VAR_5->crd_klen);

 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6->crp_buf, VAR_6->crp_flags);
 FUNC_1(VAR_7, VAR_4->ses_fpu_ctx);
 return (VAR_8);
}
