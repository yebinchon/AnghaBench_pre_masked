
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct image_fixture {int * asid; int image; int iscache; } ;


 int FUNC_0 (int *,int *,int,int *) ;
 int FUNC_1 (int *,int*,int*,int,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct image_fixture *VAR_2)
{
 uint8_t VAR_3[] = { 0xcc, 0xcc, 0xcc };
 int VAR_4, VAR_5;

 VAR_4 = FUNC_0(&VAR_2->image, &VAR_2->iscache, 1,
          &VAR_2->asid[0]);
 FUNC_2(VAR_4, -VAR_0);

 VAR_5 = -1;
 VAR_4 = FUNC_1(&VAR_2->image, &VAR_5, VAR_3, 2, &VAR_2->asid[0],
          0x1003ull);
 FUNC_2(VAR_4, -VAR_1);
 FUNC_2(VAR_5, -1);

 return FUNC_3();
}
