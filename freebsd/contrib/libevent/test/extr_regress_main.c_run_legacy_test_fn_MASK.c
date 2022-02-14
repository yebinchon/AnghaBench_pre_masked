
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct basic_test_data {int (* legacy_test_fn ) () ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;

void
FUNC_2(void *VAR_3)
{
 struct basic_test_data *VAR_4 = VAR_3;
 VAR_2 = VAR_0 = 0;

 VAR_1 = 1;
 VAR_4->legacy_test_fn();
 VAR_1 = 0;

 if (!VAR_2)
  FUNC_1("Legacy unit test failed");

end:
 VAR_2 = 0;
}
