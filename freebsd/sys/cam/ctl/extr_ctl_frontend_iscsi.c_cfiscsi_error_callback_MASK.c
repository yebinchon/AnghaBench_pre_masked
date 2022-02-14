
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icl_conn {int dummy; } ;
struct cfiscsi_session {int dummy; } ;


 int FUNC_0 (struct cfiscsi_session*,char*) ;
 struct cfiscsi_session* FUNC_1 (struct icl_conn*) ;
 int FUNC_2 (struct cfiscsi_session*) ;

__attribute__((used)) static void
FUNC_3(struct icl_conn *VAR_0)
{
 struct cfiscsi_session *VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, "connection error; dropping connection");
 FUNC_2(VAR_1);
}
