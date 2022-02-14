
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tbl_row {int vert; TYPE_1__* last; } ;
struct tbl_node {struct tbl_row* first_row; } ;
typedef enum tbl_cellt { ____Placeholder_tbl_cellt } tbl_cellt ;
struct TYPE_4__ {scalar_t__ name; int key; } ;
struct TYPE_3__ {scalar_t__ pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct tbl_node*,struct tbl_row*,int) ;
 TYPE_2__* VAR_9 ;
 int FUNC_1 (int ,int,int,char*,...) ;
 int FUNC_2 (struct tbl_node*,int ,int,char const*,int*) ;
 scalar_t__ FUNC_3 (unsigned char) ;

__attribute__((used)) static void
FUNC_4(struct tbl_node *VAR_10, struct tbl_row *VAR_11,
  int VAR_12, const char *VAR_13, int *VAR_14)
{
 int VAR_15;
 enum tbl_cellt VAR_16;



 while (VAR_13[*VAR_14] == ' ' || VAR_13[*VAR_14] == '\t' || VAR_13[*VAR_14] == '|') {
  if (VAR_13[*VAR_14] == '|') {
   if (VAR_11->vert < 2)
    VAR_11->vert++;
   else
    FUNC_1(VAR_4,
        VAR_12, *VAR_14, ((void*)0));
  }
  (*VAR_14)++;
 }

again:
 while (VAR_13[*VAR_14] == ' ' || VAR_13[*VAR_14] == '\t')
  (*VAR_14)++;

 if (VAR_13[*VAR_14] == '.' || VAR_13[*VAR_14] == '\0')
  return;



 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++)
  if (FUNC_3((unsigned char)VAR_13[*VAR_14]) == VAR_9[VAR_15].name)
   break;

 if (VAR_15 == VAR_0) {
  FUNC_1(VAR_1,
      VAR_12, *VAR_14, "%c", VAR_13[*VAR_14]);
  (*VAR_14)++;
  goto again;
 }
 VAR_16 = VAR_9[VAR_15].key;



 if (VAR_16 == VAR_8) {
  if (VAR_11->last == ((void*)0))
   FUNC_1(VAR_3, VAR_12, *VAR_14, ((void*)0));
  else if (VAR_11->last->pos == VAR_7 ||
      VAR_11->last->pos == VAR_5)
   VAR_16 = VAR_11->last->pos;
 } else if (VAR_16 == VAR_6 && VAR_11 == VAR_10->first_row)
  FUNC_1(VAR_2, VAR_12, *VAR_14, ((void*)0));

 (*VAR_14)++;



 FUNC_2(VAR_10, FUNC_0(VAR_10, VAR_11, VAR_16), VAR_12, VAR_13, VAR_14);
}
