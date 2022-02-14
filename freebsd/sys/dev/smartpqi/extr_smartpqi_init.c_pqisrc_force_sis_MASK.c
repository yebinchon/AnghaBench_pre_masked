
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pqisrc_softstate_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(pqisrc_softstate_t *VAR_3)
{
 int VAR_4 = VAR_2;

 if (FUNC_3(VAR_3)) {
  FUNC_0("Controller FW is not runnning");
  return VAR_1;
 }

 if (FUNC_1(VAR_3) == VAR_0) {
  return VAR_4;
 }

 if (FUNC_4(VAR_3)) {
  FUNC_2(VAR_3, VAR_0);
  return VAR_4;
 }

 FUNC_7(VAR_3);


 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4) {
  return VAR_4;
 }

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4) {
  return VAR_4;
 }

 FUNC_2(VAR_3, VAR_0);

 return VAR_4;
}
