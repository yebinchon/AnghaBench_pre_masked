
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct icode {int dummy; } ;
struct block {scalar_t__ longjf; scalar_t__ longjt; int stmts; } ;


 struct block* FUNC_0 (struct block*) ;
 struct block* FUNC_1 (struct block*) ;
 int FUNC_2 (struct icode*,struct block*) ;
 scalar_t__ FUNC_3 (struct icode*,struct block*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static u_int
FUNC_5(struct icode *VAR_0, struct block *VAR_1)
{
 u_int VAR_2;

 if (VAR_1 == 0 || FUNC_3(VAR_0, VAR_1))
  return 0;
 FUNC_2(VAR_0, VAR_1);
 VAR_2 = FUNC_5(VAR_0, FUNC_1(VAR_1)) + FUNC_5(VAR_0, FUNC_0(VAR_1));
 return FUNC_4(VAR_1->stmts) + VAR_2 + 1 + VAR_1->longjt + VAR_1->longjf;
}
