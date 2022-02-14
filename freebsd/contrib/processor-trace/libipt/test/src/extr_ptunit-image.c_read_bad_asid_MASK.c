
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct image_fixture {int * asid; int image; } ;
typedef int buffer ;


 int FUNC_0 (int *,int*,int*,int,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct image_fixture *VAR_1)
{
 uint8_t VAR_2[] = { 0xcc, 0xcc };
 int VAR_3, VAR_4;

 VAR_4 = -1;
 VAR_3 = FUNC_0(&VAR_1->image, &VAR_4, VAR_2, sizeof(VAR_2),
          &VAR_1->asid[0], 0x2003ull);
 FUNC_1(VAR_3, -VAR_0);
 FUNC_1(VAR_4, -1);
 FUNC_3(VAR_2[0], 0xcc);
 FUNC_3(VAR_2[1], 0xcc);

 return FUNC_2();
}
