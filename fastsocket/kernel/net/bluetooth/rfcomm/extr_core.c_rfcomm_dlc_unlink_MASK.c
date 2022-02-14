
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_session {int dlcs; } ;
struct rfcomm_dlc {struct rfcomm_session* session; int list; int refcnt; } ;


 int FUNC_0 (char*,struct rfcomm_dlc*,int ,struct rfcomm_session*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct rfcomm_dlc*) ;
 int FUNC_5 (struct rfcomm_session*) ;
 int FUNC_6 (struct rfcomm_session*,int ) ;

__attribute__((used)) static void FUNC_7(struct rfcomm_dlc *VAR_1)
{
 struct rfcomm_session *VAR_2 = VAR_1->session;

 FUNC_0("dlc %p refcnt %d session %p", VAR_1, FUNC_1(&VAR_1->refcnt), VAR_2);

 FUNC_2(&VAR_1->list);
 VAR_1->session = ((void*)0);
 FUNC_4(VAR_1);

 if (FUNC_3(&VAR_2->dlcs))
  FUNC_6(VAR_2, VAR_0);

 FUNC_5(VAR_2);
}
