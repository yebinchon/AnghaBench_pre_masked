
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct xtty {int xt_size; int xt_dev; int xt_flags; int xt_sid; int xt_pgid; int xt_column; int xt_outlow; int xt_outcc; int xt_outsize; int xt_inlow; int xt_inlc; int xt_incc; int xt_insize; } ;
struct tty {scalar_t__ t_dev; int t_flags; TYPE_2__* t_session; TYPE_1__* t_pgrp; int t_column; int t_outlow; int t_outq; int t_inlow; int t_inq; } ;
struct TYPE_4__ {int s_sid; } ;
struct TYPE_3__ {int pg_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct tty*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct tty *VAR_2, struct xtty *VAR_3)
{

 FUNC_1(VAR_2, VAR_0);

 VAR_3->xt_size = sizeof(struct xtty);
 VAR_3->xt_insize = FUNC_4(&VAR_2->t_inq);
 VAR_3->xt_incc = FUNC_2(&VAR_2->t_inq);
 VAR_3->xt_inlc = FUNC_3(&VAR_2->t_inq);
 VAR_3->xt_inlow = VAR_2->t_inlow;
 VAR_3->xt_outsize = FUNC_6(&VAR_2->t_outq);
 VAR_3->xt_outcc = FUNC_5(&VAR_2->t_outq);
 VAR_3->xt_outlow = VAR_2->t_outlow;
 VAR_3->xt_column = VAR_2->t_column;
 VAR_3->xt_pgid = VAR_2->t_pgrp ? VAR_2->t_pgrp->pg_id : 0;
 VAR_3->xt_sid = VAR_2->t_session ? VAR_2->t_session->s_sid : 0;
 VAR_3->xt_flags = VAR_2->t_flags;
 VAR_3->xt_dev = VAR_2->t_dev ? FUNC_0(VAR_2->t_dev) : (uint32_t)VAR_1;
}
