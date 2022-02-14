
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct super_block*,int) ;

__attribute__((used)) static void FUNC_2(struct super_block *VAR_2,
     sector_t VAR_3)
{
 int VAR_4;
 u64 VAR_5;

 if (VAR_3 == VAR_1)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = FUNC_1(VAR_2, VAR_4);
  if (VAR_5 == VAR_3)
   return;
 }

 FUNC_0();
}
