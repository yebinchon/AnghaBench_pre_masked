
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 int VAR_1;


 if ((VAR_1 = FUNC_0(VAR_0)))
  goto failed;


 if ((VAR_1 = FUNC_1(VAR_0)))
  goto failed;

 return (0);

failed:
 FUNC_2(VAR_0);
 return (VAR_1);
}
