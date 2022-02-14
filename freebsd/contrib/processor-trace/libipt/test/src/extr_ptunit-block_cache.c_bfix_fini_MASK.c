
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct TYPE_2__ {int nthreads; int * result; } ;
struct bcache_fixture {int bcache; TYPE_1__ thrd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct bcache_fixture *VAR_1)
{
 int VAR_2;

 FUNC_3(VAR_0, &VAR_1->thrd);

 for (VAR_2 = 0; VAR_2 < VAR_1->thrd.nthreads; ++VAR_2)
  FUNC_1(VAR_1->thrd.result[VAR_2], 0);

 FUNC_0(VAR_1->bcache);

 return FUNC_2();
}
