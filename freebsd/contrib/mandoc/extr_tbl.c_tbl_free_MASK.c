
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tbl_span {struct tbl_span* next; struct tbl_span* string; struct tbl_span* first; struct tbl_span* first_span; struct tbl_span* wstr; struct tbl_span* first_row; } ;
struct tbl_row {struct tbl_row* next; struct tbl_row* string; struct tbl_row* first; struct tbl_row* first_span; struct tbl_row* wstr; struct tbl_row* first_row; } ;
struct tbl_node {struct tbl_node* next; struct tbl_node* string; struct tbl_node* first; struct tbl_node* first_span; struct tbl_node* wstr; struct tbl_node* first_row; } ;
struct tbl_dat {struct tbl_dat* next; struct tbl_dat* string; struct tbl_dat* first; struct tbl_dat* first_span; struct tbl_dat* wstr; struct tbl_dat* first_row; } ;
struct tbl_cell {struct tbl_cell* next; struct tbl_cell* string; struct tbl_cell* first; struct tbl_cell* first_span; struct tbl_cell* wstr; struct tbl_cell* first_row; } ;


 int FUNC_0 (struct tbl_span*) ;

void
FUNC_1(struct tbl_node *VAR_0)
{
 struct tbl_node *VAR_1;
 struct tbl_row *VAR_2;
 struct tbl_cell *VAR_3;
 struct tbl_span *VAR_4;
 struct tbl_dat *VAR_5;

 while (VAR_0 != ((void*)0)) {
  while ((VAR_2 = VAR_0->first_row) != ((void*)0)) {
   VAR_0->first_row = VAR_2->next;
   while (VAR_2->first != ((void*)0)) {
    VAR_3 = VAR_2->first;
    VAR_2->first = VAR_3->next;
    FUNC_0(VAR_3->wstr);
    FUNC_0(VAR_3);
   }
   FUNC_0(VAR_2);
  }
  while ((VAR_4 = VAR_0->first_span) != ((void*)0)) {
   VAR_0->first_span = VAR_4->next;
   while (VAR_4->first != ((void*)0)) {
    VAR_5 = VAR_4->first;
    VAR_4->first = VAR_5->next;
    FUNC_0(VAR_5->string);
    FUNC_0(VAR_5);
   }
   FUNC_0(VAR_4);
  }
  VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1);
 }
}
