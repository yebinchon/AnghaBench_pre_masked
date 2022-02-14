
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_softc {unsigned int intr_count; int dev; int ** intr_res; int ** intr_tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct ccp_softc *VAR_1)
{
 unsigned VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->intr_count; VAR_2++) {
  if (VAR_1->intr_tag[VAR_2] != ((void*)0))
   FUNC_1(VAR_1->dev, VAR_1->intr_res[VAR_2],
       VAR_1->intr_tag[VAR_2]);
  if (VAR_1->intr_res[VAR_2] != ((void*)0))
   FUNC_0(VAR_1->dev, VAR_0,
       FUNC_3(VAR_1->intr_res[VAR_2]), VAR_1->intr_res[VAR_2]);
 }

 FUNC_2(VAR_1->dev);
}
