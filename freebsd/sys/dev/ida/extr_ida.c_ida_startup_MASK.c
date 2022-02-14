
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ida_softc {int dev; int ich; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct ida_softc *VAR_2;

 VAR_2 = VAR_1;

 FUNC_1(&VAR_2->ich);

 FUNC_2(&VAR_0);
 FUNC_0(VAR_2->dev);
 FUNC_3(&VAR_0);
}
