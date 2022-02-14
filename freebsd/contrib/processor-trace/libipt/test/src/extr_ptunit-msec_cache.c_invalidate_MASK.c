
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ucount; int mcount; } ;
struct TYPE_4__ {int msec; } ;
struct test_fixture {TYPE_1__ section; TYPE_2__ mcache; } ;
struct ptunit_result {int dummy; } ;
struct pt_section {int dummy; } ;


 int FUNC_0 (TYPE_2__*) ;
 struct pt_section* FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct pt_section*) ;
 struct ptunit_result FUNC_4 () ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct test_fixture *VAR_0)
{
 struct pt_section *VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_0->mcache);
 FUNC_2(VAR_2, 0);

 VAR_1 = FUNC_1(&VAR_0->mcache.msec);
 FUNC_3(VAR_1);

 FUNC_5(VAR_0->section.mcount, 0);
 FUNC_5(VAR_0->section.ucount, 0);

 return FUNC_4();
}
