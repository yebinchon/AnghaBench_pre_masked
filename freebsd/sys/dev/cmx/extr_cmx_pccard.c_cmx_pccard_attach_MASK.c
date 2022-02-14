
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0)
{
 int VAR_1 = 0;
 FUNC_2(VAR_0);

 if ((VAR_1 = FUNC_0(VAR_0)) != 0) {
  FUNC_4(VAR_0, "cmx_alloc_resources() failed!\n");
  FUNC_3(VAR_0);
  return VAR_1;
 }

 if ((VAR_1 = FUNC_1(VAR_0)) != 0) {
  FUNC_4(VAR_0, "cmx_attach() failed!\n");
  FUNC_3(VAR_0);
  return VAR_1;
 }

 FUNC_4(VAR_0, "attached\n");
 return 0;
}
