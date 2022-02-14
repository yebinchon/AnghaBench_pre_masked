
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct image_fixture {int * asid; int copy; int image; TYPE_2__* section; TYPE_1__* mapping; } ;
struct TYPE_4__ {int size; } ;
struct TYPE_3__ {int size; } ;


 int FUNC_0 (int *,TYPE_2__*,int *,int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int*,int*,int,int *,int) ;
 int FUNC_3 (int,int) ;
 struct ptunit_result FUNC_4 () ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct image_fixture *VAR_0)
{
 uint8_t VAR_1[] = { 0xcc, 0xcc };
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(&VAR_0->copy, &VAR_0->section[0], &VAR_0->asid[0],
         0x2000ull, 1);
 FUNC_3(VAR_2, 0);

 VAR_0->section[1].size = 0x7;
 VAR_0->mapping[1].size = 0x7;

 VAR_2 = FUNC_0(&VAR_0->image, &VAR_0->section[1], &VAR_0->asid[0],
         0x2001ull, 2);
 FUNC_3(VAR_2, 0);

 VAR_0->section[2].size = 0x8;
 VAR_0->mapping[2].size = 0x8;

 VAR_2 = FUNC_0(&VAR_0->image, &VAR_0->section[2], &VAR_0->asid[0],
         0x2008ull, 3);
 FUNC_3(VAR_2, 0);

 VAR_2 = FUNC_1(&VAR_0->copy, &VAR_0->image);
 FUNC_3(VAR_2, 0);

 VAR_3 = -1;
 VAR_2 = FUNC_2(&VAR_0->copy, &VAR_3, VAR_1, 1, &VAR_0->asid[0],
          0x2003ull);
 FUNC_3(VAR_2, 1);
 FUNC_3(VAR_3, 2);
 FUNC_5(VAR_1[0], 0x02);
 FUNC_5(VAR_1[1], 0xcc);

 VAR_3 = -1;
 VAR_2 = FUNC_2(&VAR_0->copy, &VAR_3, VAR_1, 1, &VAR_0->asid[0],
          0x2009ull);
 FUNC_3(VAR_2, 1);
 FUNC_3(VAR_3, 3);
 FUNC_5(VAR_1[0], 0x01);
 FUNC_5(VAR_1[1], 0xcc);

 VAR_3 = -1;
 VAR_2 = FUNC_2(&VAR_0->copy, &VAR_3, VAR_1, 1, &VAR_0->asid[0],
          0x2000ull);
 FUNC_3(VAR_2, 1);
 FUNC_3(VAR_3, 1);
 FUNC_5(VAR_1[0], 0x00);
 FUNC_5(VAR_1[1], 0xcc);

 return FUNC_4();
}
