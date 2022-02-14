
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * section; } ;
struct test_fixture {int section; TYPE_1__ image; } ;
struct ptunit_result {int dummy; } ;


 struct ptunit_result FUNC_0 () ;
 int FUNC_1 (int ,struct test_fixture*) ;
 int VAR_0 ;

__attribute__((used)) static struct ptunit_result FUNC_2(struct test_fixture *VAR_1)
{
 FUNC_1(VAR_0, VAR_1);

 VAR_1->image.section = &VAR_1->section;

 return FUNC_0();
}
