
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snvs_softc {int dev; int * memres; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int ) ;
 struct snvs_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
 struct snvs_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_4);
 VAR_5->dev = VAR_4;

 VAR_6 = 0;
 VAR_5->memres = FUNC_0(VAR_5->dev, VAR_3, &VAR_6,
     VAR_1);
 if (VAR_5->memres == ((void*)0)) {
  FUNC_3(VAR_5->dev, "could not allocate registers\n");
  return (VAR_0);
 }

 FUNC_1(VAR_5->dev, VAR_2);

 return (0);
}
