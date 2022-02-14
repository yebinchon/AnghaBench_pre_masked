
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfiscsi_session {int cs_conn; } ;
struct cfiscsi_data_wait {int cdw_icl_prv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct cfiscsi_data_wait*) ;

__attribute__((used)) static void
FUNC_2(struct cfiscsi_session *VAR_1,
    struct cfiscsi_data_wait *VAR_2)
{

 FUNC_0(VAR_1->cs_conn, VAR_2->cdw_icl_prv);
 FUNC_1(VAR_0, VAR_2);
}
