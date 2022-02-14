
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparse_block {int is_hole; struct sparse_block* next; void* remaining; void* offset; } ;
struct pax {struct sparse_block* sparse_tail; struct sparse_block* sparse_list; } ;
typedef void* int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct pax *VAR_2, int64_t VAR_3, int64_t VAR_4,
    int VAR_5)
{
 struct sparse_block *VAR_6;

 VAR_6 = (struct sparse_block *)FUNC_0(sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return (VAR_0);
 VAR_6->next = ((void*)0);
 VAR_6->is_hole = VAR_5;
 VAR_6->offset = VAR_3;
 VAR_6->remaining = VAR_4;
 if (VAR_2->sparse_list == ((void*)0) || VAR_2->sparse_tail == ((void*)0))
  VAR_2->sparse_list = VAR_2->sparse_tail = VAR_6;
 else {
  VAR_2->sparse_tail->next = VAR_6;
  VAR_2->sparse_tail = VAR_6;
 }
 return (VAR_1);
}
