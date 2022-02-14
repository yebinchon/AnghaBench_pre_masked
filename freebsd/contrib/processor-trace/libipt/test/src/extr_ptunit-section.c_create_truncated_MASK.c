
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct section_fixture {int section; int name; } ;
struct ptunit_result {int dummy; } ;
typedef int bytes ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 struct ptunit_result FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char const*,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct section_fixture*,int*) ;

__attribute__((used)) static struct ptunit_result FUNC_10(struct section_fixture *VAR_1)
{
 const char *VAR_2;
 uint8_t VAR_3[] = { 0xcc, 0xcc, 0xcc, 0xcc, 0xcc };
 uint64_t VAR_4, VAR_5;
 int VAR_6;

 FUNC_9(VAR_1, VAR_3);

 VAR_6 = FUNC_0(&VAR_1->section, VAR_1->name, 0x1ull, VAR_0);
 FUNC_4(VAR_6, 0);
 FUNC_6(VAR_1->section);

 VAR_2 = FUNC_1(VAR_1->section);
 FUNC_7(VAR_2, VAR_1->name);

 VAR_4 = FUNC_2(VAR_1->section);
 FUNC_8(VAR_4, 0x1ull);

 VAR_5 = FUNC_3(VAR_1->section);
 FUNC_8(VAR_5, sizeof(VAR_3) - 1);

 return FUNC_5();
}
