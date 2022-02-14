
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hhook_head {int dummy; } ;
typedef int int32_t ;


 struct hhook_head* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hhook_head*) ;
 int FUNC_2 (struct hhook_head*) ;

uint32_t
FUNC_3(int32_t VAR_0, int32_t VAR_1)
{
 struct hhook_head *VAR_2;
 uint32_t VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2 == ((void*)0))
  return (0);

 VAR_3 = FUNC_1(VAR_2);
 FUNC_2(VAR_2);

 return (VAR_3);
}
