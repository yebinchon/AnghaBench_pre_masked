
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct bnep_session {int dummy; } ;
struct bnep_control_rsp {int resp; int ctrl; int type; } ;
typedef int rsp ;


 int VAR_0 ;
 int FUNC_0 (struct bnep_session*,struct bnep_control_rsp*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct bnep_session *VAR_1, u8 VAR_2, u16 VAR_3)
{
 struct bnep_control_rsp VAR_4;
 VAR_4.type = VAR_0;
 VAR_4.ctrl = VAR_2;
 VAR_4.resp = FUNC_1(VAR_3);
 return FUNC_0(VAR_1, &VAR_4, sizeof(VAR_4));
}
