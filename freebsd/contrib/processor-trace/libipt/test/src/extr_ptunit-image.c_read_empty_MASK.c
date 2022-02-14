
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct pt_asid {int dummy; } ;
struct image_fixture {int image; } ;
typedef int buffer ;


 int FUNC_0 (struct pt_asid*) ;
 int FUNC_1 (int *,int*,int*,int,struct pt_asid*,int) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct image_fixture *VAR_1)
{
 struct pt_asid VAR_2;
 uint8_t VAR_3[] = { 0xcc, 0xcc };
 int VAR_4, VAR_5;

 FUNC_0(&VAR_2);

 VAR_5 = -1;
 VAR_4 = FUNC_1(&VAR_1->image, &VAR_5, VAR_3, sizeof(VAR_3),
          &VAR_2, 0x1000ull);
 FUNC_2(VAR_4, -VAR_0);
 FUNC_2(VAR_5, -1);
 FUNC_4(VAR_3[0], 0xcc);
 FUNC_4(VAR_3[1], 0xcc);

 return FUNC_3();
}
