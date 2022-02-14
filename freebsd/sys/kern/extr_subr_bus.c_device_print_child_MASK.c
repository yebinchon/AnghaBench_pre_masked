
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_1(VAR_1))
  VAR_2 += FUNC_0(VAR_0, VAR_1);
 else
  VAR_2 += FUNC_2(VAR_1, " not found\n");

 return (VAR_2);
}
