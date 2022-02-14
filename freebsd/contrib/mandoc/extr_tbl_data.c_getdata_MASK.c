
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tbl_span {struct tbl_dat* last; struct tbl_dat* first; struct tbl_span* prev; TYPE_3__* layout; TYPE_2__* opts; } ;
struct TYPE_4__ {char const tab; } ;
struct tbl_node {int part; TYPE_1__ opts; } ;
struct tbl_dat {char* string; scalar_t__ pos; struct tbl_cell* layout; struct tbl_dat* next; scalar_t__ hspans; scalar_t__ vspans; scalar_t__ block; } ;
struct tbl_cell {scalar_t__ pos; scalar_t__ col; struct tbl_cell* next; } ;
struct TYPE_6__ {struct tbl_cell* last; struct tbl_cell* first; } ;
struct TYPE_5__ {scalar_t__ cols; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 struct tbl_cell* FUNC_0 (int,int) ;
 struct tbl_dat* FUNC_1 (int) ;
 int FUNC_2 (int ,int,int,char*,char const*) ;
 char* FUNC_3 (char const*,int) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static void
FUNC_5(struct tbl_node *VAR_14, struct tbl_span *VAR_15,
  int VAR_16, const char *VAR_17, int *VAR_18)
{
 struct tbl_dat *VAR_19, *VAR_20;
 struct tbl_cell *VAR_21;
 struct tbl_span *VAR_22;
 int VAR_23;






 VAR_23 = *VAR_18;
 while (VAR_17[*VAR_18] != '\0' && VAR_17[*VAR_18] != VAR_14->opts.tab)
  (*VAR_18)++;



 VAR_21 = VAR_15->last == ((void*)0) ? VAR_15->layout->first : VAR_15->last->layout->next;
 while (VAR_21 != ((void*)0) && VAR_21->pos == VAR_6)
  VAR_21 = VAR_21->next;
 if (VAR_21 == ((void*)0)) {
  if (VAR_15->layout->last->col + 1 < VAR_15->opts->cols) {
   VAR_21 = FUNC_0(1, sizeof(*VAR_21));
   VAR_21->pos = VAR_5;
   VAR_15->layout->last->next = VAR_21;
   VAR_21->col = VAR_15->layout->last->col + 1;
   VAR_15->layout->last = VAR_21;
  } else {
   FUNC_2(VAR_0,
       VAR_16, VAR_23, "%s", VAR_17 + VAR_23);
   while (VAR_17[*VAR_18] != '\0')
    (*VAR_18)++;
   return;
  }
 }

 VAR_19 = FUNC_1(sizeof(*VAR_19));
 VAR_19->layout = VAR_21;
 VAR_19->next = ((void*)0);
 VAR_19->string = ((void*)0);
 VAR_19->hspans = 0;
 VAR_19->vspans = 0;
 VAR_19->block = 0;
 VAR_19->pos = VAR_12;
 if (VAR_21->pos == VAR_3 ||
     (*VAR_18 - VAR_23 == 2 && VAR_17[VAR_23] == '\\' && VAR_17[VAR_23 + 1] == '^')) {
  VAR_22 = VAR_15;
  while ((VAR_22 = VAR_22->prev) != ((void*)0)) {
   VAR_20 = VAR_22->first;
   while (VAR_20 != ((void*)0) &&
       VAR_20->layout->col < VAR_19->layout->col)
    VAR_20 = VAR_20->next;
   if (VAR_20 == ((void*)0))
    break;
   if (VAR_20->layout->pos != VAR_3 &&
       FUNC_4(VAR_20->string, "\\^") != 0) {
    VAR_20->vspans++;
    break;
   }
  }
 }






 for (VAR_21 = VAR_21->next; VAR_21 != ((void*)0); VAR_21 = VAR_21->next)
  if (VAR_21->pos == VAR_6)
   VAR_19->hspans++;
  else
   break;



 if (VAR_15->last == ((void*)0))
  VAR_15->first = VAR_19;
 else
  VAR_15->last->next = VAR_19;
 VAR_15->last = VAR_19;







 if (*VAR_18 - VAR_23 == 2 && VAR_17[VAR_23] == 'T' && VAR_17[VAR_23 + 1] == '{') {
  VAR_14->part = VAR_13;
  return;
 }

 VAR_19->string = FUNC_3(VAR_17 + VAR_23, *VAR_18 - VAR_23);

 if (VAR_17[*VAR_18] != '\0')
  (*VAR_18)++;

 if ( ! FUNC_4(VAR_19->string, "_"))
  VAR_19->pos = VAR_9;
 else if ( ! FUNC_4(VAR_19->string, "="))
  VAR_19->pos = VAR_8;
 else if ( ! FUNC_4(VAR_19->string, "\\_"))
  VAR_19->pos = VAR_11;
 else if ( ! FUNC_4(VAR_19->string, "\\="))
  VAR_19->pos = VAR_10;
 else
  VAR_19->pos = VAR_7;

 if ((VAR_19->layout->pos == VAR_4 ||
     VAR_19->layout->pos == VAR_2 ||
     VAR_19->layout->pos == VAR_3) &&
     VAR_19->pos == VAR_7 && *VAR_19->string != '\0')
  FUNC_2(VAR_1,
      VAR_16, VAR_23, "%s", VAR_19->string);
}
