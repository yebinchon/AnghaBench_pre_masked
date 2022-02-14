
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct TYPE_3__ {int nthreads; int* result; } ;
struct iscache_fixture {TYPE_2__** section; int iscache; TYPE_1__ thrd; } ;
struct TYPE_4__ {int ucount; int acount; int mcount; int iscache; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 struct ptunit_result FUNC_4 () ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct iscache_fixture *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_5(VAR_1, &VAR_2->thrd);

 for (VAR_3 = 0; VAR_3 < VAR_2->thrd.nthreads; ++VAR_3)
  FUNC_2(VAR_2->thrd.result[VAR_3], 0);

 FUNC_0(&VAR_2->iscache);

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  FUNC_2(VAR_2->section[VAR_3]->ucount, 1);
  FUNC_2(VAR_2->section[VAR_3]->acount, 0);
  FUNC_2(VAR_2->section[VAR_3]->mcount, 0);
  FUNC_3(VAR_2->section[VAR_3]->iscache);

  VAR_4 = FUNC_1(VAR_2->section[VAR_3]);
  FUNC_2(VAR_4, 0);
 }

 return FUNC_4();
}
