
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct section_fixture {int section; int name; } ;
struct ptunit_result {int dummy; } ;


 int FUNC_0 (int *,int ,int,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct section_fixture*,int*) ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct section_fixture *VAR_1)
{
 uint8_t VAR_2[] = { 0xcc, 0x2, 0x4, 0x6 };
 int VAR_3;

 FUNC_5(VAR_1, VAR_2);

 VAR_3 = FUNC_0(&VAR_1->section, VAR_1->name, 0x1ull, 0x3ull);
 FUNC_2(VAR_3, 0);
 FUNC_4(VAR_1->section);

 VAR_3 = FUNC_1(VAR_1->section);
 FUNC_2(VAR_3, -VAR_0);

 return FUNC_3();
}
