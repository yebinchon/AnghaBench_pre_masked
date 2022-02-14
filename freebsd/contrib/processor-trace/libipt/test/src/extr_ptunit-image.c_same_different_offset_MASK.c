
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct image_fixture {int * asid; int image; TYPE_2__* section; TYPE_1__* mapping; } ;
struct TYPE_4__ {int size; scalar_t__ offset; int filename; } ;
struct TYPE_3__ {int size; int* content; } ;


 int FUNC_0 (struct image_fixture*,int ) ;
 int FUNC_1 (int *,TYPE_2__*,int *,int,int ) ;
 int FUNC_2 (int *,int*,int*,int,int *,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int ) ;
 struct ptunit_result FUNC_5 () ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_7(struct image_fixture *VAR_0)
{
 uint8_t VAR_1[] = { 0xcc, 0xcc }, VAR_2;
 int VAR_3, VAR_4, VAR_5;




 VAR_5 = FUNC_0(VAR_0, VAR_0->section[0].filename);
 FUNC_4(VAR_5, 0);

 VAR_0->section[VAR_5].offset = VAR_0->section[0].offset + 0x10;
 FUNC_6(VAR_0->section[VAR_5].size, VAR_0->section[0].size);


 for (VAR_2 = 0; VAR_2 < VAR_0->mapping[VAR_5].size; ++VAR_2)
  VAR_0->mapping[VAR_5].content[VAR_2] += 0x10;


 VAR_3 = FUNC_1(&VAR_0->image, &VAR_0->section[0], &VAR_0->asid[0],
         0x1000ull, 0);
 FUNC_3(VAR_3, 0);

 VAR_3 = FUNC_1(&VAR_0->image, &VAR_0->section[VAR_5],
         &VAR_0->asid[0], 0x1000ull, 0);
 FUNC_3(VAR_3, 0);

 VAR_4 = -1;
 VAR_3 = FUNC_2(&VAR_0->image, &VAR_4, VAR_1, 1, &VAR_0->asid[0],
          0x1000ull);
 FUNC_3(VAR_3, 1);
 FUNC_3(VAR_4, 0);
 FUNC_6(VAR_1[0], 0x10);
 FUNC_6(VAR_1[1], 0xcc);

 VAR_4 = -1;
 VAR_3 = FUNC_2(&VAR_0->image, &VAR_4, VAR_1, 1, &VAR_0->asid[0],
          0x100full);
 FUNC_3(VAR_3, 1);
 FUNC_3(VAR_4, 0);
 FUNC_6(VAR_1[0], 0x1f);
 FUNC_6(VAR_1[1], 0xcc);

 return FUNC_5();
}
