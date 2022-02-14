
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tbl_span {int line; struct tbl_span* next; struct tbl_span* prev; struct tbl_row* layout; int * opts; } ;
struct tbl_row {int dummy; } ;
struct tbl_node {struct tbl_span* last_span; int * current_span; struct tbl_span* first_span; int opts; } ;


 struct tbl_span* FUNC_0 (int,int) ;

__attribute__((used)) static struct tbl_span *
FUNC_1(struct tbl_node *VAR_0, int VAR_1, struct tbl_row *VAR_2)
{
 struct tbl_span *VAR_3;

 VAR_3 = FUNC_0(1, sizeof(*VAR_3));
 VAR_3->line = VAR_1;
 VAR_3->opts = &VAR_0->opts;
 VAR_3->layout = VAR_2;
 VAR_3->prev = VAR_0->last_span;

 if (VAR_3->prev == ((void*)0)) {
  VAR_0->first_span = VAR_3;
  VAR_0->current_span = ((void*)0);
 } else
  VAR_3->prev->next = VAR_3;
 VAR_0->last_span = VAR_3;

 return VAR_3;
}
