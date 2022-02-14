
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct buf {int b_npages; scalar_t__ b_data; int b_pages; } ;


 scalar_t__ FUNC_0 (struct buf*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int) ;

void
FUNC_4(struct buf *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->b_npages;
 if (FUNC_0(VAR_1))
  FUNC_1(FUNC_2((vm_offset_t)VAR_1->b_data), VAR_2);
 FUNC_3(VAR_1->b_pages, VAR_2);

 VAR_1->b_data = VAR_0;
}
