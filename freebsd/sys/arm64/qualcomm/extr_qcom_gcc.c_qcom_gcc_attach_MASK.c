
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_gcc_softc {int res; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 struct qcom_gcc_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (struct qcom_gcc_softc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct qcom_gcc_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_2, VAR_1, &VAR_3->res) != 0) {
  FUNC_2(VAR_2, "cannot allocate resources for device\n");
  return (VAR_0);
 }






 FUNC_3(VAR_3);

 return (0);
}
