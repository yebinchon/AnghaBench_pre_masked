
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* ulong_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, void *VAR_3)
{
 FUNC_0("Key: ");
 if (VAR_0 == 1)
  FUNC_0("%5lu ", (ulong_t)VAR_2);
 else
  FUNC_0("%s\n", (char *)VAR_2);

 FUNC_0("Value: ");
 if (VAR_1 == 1)
  FUNC_0("%5lu\n", (ulong_t)VAR_3);
 else
  FUNC_0("%s\n", (char *)VAR_2);

 return (1);
}
