
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ucount; int mcount; } ;
struct TYPE_4__ {TYPE_3__* section; } ;
struct TYPE_5__ {TYPE_1__ msec; } ;
struct test_fixture {TYPE_3__ section; TYPE_2__ mcache; } ;
struct ptunit_result {int dummy; } ;


 struct ptunit_result FUNC_0 () ;
 int FUNC_1 (int ,struct test_fixture*) ;
 int VAR_0 ;

__attribute__((used)) static struct ptunit_result FUNC_2(struct test_fixture *VAR_1)
{
 FUNC_1(VAR_0, VAR_1);

 VAR_1->mcache.msec.section = &VAR_1->section;

 VAR_1->section.ucount = 1;
 VAR_1->section.mcount = 1;

 return FUNC_0();
}
