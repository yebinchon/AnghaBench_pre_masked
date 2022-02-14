
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct image_fixture {int * asid; int * section; int image; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int,int) ;
 int FUNC_1 (int ,struct image_fixture*) ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct image_fixture *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0, VAR_1);

 VAR_2 = FUNC_0(&VAR_1->image, &VAR_1->section[0], &VAR_1->asid[0],
         0x1000ull, 10);
 FUNC_2(VAR_2, 0);

 VAR_2 = FUNC_0(&VAR_1->image, &VAR_1->section[1], &VAR_1->asid[1],
         0x2000ull, 11);
 FUNC_2(VAR_2, 0);

 return FUNC_3();
}
