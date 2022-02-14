
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blake2_softc {int dying; int lock; int cid; } ;
typedef int device_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 struct blake2_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0)
{
 struct blake2_softc *VAR_1;

 VAR_1 = FUNC_2(VAR_0);

 FUNC_4(&VAR_1->lock);
 VAR_1->dying = 1;
 FUNC_5(&VAR_1->lock);
 FUNC_1(VAR_1->cid);

 FUNC_3(&VAR_1->lock);

 FUNC_0();

 return (0);
}
