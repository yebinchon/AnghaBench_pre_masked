
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct adapter* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2)
{
 struct adapter *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3->flags & VAR_1)
  return (0);
 return (VAR_0);
}
