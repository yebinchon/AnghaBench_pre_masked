
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int _mapcount; TYPE_1__* first_page; int _count; } ;
struct TYPE_2__ {int _count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct page*) ;

__attribute__((used)) static inline void FUNC_4(struct page *VAR_0,
     bool VAR_1)
{
 FUNC_0(FUNC_2(&VAR_0->first_page->_count) <= 0);
 FUNC_0(FUNC_2(&VAR_0->_count) != 0);
 FUNC_0(FUNC_3(VAR_0) < 0);
 if (VAR_1)
  FUNC_1(&VAR_0->first_page->_count);
 FUNC_1(&VAR_0->_mapcount);
}
