
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_softc {int hn_link_flags; int hn_mgmt_taskq0; int hn_mgmt_taskq; } ;


 int VAR_0 ;
 int FUNC_0 (struct hn_softc*) ;
 int FUNC_1 (struct hn_softc*) ;

__attribute__((used)) static void
FUNC_2(struct hn_softc *VAR_1)
{

 VAR_1->hn_mgmt_taskq = VAR_1->hn_mgmt_taskq0;







 if (VAR_1->hn_link_flags & VAR_0)
  FUNC_0(VAR_1);
 else
  FUNC_1(VAR_1);
}
