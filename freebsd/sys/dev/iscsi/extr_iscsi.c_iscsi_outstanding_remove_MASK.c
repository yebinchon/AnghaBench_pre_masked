
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int is_outstanding; int is_conn; } ;
struct iscsi_outstanding {int io_icl_prv; } ;


 int FUNC_0 (struct iscsi_session*) ;
 int FUNC_1 (int *,struct iscsi_outstanding*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,struct iscsi_outstanding*) ;

__attribute__((used)) static void
FUNC_4(struct iscsi_session *VAR_2, struct iscsi_outstanding *VAR_3)
{

 FUNC_0(VAR_2);

 FUNC_2(VAR_2->is_conn, VAR_3->io_icl_prv);
 FUNC_1(&VAR_2->is_outstanding, VAR_3, VAR_0);
 FUNC_3(VAR_1, VAR_3);
}
