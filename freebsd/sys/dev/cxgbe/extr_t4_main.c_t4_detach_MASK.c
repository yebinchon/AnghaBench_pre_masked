
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;
typedef int device_t ;


 struct adapter* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct adapter *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0);

 VAR_2 = FUNC_2(VAR_0, 1);
 if (VAR_2) {
  FUNC_1(VAR_0,
      "failed to detach sibling devices: %d\n", VAR_2);
  return (VAR_2);
 }

 return (FUNC_3(VAR_0));
}
