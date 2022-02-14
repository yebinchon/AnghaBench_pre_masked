
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zone {int dummy; } ;
struct per_cpu_pages {scalar_t__ count; scalar_t__ high; scalar_t__ batch; int * lists; } ;
struct page {int lru; int * mapping; } ;
struct TYPE_2__ {struct per_cpu_pages pcp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct page*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct zone*,struct page*,int ,int) ;
 int FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 (struct zone*,scalar_t__,struct per_cpu_pages*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*,int,int ) ;
 int FUNC_14 (struct page*,int ) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (unsigned long) ;
 int FUNC_18 (unsigned long) ;
 int FUNC_19 (struct page*) ;
 struct zone* FUNC_20 (struct page*) ;
 int FUNC_21 () ;
 int FUNC_22 (struct page*,int) ;
 scalar_t__ FUNC_23 (int) ;
 TYPE_1__* FUNC_24 (struct zone*,int ) ;

__attribute__((used)) static void FUNC_25(struct page *VAR_5, int VAR_6)
{
 struct zone *VAR_7 = FUNC_20(VAR_5);
 struct per_cpu_pages *VAR_8;
 unsigned long VAR_9;
 int VAR_10;
 int VAR_11 = FUNC_2(VAR_5);

 FUNC_14(VAR_5, 0);

 if (FUNC_0(VAR_5))
  VAR_5->mapping = ((void*)0);
 if (FUNC_9(VAR_5))
  return;

 if (!FUNC_1(VAR_5)) {
  FUNC_5(FUNC_19(VAR_5), VAR_3);
  FUNC_6(FUNC_19(VAR_5), VAR_3);
 }
 FUNC_4(VAR_5, 0);
 FUNC_13(VAR_5, 1, 0);

 VAR_8 = &FUNC_24(VAR_7, FUNC_11())->pcp;
 VAR_10 = FUNC_12(VAR_5);
 FUNC_22(VAR_5, VAR_10);
 FUNC_18(VAR_9);
 if (FUNC_23(VAR_11))
  FUNC_8(VAR_5);
 FUNC_3(VAR_4);
 if (VAR_10 >= VAR_2) {
  if (FUNC_23(VAR_10 == VAR_0)) {
   FUNC_7(VAR_7, VAR_5, 0, VAR_10);
   goto out;
  }
  VAR_10 = VAR_1;
 }

 if (VAR_6)
  FUNC_16(&VAR_5->lru, &VAR_8->lists[VAR_10]);
 else
  FUNC_15(&VAR_5->lru, &VAR_8->lists[VAR_10]);
 VAR_8->count++;
 if (VAR_8->count >= VAR_8->high) {
  FUNC_10(VAR_7, VAR_8->batch, VAR_8);
  VAR_8->count -= VAR_8->batch;
 }

out:
 FUNC_17(VAR_9);
 FUNC_21();
}
