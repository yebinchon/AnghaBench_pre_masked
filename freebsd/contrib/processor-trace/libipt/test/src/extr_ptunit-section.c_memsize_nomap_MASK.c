
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct section_fixture {int section; int name; } ;
struct ptunit_result {int dummy; } ;


 int FUNC_0 (int *,int ,int,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned long long) ;
 int FUNC_6 (struct section_fixture*,int*) ;

__attribute__((used)) static struct ptunit_result FUNC_7(struct section_fixture *VAR_0)
{
 uint64_t VAR_1;
 uint8_t VAR_2[] = { 0xcc, 0x2, 0x4, 0x6 };
 int VAR_3;

 FUNC_6(VAR_0, VAR_2);

 VAR_3 = FUNC_0(&VAR_0->section, VAR_0->name, 0x1ull, 0x3ull);
 FUNC_2(VAR_3, 0);
 FUNC_4(VAR_0->section);

 VAR_3 = FUNC_1(VAR_0->section, &VAR_1);
 FUNC_2(VAR_3, 0);
 FUNC_5(VAR_1, 0ull);

 return FUNC_3();
}
