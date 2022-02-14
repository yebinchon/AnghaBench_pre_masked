
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zone {TYPE_1__* free_area; } ;
struct page {int lru; } ;
struct TYPE_2__ {int * free_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct zone*) ;

__attribute__((used)) static int FUNC_11(struct zone *VAR_0,
     struct page *VAR_1, struct page *VAR_2,
     int VAR_3)
{
 struct page *VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;
 FUNC_0(FUNC_8(VAR_1) != FUNC_8(VAR_2));


 for (VAR_4 = VAR_1; VAR_4 <= VAR_2;) {

  FUNC_2(FUNC_6(VAR_4) != FUNC_10(VAR_0));

  if (!FUNC_9(FUNC_7(VAR_4))) {
   VAR_4++;
   continue;
  }

  if (!FUNC_1(VAR_4)) {
   VAR_4++;
   continue;
  }

  VAR_5 = FUNC_5(VAR_4);
  FUNC_4(&VAR_4->lru);
  FUNC_3(&VAR_4->lru,
   &VAR_0->free_area[VAR_5].free_list[VAR_3]);
  VAR_4 += 1 << VAR_5;
  VAR_6 += 1 << VAR_5;
 }

 return VAR_6;
}
