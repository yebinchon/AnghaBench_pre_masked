
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int * mapping; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct page*,unsigned int) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (int ,struct page*,unsigned int,int ) ;
 int FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*,int,int ) ;
 int FUNC_12 (struct page*,unsigned int) ;
 int FUNC_13 (unsigned long) ;
 int FUNC_14 (unsigned long) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (struct page*) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static void FUNC_18(struct page *VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;
 int VAR_6 = 0;
 int VAR_7 = FUNC_2(VAR_2);

 FUNC_12(VAR_2, VAR_3);

 if (FUNC_0(VAR_2))
  VAR_2->mapping = ((void*)0);
 for (VAR_5 = 0 ; VAR_5 < (1 << VAR_3) ; ++VAR_5)
  VAR_6 += FUNC_9(VAR_2 + VAR_5);
 if (VAR_6)
  return;

 if (!FUNC_1(VAR_2)) {
  FUNC_5(FUNC_15(VAR_2),VAR_0<<VAR_3);
  FUNC_6(FUNC_15(VAR_2),
        VAR_0 << VAR_3);
 }
 FUNC_4(VAR_2, VAR_3);
 FUNC_11(VAR_2, 1 << VAR_3, 0);

 FUNC_14(VAR_4);
 if (FUNC_17(VAR_7))
  FUNC_8(VAR_2);
 FUNC_3(VAR_1, 1 << VAR_3);
 FUNC_7(FUNC_16(VAR_2), VAR_2, VAR_3,
     FUNC_10(VAR_2));
 FUNC_13(VAR_4);
}
