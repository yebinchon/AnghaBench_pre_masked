
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int lock; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct page* FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (struct page*) ;
 struct zone* FUNC_3 (struct page*) ;
 unsigned long VAR_2 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5, VAR_6;
 struct page *VAR_7;
 struct zone *VAR_8;
 int VAR_9;

 VAR_5 = VAR_3;





 for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5 += VAR_2) {
  VAR_7 = FUNC_0(VAR_5, VAR_2);
  if (VAR_7 && FUNC_2(VAR_7) != VAR_1)
   break;
 }
 VAR_7 = FUNC_0(VAR_3, VAR_4 - VAR_3);
 if ((VAR_5 < VAR_4) || !VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_7);
 FUNC_4(&VAR_8->lock, VAR_6);
 VAR_9 = FUNC_1(VAR_3, VAR_4);
 FUNC_5(&VAR_8->lock, VAR_6);
 return VAR_9 ? 0 : -VAR_0;
}
