
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_mapped_section {int section; int vaddr; } ;
struct image_fixture {int * section; int * asid; int image; } ;


 int FUNC_0 (int *,struct pt_mapped_section*,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct image_fixture *VAR_0)
{
 struct pt_mapped_section VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_0->image, &VAR_1, &VAR_0->asid[1], 0x2003ull);
 FUNC_2(VAR_2, 11);
 FUNC_4(VAR_1.section, &VAR_0->section[1]);
 FUNC_5(VAR_1.vaddr, 0x2000ull);

 VAR_2 = FUNC_1(VAR_1.section);
 FUNC_2(VAR_2, 0);

 return FUNC_3();
}
