
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct image_fixture {int * asid; int image; TYPE_1__* status; TYPE_2__* section; } ;
typedef int buffer ;
struct TYPE_4__ {char* filename; } ;
struct TYPE_3__ {int deleted; } ;


 int FUNC_0 (int *,TYPE_2__*,int *,int,int) ;
 int FUNC_1 (int *,int*,int*,int,int *,int) ;
 int FUNC_2 (int *,char*,int *) ;
 int VAR_0 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ) ;
 struct ptunit_result FUNC_5 () ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_7(struct image_fixture *VAR_1)
{
 uint8_t VAR_2[] = { 0xcc, 0xcc, 0xcc };
 int VAR_3, VAR_4;

 VAR_1->section[0].filename = "same-name";
 VAR_1->section[1].filename = "same-name";

 VAR_3 = FUNC_0(&VAR_1->image, &VAR_1->section[0], &VAR_1->asid[0],
         0x1000ull, 1);
 FUNC_3(VAR_3, 0);

 VAR_3 = FUNC_0(&VAR_1->image, &VAR_1->section[1], &VAR_1->asid[0],
         0x2000ull, 2);
 FUNC_3(VAR_3, 0);

 VAR_4 = -1;
 VAR_3 = FUNC_1(&VAR_1->image, &VAR_4, VAR_2, 2, &VAR_1->asid[0],
          0x1001ull);
 FUNC_3(VAR_3, 2);
 FUNC_3(VAR_4, 1);
 FUNC_6(VAR_2[0], 0x01);
 FUNC_6(VAR_2[1], 0x02);
 FUNC_6(VAR_2[2], 0xcc);

 VAR_3 = FUNC_2(&VAR_1->image, "same-name",
          &VAR_1->asid[0]);
 FUNC_3(VAR_3, 2);

 FUNC_4(VAR_1->status[0].deleted, 0);
 FUNC_4(VAR_1->status[1].deleted, 0);

 VAR_4 = -1;
 VAR_3 = FUNC_1(&VAR_1->image, &VAR_4, VAR_2, sizeof(VAR_2),
          &VAR_1->asid[0], 0x1003ull);
 FUNC_3(VAR_3, -VAR_0);
 FUNC_3(VAR_4, -1);
 FUNC_6(VAR_2[0], 0x01);
 FUNC_6(VAR_2[1], 0x02);
 FUNC_6(VAR_2[2], 0xcc);

 VAR_4 = -1;
 VAR_3 = FUNC_1(&VAR_1->image, &VAR_4, VAR_2, sizeof(VAR_2),
          &VAR_1->asid[0], 0x2003ull);
 FUNC_3(VAR_3, -VAR_0);
 FUNC_3(VAR_4, -1);
 FUNC_6(VAR_2[0], 0x01);
 FUNC_6(VAR_2[1], 0x02);
 FUNC_6(VAR_2[2], 0xcc);

 return FUNC_5();
}
