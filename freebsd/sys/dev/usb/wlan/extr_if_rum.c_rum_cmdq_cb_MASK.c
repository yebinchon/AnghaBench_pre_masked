
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rum_softc {size_t cmdq_first; struct rum_cmdq* cmdq; } ;
struct rum_cmdq {int rvp_id; int data; int (* func ) (struct rum_softc*,int *,int ) ;} ;


 int FUNC_0 (struct rum_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct rum_softc*) ;
 int FUNC_2 (struct rum_softc*) ;
 int FUNC_3 (struct rum_softc*) ;
 int FUNC_4 (struct rum_cmdq*,int ,int) ;
 int FUNC_5 (struct rum_softc*,int *,int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1, int VAR_2)
{
 struct rum_softc *VAR_3 = VAR_1;
 struct rum_cmdq *VAR_4;

 FUNC_0(VAR_3);
 while (VAR_3->cmdq[VAR_3->cmdq_first].func != ((void*)0)) {
  VAR_4 = &VAR_3->cmdq[VAR_3->cmdq_first];
  FUNC_1(VAR_3);

  FUNC_2(VAR_3);
  VAR_4->func(VAR_3, &VAR_4->data, VAR_4->rvp_id);
  FUNC_3(VAR_3);

  FUNC_0(VAR_3);
  FUNC_4(VAR_4, 0, sizeof (*VAR_4));
  VAR_3->cmdq_first = (VAR_3->cmdq_first + 1) % VAR_0;
 }
 FUNC_1(VAR_3);
}
