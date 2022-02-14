
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct section_fixture {struct pt_block_cache* section; int name; } ;
struct ptunit_result {int dummy; } ;
struct pt_block_cache {int size; int nentries; } ;


 int FUNC_0 (struct pt_block_cache**,int ,int,int) ;
 int FUNC_1 (struct pt_block_cache*) ;
 struct pt_block_cache* FUNC_2 (struct pt_block_cache*) ;
 int FUNC_3 (struct pt_block_cache*) ;
 int FUNC_4 (struct pt_block_cache*) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct pt_block_cache*) ;
 struct ptunit_result FUNC_7 () ;
 int FUNC_8 (struct pt_block_cache*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct section_fixture*,int*) ;

__attribute__((used)) static struct ptunit_result FUNC_11(struct section_fixture *VAR_0)
{
 uint8_t VAR_1[] = { 0xcc, 0x2, 0x4, 0x6 };
 struct pt_block_cache *VAR_2;
 int VAR_3;

 FUNC_10(VAR_0, VAR_1);

 VAR_3 = FUNC_0(&VAR_0->section, VAR_0->name, 0x1ull, 0x3ull);
 FUNC_5(VAR_3, 0);
 FUNC_8(VAR_0->section);

 VAR_3 = FUNC_3(VAR_0->section);
 FUNC_5(VAR_3, 0);

 VAR_3 = FUNC_1(VAR_0->section);
 FUNC_5(VAR_3, 0);

 VAR_2 = FUNC_2(VAR_0->section);
 FUNC_8(VAR_2);
 FUNC_9(VAR_2->nentries, VAR_0->section->size);

 VAR_3 = FUNC_4(VAR_0->section);
 FUNC_5(VAR_3, 0);

 VAR_2 = FUNC_2(VAR_0->section);
 FUNC_6(VAR_2);

 return FUNC_7();
}
