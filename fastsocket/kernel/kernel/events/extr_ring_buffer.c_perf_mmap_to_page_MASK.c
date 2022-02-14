
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {unsigned long nr_pages; int * data_pages; int user_page; } ;
struct page {int dummy; } ;


 struct page* FUNC_0 (int ) ;

struct page *
FUNC_1(struct ring_buffer *VAR_0, unsigned long VAR_1)
{
 if (VAR_1 > VAR_0->nr_pages)
  return ((void*)0);

 if (VAR_1 == 0)
  return FUNC_0(VAR_0->user_page);

 return FUNC_0(VAR_0->data_pages[VAR_1 - 1]);
}
