
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_tnt_cache {unsigned long long tnt; unsigned long long index; } ;


 int FUNC_0 (struct pt_tnt_cache*) ;
 int FUNC_1 (int,int) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (unsigned long long,int ) ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 struct pt_tnt_cache VAR_0;
 int VAR_1;

 VAR_0.tnt = 1ull;
 VAR_0.index = 1ull;

 VAR_1 = FUNC_0(&VAR_0);
 FUNC_1(VAR_1, 1);
 FUNC_3(VAR_0.index, 0);

 return FUNC_2();
}
