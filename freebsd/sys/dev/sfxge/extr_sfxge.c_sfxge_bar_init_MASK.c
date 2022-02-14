
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * esb_res; int esb_handle; int esb_tag; int esb_rid; } ;
struct sfxge_softc {int dev; int mem_bar; TYPE_1__ bar; } ;
typedef TYPE_1__ efsys_bar_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int * FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct sfxge_softc *VAR_3)
{
 efsys_bar_t *VAR_4 = &VAR_3->bar;

 VAR_4->esb_rid = FUNC_0(VAR_3->mem_bar);
 if ((VAR_4->esb_res = FUNC_2(VAR_3->dev, VAR_2,
     &VAR_4->esb_rid, VAR_1)) == ((void*)0)) {
  FUNC_4(VAR_3->dev, "Cannot allocate BAR region %d\n",
      VAR_3->mem_bar);
  return (VAR_0);
 }
 VAR_4->esb_tag = FUNC_6(VAR_4->esb_res);
 VAR_4->esb_handle = FUNC_5(VAR_4->esb_res);

 FUNC_1(VAR_4, FUNC_3(VAR_3->dev));

 return (0);
}
