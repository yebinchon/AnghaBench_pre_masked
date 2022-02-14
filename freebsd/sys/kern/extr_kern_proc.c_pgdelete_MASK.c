
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct session {struct tty* s_ttyp; } ;
struct pgrp {int pg_mtx; int pg_id; struct session* pg_session; int pg_sigiolst; } ;


 int FUNC_0 (struct pgrp*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pgrp*) ;
 int FUNC_2 (struct pgrp*,int ) ;
 int FUNC_3 (struct pgrp*) ;
 int VAR_2 ;
 int FUNC_4 (struct session*,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct pgrp*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 int FUNC_8 (int ,int ) ;
 int VAR_5 ;
 int FUNC_9 (struct session*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (struct tty*) ;
 int FUNC_12 (struct tty*,struct pgrp*) ;

__attribute__((used)) static void
FUNC_13(struct pgrp *VAR_6)
{
 struct session *VAR_7;
 struct tty *VAR_8;

 FUNC_10(&VAR_5, VAR_3);
 FUNC_2(VAR_6, VAR_0);
 FUNC_4(VAR_6->pg_session, VAR_0);





 FUNC_6(&VAR_6->pg_sigiolst);

 FUNC_1(VAR_6);
 VAR_8 = VAR_6->pg_session->s_ttyp;
 FUNC_0(VAR_6, VAR_4);
 VAR_7 = VAR_6->pg_session;
 FUNC_3(VAR_6);


 if (VAR_8 != ((void*)0)) {
  FUNC_11(VAR_8);
  FUNC_12(VAR_8, VAR_6);
 }

 FUNC_8(VAR_2, VAR_6->pg_id);
 FUNC_7(&VAR_6->pg_mtx);
 FUNC_5(VAR_6, VAR_1);
 FUNC_9(VAR_7);
}
