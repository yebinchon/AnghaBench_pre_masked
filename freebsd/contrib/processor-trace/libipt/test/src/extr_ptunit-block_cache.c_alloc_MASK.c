
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct bcache_fixture {int bcache; } ;


 int FUNC_0 (int) ;
 struct ptunit_result FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct bcache_fixture *VAR_0)
{
 VAR_0->bcache = FUNC_0(0x10000ull);
 FUNC_2(VAR_0->bcache);

 return FUNC_1();
}
