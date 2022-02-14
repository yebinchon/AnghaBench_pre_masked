
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int dummy; } ;
struct icl_conn {int dummy; } ;


 struct iscsi_session* FUNC_0 (struct icl_conn*) ;
 int FUNC_1 (struct iscsi_session*,char*) ;
 int FUNC_2 (struct iscsi_session*) ;

__attribute__((used)) static void
FUNC_3(struct icl_conn *VAR_0)
{
 struct iscsi_session *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1, "connection error; reconnecting");
 FUNC_2(VAR_1);
}
