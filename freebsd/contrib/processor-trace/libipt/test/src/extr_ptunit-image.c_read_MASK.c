
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct image_fixture {int * asid; int image; } ;


 int FUNC_0 (int *,int*,int*,int,int *,int) ;
 int FUNC_1 (int,int) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct image_fixture *VAR_0)
{
 uint8_t VAR_1[] = { 0xcc, 0xcc, 0xcc };
 int VAR_2, VAR_3;

 VAR_3 = -1;
 VAR_2 = FUNC_0(&VAR_0->image, &VAR_3, VAR_1, 2, &VAR_0->asid[1],
          0x2003ull);
 FUNC_1(VAR_2, 2);
 FUNC_1(VAR_3, 11);
 FUNC_3(VAR_1[0], 0x03);
 FUNC_3(VAR_1[1], 0x04);
 FUNC_3(VAR_1[2], 0xcc);

 return FUNC_2();
}
