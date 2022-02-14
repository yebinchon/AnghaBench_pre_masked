
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ucount; int mcount; } ;
struct TYPE_4__ {int msec; } ;
struct test_fixture {TYPE_1__ section; TYPE_2__ mcache; int image; } ;
struct ptunit_result {int dummy; } ;
typedef struct pt_section const pt_section ;
typedef struct pt_section pt_mapped_section ;
struct pt_asid {int dummy; } ;


 int FUNC_0 (TYPE_2__*,struct pt_section const**,int *,struct pt_asid*,unsigned long long) ;
 struct pt_section* FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct pt_section const*) ;
 struct ptunit_result FUNC_4 () ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct test_fixture *VAR_1)
{
 const struct pt_mapped_section *VAR_2;
 struct pt_asid VAR_3;
 struct pt_section *VAR_4;
 int VAR_5;

 VAR_2 = ((void*)0);

 VAR_5 = FUNC_0(&VAR_1->mcache, &VAR_2, &VAR_1->image, &VAR_3,
        0ull);
 FUNC_2(VAR_5, -VAR_0);

 VAR_4 = FUNC_1(&VAR_1->mcache.msec);
 FUNC_3(VAR_4);
 FUNC_3(VAR_2);

 FUNC_5(VAR_1->section.mcount, 0);
 FUNC_5(VAR_1->section.ucount, 0);

 return FUNC_4();
}
