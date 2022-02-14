
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct section_fixture {int section; int name; } ;
struct ptunit_result {int dummy; } ;
typedef int buffer ;


 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (int *,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,int,int) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int,int) ;
 struct ptunit_result FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (struct section_fixture*,int*) ;

__attribute__((used)) static struct ptunit_result FUNC_10(struct section_fixture *VAR_1)
{
 uint8_t VAR_2[] = { 0xcc, 0x2, 0x4, 0x6 };
 uint8_t VAR_3[] = { 0xcc, 0xcc, 0xcc };
 int VAR_4;

 FUNC_9(VAR_1, VAR_2);

 VAR_4 = FUNC_1(&VAR_1->section, VAR_1->name, 0x1ull, 0x3ull);
 FUNC_5(VAR_4, 0);
 FUNC_7(VAR_1->section);

 VAR_4 = FUNC_2(VAR_1->section);
 FUNC_5(VAR_4, 0);

 VAR_4 = FUNC_3(VAR_1->section, VAR_3, 2, 0x0ull);
 FUNC_5(VAR_4, 2);
 FUNC_8(VAR_3[0], VAR_2[1]);
 FUNC_8(VAR_3[1], VAR_2[2]);
 FUNC_8(VAR_3[2], 0xcc);

 FUNC_0(VAR_3, 0xcc, sizeof(VAR_3));

 VAR_4 = FUNC_4(VAR_1->section);
 FUNC_5(VAR_4, 0);

 VAR_4 = FUNC_3(VAR_1->section, VAR_3, 2, 0x0ull);
 FUNC_5(VAR_4, -VAR_0);
 FUNC_8(VAR_3[0], 0xcc);
 FUNC_8(VAR_3[1], 0xcc);
 FUNC_8(VAR_3[2], 0xcc);

 VAR_4 = FUNC_2(VAR_1->section);
 FUNC_5(VAR_4, 0);

 VAR_4 = FUNC_3(VAR_1->section, VAR_3, 2, 0x0ull);
 FUNC_5(VAR_4, 2);
 FUNC_8(VAR_3[0], VAR_2[1]);
 FUNC_8(VAR_3[1], VAR_2[2]);
 FUNC_8(VAR_3[2], 0xcc);

 VAR_4 = FUNC_4(VAR_1->section);
 FUNC_5(VAR_4, 0);

 return FUNC_6();
}
