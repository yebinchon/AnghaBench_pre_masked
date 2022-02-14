
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stackmark {int dummy; } ;
typedef int arith_t ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct stackmark*) ;
 int FUNC_2 (struct stackmark*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;

arith_t FUNC_5(const char *VAR_3)
{
 struct stackmark VAR_4;
 arith_t VAR_5;

 FUNC_2(&VAR_4);

 VAR_0 = VAR_1 = VAR_3;

 VAR_5 = FUNC_0(FUNC_4(), 0);

 if (VAR_2)
  FUNC_3("expecting EOF");

 FUNC_1(&VAR_4);

 return VAR_5;
}
