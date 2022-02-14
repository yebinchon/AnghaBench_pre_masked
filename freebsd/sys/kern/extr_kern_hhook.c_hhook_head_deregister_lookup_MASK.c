
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hhook_head {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (struct hhook_head*) ;
 struct hhook_head* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct hhook_head*) ;

int
FUNC_3(int32_t VAR_1, int32_t VAR_2)
{
 struct hhook_head *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 VAR_4 = FUNC_0(VAR_3);

 if (VAR_4 == VAR_0)
  FUNC_2(VAR_3);

 return (VAR_4);
}
