
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct bcache_fixture {int bcache; int thrd; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 struct ptunit_result FUNC_1 () ;
 int FUNC_2 (int ,int *,int (*) (int ),int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct bcache_fixture *VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_3(VAR_2->bcache);
 FUNC_0(VAR_3, 0);

 return FUNC_1();
}
