
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_session {int state; int sock; int list; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct rfcomm_session*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rfcomm_session*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rfcomm_session*,int ) ;
 int FUNC_5 (struct rfcomm_session*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct rfcomm_session *VAR_3)
{
 int VAR_4 = VAR_3->state;

 FUNC_0("session %p state %ld", VAR_3, VAR_3->state);

 FUNC_2(&VAR_3->list);

 if (VAR_4 == VAR_0)
  FUNC_4(VAR_3, 0);

 FUNC_5(VAR_3);
 FUNC_6(VAR_3->sock);
 FUNC_1(VAR_3);

 if (VAR_4 != VAR_1)
  FUNC_3(VAR_2);
}
