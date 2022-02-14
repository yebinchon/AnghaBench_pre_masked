
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
 int VAR_0 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 struct ptunit_result FUNC_5 () ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct image_fixture *VAR_1)
{
 struct pt_mapped_section VAR_2;
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0(&VAR_1->image, &VAR_2, &VAR_1->asid[0], 0x1003ull);
 FUNC_4(VAR_3, 0);

 VAR_4 = FUNC_2(VAR_2.section);
 FUNC_3(VAR_4, 0);

 VAR_4 = FUNC_1(&VAR_1->image, &VAR_2, 0x1004ull, VAR_3 + 1);
 FUNC_3(VAR_4, -VAR_0);

 return FUNC_5();
}
