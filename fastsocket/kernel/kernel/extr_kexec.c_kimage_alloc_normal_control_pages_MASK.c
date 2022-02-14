
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
struct list_head {int dummy; } ;
struct kimage {struct list_head control_pages; } ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct page* FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct list_head*) ;
 scalar_t__ FUNC_3 (struct kimage*,unsigned long,unsigned long) ;
 int FUNC_4 (int *,struct list_head*) ;
 unsigned long FUNC_5 (struct page*) ;

__attribute__((used)) static struct page *FUNC_6(struct kimage *VAR_3,
       unsigned int VAR_4)
{
 struct list_head VAR_5;
 struct page *VAR_6;
 unsigned int VAR_7;

 VAR_7 = 1 << VAR_4;
 FUNC_0(&VAR_5);




 do {
  unsigned long VAR_8, VAR_9, VAR_10, VAR_11;

  VAR_6 = FUNC_1(VAR_0, VAR_4);
  if (!VAR_6)
   break;
  VAR_8 = FUNC_5(VAR_6);
  VAR_9 = VAR_8 + VAR_7;
  VAR_10 = VAR_8 << VAR_2;
  VAR_11 = VAR_9 << VAR_2;
  if ((VAR_9 >= (VAR_1 >> VAR_2)) ||
         FUNC_3(VAR_3, VAR_10, VAR_11)) {
   FUNC_4(&VAR_6->lru, &VAR_5);
   VAR_6 = ((void*)0);
  }
 } while (!VAR_6);

 if (VAR_6) {

  FUNC_4(&VAR_6->lru, &VAR_3->control_pages);







 }







 FUNC_2(&VAR_5);

 return VAR_6;
}
