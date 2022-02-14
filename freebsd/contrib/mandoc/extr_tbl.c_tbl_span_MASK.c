
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tbl_span {struct tbl_span* next; } ;
struct tbl_node {struct tbl_span* current_span; struct tbl_span* first_span; } ;



struct tbl_span *
FUNC_0(struct tbl_node *VAR_0)
{
 struct tbl_span *VAR_1;

 VAR_1 = VAR_0->current_span ? VAR_0->current_span->next
     : VAR_0->first_span;
 if (VAR_1 != ((void*)0))
  VAR_0->current_span = VAR_1;
 return VAR_1;
}
