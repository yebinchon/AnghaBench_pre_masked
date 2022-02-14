
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_mapped_section {int section; } ;
struct image_fixture {int image; int * asid; } ;


 int FUNC_0 (int *,struct pt_mapped_section*,int *,int) ;
 int FUNC_1 (int *,struct pt_mapped_section*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 struct ptunit_result FUNC_5 () ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct image_fixture *VAR_0)
{
 struct pt_mapped_section VAR_1;
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(&VAR_0->image, &VAR_1, &VAR_0->asid[0], 0x1003ull);
 FUNC_4(VAR_2, 0);

 VAR_3 = FUNC_2(VAR_1.section);
 FUNC_3(VAR_3, 0);

 VAR_3 = FUNC_1(&VAR_0->image, &VAR_1, 0x1004ull, VAR_2);
 FUNC_3(VAR_3, 0);

 return FUNC_5();
}
