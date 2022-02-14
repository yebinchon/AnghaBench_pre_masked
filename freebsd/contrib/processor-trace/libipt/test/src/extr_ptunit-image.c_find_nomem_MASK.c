
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_mapped_section {int dummy; } ;
struct image_fixture {int * asid; int image; } ;


 int FUNC_0 (int *,struct pt_mapped_section*,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct image_fixture *VAR_1)
{
 struct pt_mapped_section VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_1->image, &VAR_2, &VAR_1->asid[1], 0x1010ull);
 FUNC_1(VAR_3, -VAR_0);

 return FUNC_2();
}
