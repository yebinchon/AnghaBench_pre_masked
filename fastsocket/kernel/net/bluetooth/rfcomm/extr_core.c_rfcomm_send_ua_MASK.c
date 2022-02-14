
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rfcomm_session {int initiator; } ;
struct rfcomm_cmd {int fcs; int len; int ctrl; int addr; } ;
typedef int cmd ;


 int FUNC_0 (char*,struct rfcomm_session*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rfcomm_session*,void*,int) ;

__attribute__((used)) static int FUNC_6(struct rfcomm_session *VAR_1, u8 VAR_2)
{
 struct rfcomm_cmd VAR_3;

 FUNC_0("%p dlci %d", VAR_1, VAR_2);

 VAR_3.addr = FUNC_1(!VAR_1->initiator, VAR_2);
 VAR_3.ctrl = FUNC_2(VAR_0, 1);
 VAR_3.len = FUNC_4(0);
 VAR_3.fcs = FUNC_3((u8 *) &VAR_3);

 return FUNC_5(VAR_1, (void *) &VAR_3, sizeof(VAR_3));
}
