
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tbl_span {scalar_t__ pos; struct tbl_row* layout; } ;
struct tbl_row {struct tbl_row* next; struct tbl_cell* first; TYPE_1__* last; } ;
struct TYPE_4__ {scalar_t__ cols; } ;
struct tbl_node {TYPE_2__ opts; struct tbl_row* first_row; struct tbl_span* last_span; } ;
struct tbl_cell {scalar_t__ pos; struct tbl_cell* next; } ;
struct TYPE_3__ {scalar_t__ col; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tbl_node*,struct tbl_span*,int,char const*,int*) ;
 struct tbl_span* FUNC_2 (struct tbl_node*,int,struct tbl_row*) ;

void
FUNC_3(struct tbl_node *VAR_5, int VAR_6, const char *VAR_7, int VAR_8)
{
 struct tbl_row *VAR_9;
 struct tbl_cell *VAR_10;
 struct tbl_span *VAR_11;

 VAR_9 = (VAR_11 = VAR_5->last_span) == ((void*)0) ? VAR_5->first_row :
     VAR_11->pos == VAR_2 && VAR_11->layout->next != ((void*)0) ?
     VAR_11->layout->next : VAR_11->layout;

 FUNC_0(VAR_9 != ((void*)0));

 if (VAR_7[1] == '\0') {
  switch (VAR_7[0]) {
  case '.':






   return;
  case '_':
   VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_9);
   VAR_11->pos = VAR_4;
   return;
  case '=':
   VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_9);
   VAR_11->pos = VAR_3;
   return;
  default:
   break;
  }
 }







 while (VAR_9->next != ((void*)0)) {
  if (VAR_9->last->col + 1 < VAR_5->opts.cols)
   break;
  for (VAR_10 = VAR_9->first; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
   if (VAR_10->pos != VAR_1 &&
       VAR_10->pos != VAR_0)
    break;
  if (VAR_10 != ((void*)0))
   break;
  VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_9);
  VAR_11->pos = VAR_2;
  VAR_9 = VAR_9->next;
 }



 VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_9);
 VAR_11->pos = VAR_2;
 while (VAR_7[VAR_8] != '\0')
  FUNC_1(VAR_5, VAR_11, VAR_6, VAR_7, &VAR_8);
}
