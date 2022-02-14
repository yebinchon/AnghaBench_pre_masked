
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icode {int dummy; } ;
struct block {int dummy; } ;


 struct block* FUNC_0 (struct block*) ;
 struct block* FUNC_1 (struct block*) ;
 int FUNC_2 (struct icode*,struct block*) ;
 scalar_t__ FUNC_3 (struct icode*,struct block*) ;

__attribute__((used)) static int
FUNC_4(struct icode *VAR_0, struct block *VAR_1)
{
 if (VAR_1 == 0 || FUNC_3(VAR_0, VAR_1))
  return 0;
 FUNC_2(VAR_0, VAR_1);
 return FUNC_4(VAR_0, FUNC_1(VAR_1)) + FUNC_4(VAR_0, FUNC_0(VAR_1)) + 1;
}
