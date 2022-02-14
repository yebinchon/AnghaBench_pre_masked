
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct section_fixture {int section; int name; } ;
struct ptunit_result {int dummy; } ;


 int FUNC_0 (int *,int ,int,int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 struct ptunit_result FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char const*,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct section_fixture*,int*) ;

__attribute__((used)) static struct ptunit_result FUNC_10(struct section_fixture *VAR_0)
{
 const char *VAR_1;
 uint8_t VAR_2[] = { 0xcc, 0xcc, 0xcc, 0xcc, 0xcc };
 uint64_t VAR_3, VAR_4;
 int VAR_5;

 FUNC_9(VAR_0, VAR_2);

 VAR_5 = FUNC_0(&VAR_0->section, VAR_0->name, 0x1ull, 0x3ull);
 FUNC_4(VAR_5, 0);
 FUNC_6(VAR_0->section);

 VAR_1 = FUNC_1(VAR_0->section);
 FUNC_7(VAR_1, VAR_0->name);

 VAR_3 = FUNC_2(VAR_0->section);
 FUNC_8(VAR_3, 0x1ull);

 VAR_4 = FUNC_3(VAR_0->section);
 FUNC_8(VAR_4, 0x3ull);

 return FUNC_5();
}
