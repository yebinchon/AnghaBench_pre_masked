
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct rpcent {int r_name; } ;
typedef int buf ;


 struct rpcent* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int,char*,scalar_t__) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static char *
FUNC_3(uint32_t VAR_0)
{



 static char VAR_1[32];
 static uint32_t VAR_2 = 0;

 if (VAR_2 != 0 && VAR_0 == VAR_2)
  return (VAR_1);




  (void) FUNC_1(VAR_1, sizeof(VAR_1), "#%u", VAR_0);




 return (VAR_1);
}
