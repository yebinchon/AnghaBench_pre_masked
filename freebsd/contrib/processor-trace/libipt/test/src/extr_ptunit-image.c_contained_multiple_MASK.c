
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct image_fixture {int * asid; int image; TYPE_2__* section; TYPE_1__* mapping; } ;
struct TYPE_4__ {int size; } ;
struct TYPE_3__ {int size; } ;


 int FUNC_0 (int *,TYPE_2__*,int *,int,int) ;
 int FUNC_1 (int *,int*,int*,int,int *,int) ;
 int FUNC_2 (int,int) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct image_fixture *VAR_0)
{
 uint8_t VAR_1[] = { 0xcc, 0xcc };
 int VAR_2, VAR_3;

 VAR_0->section[0].size = 0x2;
 VAR_0->mapping[0].size = 0x2;
 VAR_2 = FUNC_0(&VAR_0->image, &VAR_0->section[0], &VAR_0->asid[0],
         0x1004ull, 1);
 FUNC_2(VAR_2, 0);

 VAR_2 = FUNC_0(&VAR_0->image, &VAR_0->section[0], &VAR_0->asid[0],
         0x1008ull, 2);
 FUNC_2(VAR_2, 0);

 VAR_2 = FUNC_0(&VAR_0->image, &VAR_0->section[1], &VAR_0->asid[0],
         0x1000ull, 3);
 FUNC_2(VAR_2, 0);

 VAR_3 = -1;
 VAR_2 = FUNC_1(&VAR_0->image, &VAR_3, VAR_1, 1, &VAR_0->asid[0],
          0x1004ull);
 FUNC_2(VAR_2, 1);
 FUNC_2(VAR_3, 3);
 FUNC_4(VAR_1[0], 0x04);
 FUNC_4(VAR_1[1], 0xcc);

 VAR_3 = -1;
 VAR_2 = FUNC_1(&VAR_0->image, &VAR_3, VAR_1, 1, &VAR_0->asid[0],
          0x1008ull);
 FUNC_2(VAR_2, 1);
 FUNC_2(VAR_3, 3);
 FUNC_4(VAR_1[0], 0x08);
 FUNC_4(VAR_1[1], 0xcc);

 return FUNC_3();
}
