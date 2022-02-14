
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_session {int flags; int state; } ;


 int FUNC_0 (char*,struct rfcomm_session*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct rfcomm_session *VAR_3 = (void *) VAR_2;

 FUNC_0("session %p state %ld", VAR_3, VAR_3->state);

 FUNC_2(VAR_1, &VAR_3->flags);
 FUNC_1(VAR_0);
}
