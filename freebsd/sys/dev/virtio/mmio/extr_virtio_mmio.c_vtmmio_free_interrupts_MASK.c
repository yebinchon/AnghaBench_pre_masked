
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtmmio_softc {int ** res; int dev; int * ih; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct vtmmio_softc *VAR_1)
{

 if (VAR_1->ih != ((void*)0))
  FUNC_1(VAR_1->dev, VAR_1->res[1], VAR_1->ih);

 if (VAR_1->res[1] != ((void*)0))
  FUNC_0(VAR_1->dev, VAR_0, 0, VAR_1->res[1]);
}
