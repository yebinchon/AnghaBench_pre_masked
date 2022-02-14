
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_retstack {int dummy; } ;


 int FUNC_0 (struct pt_retstack*) ;
 int FUNC_1 (struct pt_retstack*) ;
 int FUNC_2 (struct pt_retstack*,int *) ;
 int FUNC_3 (struct pt_retstack*,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 struct ptunit_result FUNC_6 () ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static struct ptunit_result FUNC_8(void)
{
 struct pt_retstack VAR_0;
 uint64_t VAR_1;
 int VAR_2;

 FUNC_0(&VAR_0);

 VAR_2 = FUNC_3(&VAR_0, 0x42ull);
 FUNC_4(VAR_2, 0);

 VAR_2 = FUNC_1(&VAR_0);
 FUNC_4(VAR_2, 0);

 VAR_2 = FUNC_2(&VAR_0, &VAR_1);
 FUNC_4(VAR_2, 0);
 FUNC_7(VAR_1, 0x42ull);

 VAR_2 = FUNC_1(&VAR_0);
 FUNC_5(VAR_2, 0);

 return FUNC_6();
}
