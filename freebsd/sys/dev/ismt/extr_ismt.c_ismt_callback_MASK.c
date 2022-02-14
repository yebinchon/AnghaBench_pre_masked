
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ismt_softc {int bus_reserved; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;


 int FUNC_2 (uintptr_t*,uintptr_t,uintptr_t) ;
 int FUNC_3 (uintptr_t*,uintptr_t) ;
 int VAR_2 ;
 struct ismt_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3, int VAR_4, void *VAR_5)
{
 struct ismt_softc *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_4(VAR_3);

 switch (VAR_4) {
 case 128:
  VAR_7 = FUNC_2(
      (uintptr_t *)&VAR_6->bus_reserved,
      (uintptr_t)((void*)0), (uintptr_t)VAR_2);
  FUNC_0(VAR_3, "SMB_REQUEST_BUS acquired=%d\n", VAR_7);
  if (VAR_7)
   VAR_8 = 0;
  else
   VAR_8 = VAR_0;
  break;
 case 129:
  FUNC_1(VAR_6->bus_reserved == VAR_2,
      ("SMB_RELEASE_BUS called by wrong thread\n"));
  FUNC_0(VAR_3, "SMB_RELEASE_BUS\n");
  FUNC_3((uintptr_t *)&VAR_6->bus_reserved,
      (uintptr_t)((void*)0));
  VAR_8 = 0;
  break;
 default:
  VAR_8 = VAR_1;
  break;
 }

 return (VAR_8);
}
