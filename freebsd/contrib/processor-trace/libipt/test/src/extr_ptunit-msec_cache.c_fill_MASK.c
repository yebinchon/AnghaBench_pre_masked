
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msec; } ;
struct test_fixture {int section; TYPE_1__ mcache; int image; } ;
struct ptunit_result {int dummy; } ;
typedef struct pt_section {int ucount; int mcount; } const pt_section ;
struct pt_mapped_section {int ucount; int mcount; } ;
struct pt_asid {int dummy; } ;


 int FUNC_0 (TYPE_1__*,struct pt_section const**,int *,struct pt_asid*,unsigned long long) ;
 struct pt_section* FUNC_1 (struct pt_section const*) ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (struct pt_section const*,int *) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct test_fixture *VAR_0)
{
 const struct pt_mapped_section *VAR_1;
 struct pt_section *VAR_2;
 struct pt_asid VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_0->mcache, &VAR_1, &VAR_0->image, &VAR_3,
        0ull);
 FUNC_2(VAR_4, 0);

 FUNC_4(VAR_1, &VAR_0->mcache.msec);

 VAR_2 = FUNC_1(VAR_1);
 FUNC_4(VAR_2, &VAR_0->section);

 FUNC_5(VAR_2->mcount, 1);
 FUNC_5(VAR_2->ucount, 1);

 return FUNC_3();
}
