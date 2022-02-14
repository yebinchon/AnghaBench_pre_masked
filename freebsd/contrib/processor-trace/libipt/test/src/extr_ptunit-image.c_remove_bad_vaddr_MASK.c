
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct image_fixture {int * asid; int image; TYPE_1__* status; int * section; } ;
struct TYPE_2__ {int deleted; } ;


 int FUNC_0 (int *,int*,int*,int,int *,int) ;
 int FUNC_1 (int *,int *,int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct image_fixture *VAR_1)
{
 uint8_t VAR_2[] = { 0xcc, 0xcc, 0xcc };
 int VAR_3, VAR_4;

 VAR_4 = -1;
 VAR_3 = FUNC_0(&VAR_1->image, &VAR_4, VAR_2, 2, &VAR_1->asid[0],
          0x1001ull);
 FUNC_2(VAR_3, 2);
 FUNC_2(VAR_4, 10);
 FUNC_4(VAR_2[0], 0x01);
 FUNC_4(VAR_2[1], 0x02);
 FUNC_4(VAR_2[2], 0xcc);

 VAR_3 = FUNC_1(&VAR_1->image, &VAR_1->section[0],
     &VAR_1->asid[0], 0x2000ull);
 FUNC_2(VAR_3, -VAR_0);

 FUNC_2(VAR_1->status[0].deleted, 0);
 FUNC_2(VAR_1->status[1].deleted, 0);

 VAR_4 = -1;
 VAR_3 = FUNC_0(&VAR_1->image, &VAR_4, VAR_2, 2, &VAR_1->asid[0],
          0x1003ull);
 FUNC_2(VAR_3, 2);
 FUNC_2(VAR_4, 10);
 FUNC_4(VAR_2[0], 0x03);
 FUNC_4(VAR_2[1], 0x04);
 FUNC_4(VAR_2[2], 0xcc);

 VAR_4 = -1;
 VAR_3 = FUNC_0(&VAR_1->image, &VAR_4, VAR_2, 2, &VAR_1->asid[1],
          0x2005ull);
 FUNC_2(VAR_3, 2);
 FUNC_2(VAR_4, 11);
 FUNC_4(VAR_2[0], 0x05);
 FUNC_4(VAR_2[1], 0x06);
 FUNC_4(VAR_2[2], 0xcc);

 return FUNC_3();
}
