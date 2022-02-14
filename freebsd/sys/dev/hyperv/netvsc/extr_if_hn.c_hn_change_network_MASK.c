
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_softc {int hn_netchg_init; int * hn_mgmt_taskq; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct hn_softc *VAR_0)
{

 if (VAR_0->hn_mgmt_taskq != ((void*)0))
  FUNC_0(VAR_0->hn_mgmt_taskq, &VAR_0->hn_netchg_init);
}
