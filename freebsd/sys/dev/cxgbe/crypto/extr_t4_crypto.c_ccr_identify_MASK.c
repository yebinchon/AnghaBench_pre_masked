
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int cryptocaps; } ;
typedef int driver_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int * FUNC_1 (int ,char*,int) ;
 struct adapter* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(driver_t *VAR_1, device_t VAR_2)
{
 struct adapter *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3->cryptocaps & VAR_0 &&
     FUNC_1(VAR_2, "ccr", -1) == ((void*)0))
  FUNC_0(VAR_2, "ccr", -1);
}
