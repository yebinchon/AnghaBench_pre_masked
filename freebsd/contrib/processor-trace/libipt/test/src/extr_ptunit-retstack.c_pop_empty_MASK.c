
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_retstack {int dummy; } ;


 int FUNC_0 (struct pt_retstack*) ;
 int FUNC_1 (struct pt_retstack*,int *) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 struct pt_retstack VAR_1;
 int VAR_2;

 FUNC_0(&VAR_1);

 VAR_2 = FUNC_1(&VAR_1, ((void*)0));
 FUNC_2(VAR_2, -VAR_0);

 return FUNC_3();
}
