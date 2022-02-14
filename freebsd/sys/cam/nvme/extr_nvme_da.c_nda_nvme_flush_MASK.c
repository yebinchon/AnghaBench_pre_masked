
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nda_softc {int nsid; } ;
struct ccb_nvmeio {int cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccb_nvmeio*,int ,int ,int ,int *,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct nda_softc *VAR_3, struct ccb_nvmeio *VAR_4)
{
 FUNC_0(VAR_4,
     0,
     VAR_2,
     VAR_0,
     ((void*)0),
     0,
     VAR_1 * 1000);
 FUNC_1(&VAR_4->cmd, VAR_3->nsid);
}
