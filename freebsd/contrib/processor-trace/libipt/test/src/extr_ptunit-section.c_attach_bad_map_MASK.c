
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct section_fixture {int section; int name; } ;
struct ptunit_result {int dummy; } ;
struct pt_image_section_cache {int map; } ;


 int FUNC_0 (int *,int ,int,int) ;
 int FUNC_1 (int ,struct pt_image_section_cache*) ;
 int FUNC_2 (int ,struct pt_image_section_cache*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int,int ) ;
 struct ptunit_result FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct section_fixture*,int*) ;

__attribute__((used)) static struct ptunit_result FUNC_8(struct section_fixture *VAR_1)
{
 struct pt_image_section_cache VAR_2;
 uint8_t VAR_3[] = { 0xcc, 0x2, 0x4, 0x6 };
 int VAR_4;

 VAR_2.map = -VAR_0;

 FUNC_7(VAR_1, VAR_3);

 VAR_4 = FUNC_0(&VAR_1->section, VAR_1->name, 0x1ull, 0x3ull);
 FUNC_4(VAR_4, 0);
 FUNC_6(VAR_1->section);

 VAR_4 = FUNC_1(VAR_1->section, &VAR_2);
 FUNC_4(VAR_4, 0);

 VAR_4 = FUNC_3(VAR_1->section);
 FUNC_4(VAR_4, -VAR_0);

 VAR_4 = FUNC_2(VAR_1->section, &VAR_2);
 FUNC_4(VAR_4, 0);

 return FUNC_5();
}
