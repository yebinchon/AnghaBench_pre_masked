
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4)
{
 if (!FUNC_2(VAR_4))
  return (VAR_2);

 if (!FUNC_1(VAR_4, "syscon"))
  return (VAR_2);

 if (VAR_3) {
  return (VAR_1);
 }

 FUNC_0(VAR_4, "Versatile Control Module");
 return (VAR_0);
}
