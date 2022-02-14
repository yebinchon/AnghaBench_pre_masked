
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_xfer {int fc; scalar_t__ sc; } ;
struct fw_drv1 {int rq; } ;
struct fw_bind {struct fw_drv1* sc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct fw_xfer*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct fw_xfer *VAR_1)
{
 struct fw_bind *VAR_2;
 struct fw_drv1 *VAR_3;

 VAR_2 = (struct fw_bind *)VAR_1->sc;
 VAR_3 = VAR_2->sc;
 FUNC_0(VAR_1->fc);
 FUNC_2(&VAR_3->rq, VAR_1, VAR_0);
 FUNC_1(VAR_1->fc);
 FUNC_3(&VAR_3->rq);
}
