
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_retstack {int dummy; } ;


 int FUNC_0 (struct pt_retstack*) ;
 int FUNC_1 (struct pt_retstack*,int*) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_5(void)
{
 struct pt_retstack VAR_1;
 uint64_t VAR_2;
 int VAR_3;

 FUNC_0(&VAR_1);

 VAR_2 = 0x42ull;
 VAR_3 = FUNC_1(&VAR_1, &VAR_2);
 FUNC_2(VAR_3, -VAR_0);
 FUNC_4(VAR_2, 0x42ull);

 return FUNC_3();
}
