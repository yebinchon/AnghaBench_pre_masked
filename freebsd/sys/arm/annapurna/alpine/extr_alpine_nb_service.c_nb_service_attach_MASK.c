
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nb_service_softc {int res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct nb_service_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct nb_service_softc *VAR_4;
 uint32_t VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_3);

 VAR_6 = FUNC_0(VAR_3, VAR_2, &VAR_4->res);
 if (VAR_6 != 0) {
  FUNC_4(VAR_3, "could not allocate resources\n");
  return (VAR_6);
 }


 VAR_5 = FUNC_1(VAR_4->res, VAR_0);
 VAR_5 &= ~VAR_1;
 FUNC_2(VAR_4->res, VAR_0, VAR_5);

 return (0);
}
