
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct section_fixture {int section; int name; } ;
struct ptunit_result {int dummy; } ;


 int FUNC_0 (int *,int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 struct ptunit_result FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct section_fixture*,int*) ;

__attribute__((used)) static struct ptunit_result FUNC_8(struct section_fixture *VAR_0)
{
 uint8_t VAR_1[] = { 0xcc, 0x2, 0x4, 0x6 };
 int VAR_2;

 FUNC_7(VAR_0, VAR_1);

 VAR_2 = FUNC_0(&VAR_0->section, VAR_0->name, 0x1ull, 0x3ull);
 FUNC_4(VAR_2, 0);
 FUNC_6(VAR_0->section);

 VAR_2 = FUNC_2(VAR_0->section);
 FUNC_4(VAR_2, 0);

 VAR_2 = FUNC_1(VAR_0->section);
 FUNC_4(VAR_2, 0);

 VAR_2 = FUNC_1(VAR_0->section);
 FUNC_4(VAR_2, 0);

 VAR_2 = FUNC_3(VAR_0->section);
 FUNC_4(VAR_2, 0);

 return FUNC_5();
}
