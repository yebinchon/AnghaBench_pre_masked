
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct image_fixture {int image; int * asid; } ;


 int FUNC_0 (int *,int*,int *,int,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct image_fixture *VAR_1)
{
 uint8_t VAR_2;
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0(((void*)0), &VAR_4, &VAR_2, 1, &VAR_1->asid[0],
          0x1000ull);
 FUNC_1(VAR_3, -VAR_0);

 VAR_3 = FUNC_0(&VAR_1->image, ((void*)0), &VAR_2, 1, &VAR_1->asid[0],
          0x1000ull);
 FUNC_1(VAR_3, -VAR_0);

 VAR_3 = FUNC_0(&VAR_1->image, &VAR_4, ((void*)0), 1, &VAR_1->asid[0],
          0x1000ull);
 FUNC_1(VAR_3, -VAR_0);

 VAR_3 = FUNC_0(&VAR_1->image, &VAR_4, &VAR_2, 1, ((void*)0),
          0x1000ull);
 FUNC_1(VAR_3, -VAR_0);

 return FUNC_2();
}
