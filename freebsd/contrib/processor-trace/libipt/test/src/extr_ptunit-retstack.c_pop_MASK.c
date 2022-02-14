
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_retstack {int dummy; } ;


 int FUNC_0 (struct pt_retstack*) ;
 int FUNC_1 (struct pt_retstack*) ;
 int FUNC_2 (struct pt_retstack*,int *) ;
 int FUNC_3 (struct pt_retstack*,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 struct ptunit_result FUNC_6 () ;

__attribute__((used)) static struct ptunit_result FUNC_7(void)
{
 struct pt_retstack VAR_0;
 int VAR_1;

 FUNC_0(&VAR_0);

 VAR_1 = FUNC_3(&VAR_0, 0x42ull);
 FUNC_4(VAR_1, 0);

 VAR_1 = FUNC_1(&VAR_0);
 FUNC_4(VAR_1, 0);

 VAR_1 = FUNC_2(&VAR_0, ((void*)0));
 FUNC_4(VAR_1, 0);

 VAR_1 = FUNC_1(&VAR_0);
 FUNC_5(VAR_1, 0);

 return FUNC_6();
}
