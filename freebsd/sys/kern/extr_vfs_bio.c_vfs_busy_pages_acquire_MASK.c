
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int b_npages; int * b_pages; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

void
FUNC_1(struct buf *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->b_npages; VAR_2++)
  FUNC_0(VAR_1->b_pages[VAR_2], VAR_0);
}
