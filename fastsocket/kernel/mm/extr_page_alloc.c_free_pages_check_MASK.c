
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; int _count; int * mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline int FUNC_5(struct page *VAR_2)
{
 if (FUNC_4(FUNC_3(VAR_2) |
  (VAR_2->mapping != ((void*)0)) |
  (FUNC_0(&VAR_2->_count) != 0) |
  (VAR_2->flags & VAR_0) |
  (FUNC_2(VAR_2)))) {
  FUNC_1(VAR_2);
  return 1;
 }
 if (VAR_2->flags & VAR_1)
  VAR_2->flags &= ~VAR_1;
 return 0;
}
