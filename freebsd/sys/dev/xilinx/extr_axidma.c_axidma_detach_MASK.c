
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axidma_softc {int * res; int * ih; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 struct axidma_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct axidma_softc *VAR_2;

 VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1, VAR_2->res[1], VAR_2->ih[0]);
 FUNC_1(VAR_1, VAR_2->res[2], VAR_2->ih[1]);
 FUNC_0(VAR_1, VAR_0, VAR_2->res);

 return (0);
}
