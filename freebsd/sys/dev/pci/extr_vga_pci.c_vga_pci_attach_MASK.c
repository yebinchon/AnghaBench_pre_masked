
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0)
{

 FUNC_1(VAR_0);


 FUNC_2(VAR_0, "drm", -1);
 FUNC_2(VAR_0, "drmn", -1);
 FUNC_0(VAR_0);

 if (FUNC_4(VAR_0))
  FUNC_3(VAR_0, "Boot video device\n");

 return (0);
}
