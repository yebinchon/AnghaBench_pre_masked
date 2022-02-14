
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {scalar_t__ index; } ;
struct address_space {int flags; } ;
typedef scalar_t__ pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct pagevec*,int ) ;
 int FUNC_4 (struct pagevec*,struct address_space*,scalar_t__*,int ,scalar_t__) ;
 int FUNC_5 (struct pagevec*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct page*) ;

int FUNC_8(struct address_space *VAR_6,
    pgoff_t VAR_7, pgoff_t VAR_8)
{
 struct pagevec VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 pgoff_t VAR_12;

 if (VAR_8 < VAR_7)
  return 0;

 FUNC_3(&VAR_9, 0);
 VAR_12 = VAR_7;
 while ((VAR_12 <= VAR_8) &&
   (VAR_10 = FUNC_4(&VAR_9, VAR_6, &VAR_12,
   VAR_4,
   FUNC_2(VAR_8 - VAR_12, (pgoff_t)VAR_5-1) + 1)) != 0) {
  unsigned VAR_13;

  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
   struct page *VAR_14 = VAR_9.pages[VAR_13];


   if (VAR_14->index > VAR_8)
    continue;

   FUNC_7(VAR_14);
   if (FUNC_0(VAR_14))
    VAR_11 = -VAR_2;
  }
  FUNC_5(&VAR_9);
  FUNC_1();
 }


 if (FUNC_6(VAR_1, &VAR_6->flags))
  VAR_11 = -VAR_3;
 if (FUNC_6(VAR_0, &VAR_6->flags))
  VAR_11 = -VAR_2;

 return VAR_11;
}
