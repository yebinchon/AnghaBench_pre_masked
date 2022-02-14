
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int esb_res; int esb_rid; } ;
struct sfxge_softc {int dev; TYPE_1__ bar; } ;
typedef TYPE_1__ efsys_bar_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct sfxge_softc *VAR_1)
{
 efsys_bar_t *VAR_2 = &VAR_1->bar;

 FUNC_1(VAR_1->dev, VAR_0, VAR_2->esb_rid,
     VAR_2->esb_res);
 FUNC_0(VAR_2);
}
