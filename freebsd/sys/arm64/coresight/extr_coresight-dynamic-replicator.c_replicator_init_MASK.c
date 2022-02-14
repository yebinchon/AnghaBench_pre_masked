
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replicator_softc {int res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 struct replicator_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
 struct replicator_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_2);


 FUNC_0(VAR_3->res, VAR_0, VAR_1);

 return (0);
}
