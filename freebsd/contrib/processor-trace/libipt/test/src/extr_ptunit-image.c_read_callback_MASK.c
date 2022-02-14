
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct image_fixture {int * asid; int image; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int*,int*,int,int *,int) ;
 int FUNC_1 (int *,int ,int*) ;
 int FUNC_2 (int,int) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct image_fixture *VAR_1)
{
 uint8_t VAR_2[] = { 0xdd, 0x01, 0x02, 0xdd };
 uint8_t VAR_3[] = { 0xcc, 0xcc, 0xcc };
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(&VAR_1->image, VAR_0,
           VAR_2);
 FUNC_2(VAR_4, 0);

 VAR_5 = -1;
 VAR_4 = FUNC_0(&VAR_1->image, &VAR_5, VAR_3, 2, &VAR_1->asid[0],
          0x3001ull);
 FUNC_2(VAR_4, 2);
 FUNC_2(VAR_5, 0);
 FUNC_4(VAR_3[0], 0x01);
 FUNC_4(VAR_3[1], 0x02);
 FUNC_4(VAR_3[2], 0xcc);

 return FUNC_3();
}
