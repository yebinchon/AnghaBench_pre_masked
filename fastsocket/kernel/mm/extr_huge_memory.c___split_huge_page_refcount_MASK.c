
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int lru_lock; } ;
struct page {int flags; int mapping; int _count; scalar_t__ index; int _mapcount; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 long VAR_8 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int VAR_9 ;
 int FUNC_6 (struct page*,int ) ;
 int FUNC_7 (struct zone*,int ,int) ;
 int FUNC_8 (scalar_t__,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int,int *) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct zone*,struct page*,struct page*) ;
 int FUNC_14 (struct page*,struct page*) ;
 scalar_t__ FUNC_15 (struct page*) ;
 scalar_t__ FUNC_16 (struct page*) ;
 struct zone* FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static void FUNC_23(struct page *VAR_10)
{
 int VAR_11;
 struct zone *VAR_12 = FUNC_17(VAR_10);
 int VAR_13 = 0;


 FUNC_21(&VAR_12->lru_lock);
 FUNC_11(VAR_10);

 for (VAR_11 = VAR_0 - 1; VAR_11 >= 1; VAR_11--) {
  struct page *VAR_14 = VAR_10 + VAR_11;


  FUNC_0(FUNC_16(VAR_14) < 0);
  VAR_13 += FUNC_16(VAR_14);

  FUNC_0(VAR_13 < 0);
  FUNC_0(FUNC_9(&VAR_14->_count) != 0);
  FUNC_8(FUNC_16(VAR_10) + FUNC_16(VAR_14) + 1,
      &VAR_14->_count);


  FUNC_19();






  VAR_14->flags &= ~VAR_3 | VAR_9;
  VAR_14->flags |= (VAR_10->flags &
         ((1L << VAR_6) |
          (1L << VAR_7) |
          (1L << VAR_5) |
          (1L << VAR_8)));
  VAR_14->flags |= (1L << VAR_4);


  FUNC_20();
  VAR_14->_mapcount = VAR_10->_mapcount;

  FUNC_0(VAR_14->mapping);
  VAR_14->mapping = VAR_10->mapping;

  VAR_14->index = VAR_10->index + VAR_11;

  FUNC_0(!FUNC_2(VAR_14));
  FUNC_0(!FUNC_5(VAR_14));
  FUNC_0(!FUNC_3(VAR_14));
  FUNC_0(!FUNC_4(VAR_14));

  FUNC_14(VAR_14, VAR_10);
  FUNC_13(VAR_12, VAR_10, VAR_14);
 }
 FUNC_10(VAR_13, &VAR_10->_count);
 FUNC_0(FUNC_9(&VAR_10->_count) <= 0);

 FUNC_6(VAR_10, VAR_2);
 FUNC_7(VAR_12, VAR_1, VAR_0);

 FUNC_1(VAR_10);
 FUNC_12(VAR_10);
 FUNC_22(&VAR_12->lru_lock);

 for (VAR_11 = 1; VAR_11 < VAR_0; VAR_11++) {
  struct page *VAR_15 = VAR_10 + VAR_11;
  FUNC_0(FUNC_15(VAR_15) <= 0);







  FUNC_18(VAR_15);
 }





 FUNC_0(FUNC_15(VAR_10) <= 0);
}
