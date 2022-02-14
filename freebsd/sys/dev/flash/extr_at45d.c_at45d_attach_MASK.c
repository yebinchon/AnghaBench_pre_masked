
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at45d_softc {int dev; } ;
typedef int device_t ;


 int FUNC_0 (struct at45d_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct at45d_softc*) ;
 struct at45d_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct at45d_softc *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 VAR_2->dev = VAR_1;
 FUNC_0(VAR_2);

 FUNC_1(VAR_0, VAR_2);
 return (0);
}
