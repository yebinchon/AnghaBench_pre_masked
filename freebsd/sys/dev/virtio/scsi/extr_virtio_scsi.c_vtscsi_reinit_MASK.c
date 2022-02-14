
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int vtscsi_features; int vtscsi_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vtscsi_softc*,int ,char*,int) ;
 int FUNC_3 (struct vtscsi_softc*) ;
 int FUNC_4 (struct vtscsi_softc*) ;
 int FUNC_5 (struct vtscsi_softc*) ;

__attribute__((used)) static int
FUNC_6(struct vtscsi_softc *VAR_1)
{
 device_t VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->vtscsi_dev;

 VAR_3 = FUNC_0(VAR_2, VAR_1->vtscsi_features);
 if (VAR_3 == 0) {
  FUNC_5(VAR_1);
  FUNC_4(VAR_1);
  FUNC_1(VAR_2);

  FUNC_3(VAR_1);
 }

 FUNC_2(VAR_1, VAR_0, "error=%d\n", VAR_3);

 return (VAR_3);
}
