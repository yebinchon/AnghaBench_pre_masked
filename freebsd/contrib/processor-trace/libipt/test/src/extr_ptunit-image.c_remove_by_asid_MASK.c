
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct image_fixture {int * asid; int image; TYPE_1__* status; } ;
typedef int buffer ;
struct TYPE_2__ {int deleted; } ;


 int FUNC_0 (int *,int*,int*,int,int *,int) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int ) ;
 struct ptunit_result FUNC_4 () ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct image_fixture *VAR_1)
{
 uint8_t VAR_2[] = { 0xcc, 0xcc, 0xcc };
 int VAR_3, VAR_4;

 VAR_4 = -1;
 VAR_3 = FUNC_0(&VAR_1->image, &VAR_4, VAR_2, 2, &VAR_1->asid[0],
          0x1001ull);
 FUNC_2(VAR_3, 2);
 FUNC_2(VAR_4, 10);
 FUNC_5(VAR_2[0], 0x01);
 FUNC_5(VAR_2[1], 0x02);
 FUNC_5(VAR_2[2], 0xcc);

 VAR_3 = FUNC_1(&VAR_1->image, &VAR_1->asid[0]);
 FUNC_2(VAR_3, 1);

 FUNC_3(VAR_1->status[0].deleted, 0);
 FUNC_2(VAR_1->status[1].deleted, 0);

 VAR_4 = -1;
 VAR_3 = FUNC_0(&VAR_1->image, &VAR_4, VAR_2, sizeof(VAR_2),
          &VAR_1->asid[0], 0x1003ull);
 FUNC_2(VAR_3, -VAR_0);
 FUNC_2(VAR_4, -1);
 FUNC_5(VAR_2[0], 0x01);
 FUNC_5(VAR_2[1], 0x02);
 FUNC_5(VAR_2[2], 0xcc);

 VAR_4 = -1;
 VAR_3 = FUNC_0(&VAR_1->image, &VAR_4, VAR_2, 2, &VAR_1->asid[1],
          0x2003ull);
 FUNC_2(VAR_3, 2);
 FUNC_2(VAR_4, 11);
 FUNC_5(VAR_2[0], 0x03);
 FUNC_5(VAR_2[1], 0x04);
 FUNC_5(VAR_2[2], 0xcc);

 return FUNC_4();
}
