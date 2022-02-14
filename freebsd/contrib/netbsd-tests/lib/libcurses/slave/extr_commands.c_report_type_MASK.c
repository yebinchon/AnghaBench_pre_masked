
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int returns_enum_t ;


 size_t VAR_0 ;
 int FUNC_0 (int,char*) ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int ,int*,int) ;

__attribute__((used)) static void
FUNC_2(returns_enum_t VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_2;
 if (FUNC_1(VAR_1[VAR_0], &VAR_3, sizeof(int)) < 0)
  FUNC_0(1, "command pipe write for status type failed");

}
