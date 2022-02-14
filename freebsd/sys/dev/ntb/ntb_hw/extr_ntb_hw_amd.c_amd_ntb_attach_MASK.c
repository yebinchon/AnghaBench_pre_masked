
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_ntb_softc {int device; } ;
typedef int device_t ;


 int FUNC_0 (struct amd_ntb_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct amd_ntb_softc*) ;
 int FUNC_3 (struct amd_ntb_softc*) ;
 int FUNC_4 (struct amd_ntb_softc*) ;
 int FUNC_5 (struct amd_ntb_softc*) ;
 struct amd_ntb_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_0)
{
 struct amd_ntb_softc *VAR_1 = FUNC_6(VAR_0);
 int VAR_2;

 VAR_1->device = VAR_0;


 FUNC_8(VAR_1->device);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  goto out;

 FUNC_0(VAR_1);

 FUNC_4(VAR_1);

 FUNC_5(VAR_1);


 VAR_2 = FUNC_7(VAR_0);

out:
 if (VAR_2)
  FUNC_1(VAR_0);

 return (VAR_2);
}
