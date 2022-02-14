
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct bcache_fixture {int bcache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct ptunit_result FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct bcache_fixture*) ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct bcache_fixture *VAR_2)
{
 FUNC_3(VAR_1, VAR_2);

 VAR_2->bcache = FUNC_0(VAR_0);
 FUNC_2(VAR_2->bcache);

 return FUNC_1();
}
