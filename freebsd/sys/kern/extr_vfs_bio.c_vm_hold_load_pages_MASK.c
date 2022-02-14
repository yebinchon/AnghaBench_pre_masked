
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef scalar_t__ vm_offset_t ;
struct buf {int b_npages; int * b_pages; scalar_t__ b_data; } ;


 int FUNC_0 (struct buf*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct buf *VAR_6, vm_offset_t VAR_7, vm_offset_t VAR_8)
{
 vm_offset_t VAR_9;
 vm_page_t VAR_10;
 int VAR_11;

 FUNC_0(VAR_6);

 VAR_8 = FUNC_3(VAR_8);
 VAR_7 = FUNC_3(VAR_7);
 VAR_11 = (VAR_7 - FUNC_4((vm_offset_t)VAR_6->b_data)) >> VAR_0;

 for (VAR_9 = VAR_7; VAR_9 < VAR_8; VAR_9 += VAR_1, VAR_11++) {





  VAR_10 = FUNC_5(((void*)0), 0, VAR_3 | VAR_2 |
      VAR_5 | FUNC_1((VAR_8 - VAR_9) >> VAR_0) |
      VAR_4);
  FUNC_2(VAR_9, &VAR_10, 1);
  VAR_6->b_pages[VAR_11] = VAR_10;
 }
 VAR_6->b_npages = VAR_11;
}
