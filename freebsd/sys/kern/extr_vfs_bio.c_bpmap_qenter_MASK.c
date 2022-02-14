
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct buf {int b_offset; void* b_data; int b_npages; int b_pages; } ;
typedef void* caddr_t ;


 int FUNC_0 (struct buf*) ;
 int VAR_0 ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct buf *VAR_1)
{

 FUNC_0(VAR_1);





 VAR_1->b_data = (caddr_t)FUNC_2((vm_offset_t)VAR_1->b_data);
 FUNC_1((vm_offset_t)VAR_1->b_data, VAR_1->b_pages, VAR_1->b_npages);
 VAR_1->b_data = (caddr_t)((vm_offset_t)VAR_1->b_data |
     (vm_offset_t)(VAR_1->b_offset & VAR_0));
}
