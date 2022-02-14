
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int dummy; } ;
struct hn_softc {int hn_mgmt_taskq0; int hn_netchg_status; int hn_netchg_init; int hn_prichan; } ;


 int FUNC_0 (struct hn_softc*) ;
 int FUNC_1 (struct task*,int ,int ,struct hn_softc*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,struct task*) ;

__attribute__((used)) static void
FUNC_6(struct hn_softc *VAR_1)
{
 struct task VAR_2;

 FUNC_0(VAR_1);





 FUNC_1(&VAR_2, 0, VAR_0, VAR_1);
 FUNC_5(VAR_1->hn_prichan, &VAR_2);




 FUNC_2(VAR_1->hn_mgmt_taskq0, &VAR_1->hn_netchg_init);
 FUNC_4(VAR_1->hn_mgmt_taskq0, &VAR_1->hn_netchg_status);
 FUNC_3(VAR_1->hn_mgmt_taskq0);
}
