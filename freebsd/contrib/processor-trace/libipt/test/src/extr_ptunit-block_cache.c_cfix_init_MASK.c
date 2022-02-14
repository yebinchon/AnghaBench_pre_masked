
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct bcache_fixture {int * bcache; int thrd; } ;


 struct ptunit_result FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static struct ptunit_result FUNC_2(struct bcache_fixture *VAR_1)
{
 FUNC_1(VAR_0, &VAR_1->thrd);

 VAR_1->bcache = ((void*)0);

 return FUNC_0();
}
