
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct image_fixture {int * asid; int image; TYPE_1__* status; } ;
struct TYPE_2__ {int deleted; } ;


 int FUNC_0 (int *,int*,int*,int,int *,int) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int,int) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct image_fixture *VAR_0)
{
 uint8_t VAR_1[] = { 0xcc, 0xcc, 0xcc };
 int VAR_2, VAR_3;

 VAR_2 = FUNC_1(&VAR_0->image, "bad-name",
          &VAR_0->asid[0]);
 FUNC_2(VAR_2, 0);

 FUNC_2(VAR_0->status[0].deleted, 0);
 FUNC_2(VAR_0->status[1].deleted, 0);

 VAR_3 = -1;
 VAR_2 = FUNC_0(&VAR_0->image, &VAR_3, VAR_1, 2, &VAR_0->asid[0],
          0x1003ull);
 FUNC_2(VAR_2, 2);
 FUNC_2(VAR_3, 10);
 FUNC_4(VAR_1[0], 0x03);
 FUNC_4(VAR_1[1], 0x04);
 FUNC_4(VAR_1[2], 0xcc);

 VAR_3 = -1;
 VAR_2 = FUNC_0(&VAR_0->image, &VAR_3, VAR_1, 2, &VAR_0->asid[1],
          0x2001ull);
 FUNC_2(VAR_2, 2);
 FUNC_2(VAR_3, 11);
 FUNC_4(VAR_1[0], 0x01);
 FUNC_4(VAR_1[1], 0x02);
 FUNC_4(VAR_1[2], 0xcc);

 return FUNC_3();
}
