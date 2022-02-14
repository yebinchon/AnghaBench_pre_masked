
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct bcache_fixture {int bcache; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct bcache_fixture *VAR_1)
{
 VAR_1->bcache = FUNC_0(VAR_0 + 1ull);
 FUNC_1(VAR_1->bcache);

 return FUNC_2();
}
