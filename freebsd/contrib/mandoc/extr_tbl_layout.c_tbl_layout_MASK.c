
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tbl_row {struct tbl_row* next; int * first; TYPE_2__* last; int vert; } ;
struct TYPE_3__ {int rvert; int cols; int lvert; } ;
struct tbl_node {struct tbl_row* last_row; struct tbl_row* first_row; TYPE_1__ opts; int part; } ;
struct TYPE_4__ {int vert; int col; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tbl_node*,struct tbl_row*,int,char const*,int*) ;
 int FUNC_1 (struct tbl_node*,struct tbl_row*,int ) ;
 int FUNC_2 (struct tbl_row*) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (int ,int,int,int *) ;

void
FUNC_5(struct tbl_node *VAR_3, int VAR_4, const char *VAR_5, int VAR_6)
{
 struct tbl_row *VAR_7;

 VAR_7 = ((void*)0);
 for (;;) {


  while (VAR_5[VAR_6] == ' ' || VAR_5[VAR_6] == '\t')
   VAR_6++;

  switch (VAR_5[VAR_6]) {
  case ',':
   VAR_6++;
   VAR_7 = ((void*)0);
   continue;
  case '\0':
   return;
  case '.':
   VAR_6++;
   VAR_3->part = VAR_2;






   if (VAR_3->first_row == ((void*)0)) {
    VAR_3->first_row = VAR_3->last_row =
        FUNC_3(1, sizeof(*VAR_7));
   }
   if (VAR_3->first_row->first == ((void*)0)) {
    FUNC_4(VAR_0,
        VAR_4, VAR_6, ((void*)0));
    FUNC_1(VAR_3, VAR_3->first_row,
        VAR_1);
    if (VAR_3->opts.lvert < VAR_3->first_row->vert)
     VAR_3->opts.lvert = VAR_3->first_row->vert;
    return;
   }






   for (VAR_7 = VAR_3->first_row; VAR_7; VAR_7 = VAR_7->next) {
    if (VAR_3->opts.lvert < VAR_7->vert)
     VAR_3->opts.lvert = VAR_7->vert;
    if (VAR_7->last != ((void*)0) &&
        VAR_7->last->col + 1 == VAR_3->opts.cols &&
        VAR_3->opts.rvert < VAR_7->last->vert)
     VAR_3->opts.rvert = VAR_7->last->vert;



    if (VAR_7->next != ((void*)0) &&
        VAR_7->next->first == ((void*)0)) {
     FUNC_2(VAR_7->next);
     VAR_7->next = ((void*)0);
     VAR_3->last_row = VAR_7;
    }
   }
   return;
  default:
   break;
  }






  if (VAR_7 == ((void*)0)) {
   if (VAR_3->last_row == ((void*)0) ||
       VAR_3->last_row->first != ((void*)0)) {
    VAR_7 = FUNC_3(1, sizeof(*VAR_7));
    if (VAR_3->last_row)
     VAR_3->last_row->next = VAR_7;
    else
     VAR_3->first_row = VAR_7;
    VAR_3->last_row = VAR_7;
   } else
    VAR_7 = VAR_3->last_row;
  }
  FUNC_0(VAR_3, VAR_7, VAR_4, VAR_5, &VAR_6);
 }
}
