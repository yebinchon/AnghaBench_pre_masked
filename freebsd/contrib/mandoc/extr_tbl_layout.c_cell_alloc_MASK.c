
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tbl_row {struct tbl_cell* last; struct tbl_cell* first; } ;
struct TYPE_2__ {scalar_t__ cols; } ;
struct tbl_node {TYPE_1__ opts; } ;
struct tbl_cell {int pos; scalar_t__ col; struct tbl_cell* next; int spacing; } ;
typedef enum tbl_cellt { ____Placeholder_tbl_cellt } tbl_cellt ;


 int VAR_0 ;
 struct tbl_cell* FUNC_0 (int,int) ;

__attribute__((used)) static struct tbl_cell *
FUNC_1(struct tbl_node *VAR_1, struct tbl_row *VAR_2, enum tbl_cellt VAR_3)
{
 struct tbl_cell *VAR_4, *VAR_5;

 VAR_4 = FUNC_0(1, sizeof(*VAR_4));
 VAR_4->spacing = VAR_0;
 VAR_4->pos = VAR_3;

 if ((VAR_5 = VAR_2->last) != ((void*)0)) {
  VAR_5->next = VAR_4;
  VAR_4->col = VAR_5->col + 1;
 } else
  VAR_2->first = VAR_4;
 VAR_2->last = VAR_4;

 if (VAR_1->opts.cols <= VAR_4->col)
  VAR_1->opts.cols = VAR_4->col + 1;

 return VAR_4;
}
