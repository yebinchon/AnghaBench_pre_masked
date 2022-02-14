
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_long ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static u_long
FUNC_5(int VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 FUNC_0(VAR_0 == 1 || VAR_0 == 2 || VAR_0 == 4 || VAR_0 == 8,
     ("getaddflags: invalid operand size %d", VAR_0));

 if (VAR_0 == 1)
  return (FUNC_4(VAR_1, VAR_2));
 else if (VAR_0 == 2)
  return (FUNC_1(VAR_1, VAR_2));
 else if (VAR_0 == 4)
  return (FUNC_2(VAR_1, VAR_2));
 else
  return (FUNC_3(VAR_1, VAR_2));
}
