
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msec; } ;
struct test_fixture {int section; TYPE_1__ mcache; int image; } ;
struct ptunit_result {int dummy; } ;
typedef struct pt_section const pt_section ;
typedef struct pt_section pt_mapped_section ;


 int FUNC_0 (TYPE_1__*,struct pt_section const**,int *,unsigned long long) ;
 struct pt_section* FUNC_1 (struct pt_section const*) ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (struct pt_section const*,int *) ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct test_fixture *VAR_0)
{
 const struct pt_mapped_section *VAR_1;
 struct pt_section *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_0->mcache, &VAR_1, &VAR_0->image, 0ull);
 FUNC_2(VAR_3, 0);

 FUNC_4(VAR_1, &VAR_0->mcache.msec);

 VAR_2 = FUNC_1(VAR_1);
 FUNC_4(VAR_2, &VAR_0->section);

 return FUNC_3();
}
