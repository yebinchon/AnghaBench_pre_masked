
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vbuf ;
struct tbl_span {scalar_t__ pos; struct tbl_span* next; struct tbl_dat* first; TYPE_1__* layout; } ;
struct tbl_dat {int hspans; scalar_t__ vspans; int * string; struct tbl_cell* layout; struct tbl_dat* next; } ;
struct tbl_cell {int pos; int flags; int vert; struct tbl_cell* next; } ;
struct tag {int dummy; } ;
struct TYPE_4__ {int * cols; } ;
struct html {TYPE_2__ tbl; int flags; int * tblt; } ;
typedef int hbuf ;
struct TYPE_3__ {int vert; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct html*,struct tbl_span const*) ;
 struct tag* FUNC_3 (struct html*,int ,char*,char*,char const*,char*,char const*,...) ;
 int FUNC_4 (struct html*,struct tag*) ;
 int FUNC_5 (struct html*,struct tag*) ;
 int FUNC_6 (struct html*) ;
 int FUNC_7 (struct html*,int *) ;
 int FUNC_8 (char*,int,char*,int) ;
 scalar_t__ FUNC_9 (int *,char*) ;

void
FUNC_10(struct html *VAR_9, const struct tbl_span *VAR_10)
{
 const struct tbl_dat *VAR_11;
 const struct tbl_cell *VAR_12;
 const struct tbl_span *VAR_13;
 struct tag *VAR_14;
 const char *VAR_15, *VAR_16, *VAR_17, *VAR_18;
 const char *VAR_19, *VAR_20, *VAR_21;
 char VAR_22[4], VAR_23[4];
 int VAR_24;

 if (VAR_9->tblt == ((void*)0))
  FUNC_2(VAR_9, VAR_10);






 if (VAR_10->pos != VAR_8)
  return;



 VAR_9->flags |= VAR_0;
 VAR_9->flags |= VAR_1;



 switch (VAR_10->layout->vert) {
 case 2:
  VAR_20 = "double";
  break;
 case 1:
  VAR_20 = "solid";
  break;
 default:
  VAR_20 = ((void*)0);
  break;
 }



 VAR_19 = ((void*)0);
 if ((VAR_13 = VAR_10->next) != ((void*)0)) {
  switch (VAR_13->pos) {
  case 129:
   VAR_19 = "double";
   break;
  case 128:
   VAR_19 = "solid";
   break;
  default:
   break;
  }
 }

 VAR_14 = FUNC_3(VAR_9, VAR_3, "ss",
     "border-left-style", VAR_20,
     "border-bottom-style", VAR_19);

 for (VAR_11 = VAR_10->first; VAR_11 != ((void*)0); VAR_11 = VAR_11->next) {
  FUNC_4(VAR_9, VAR_14);







  VAR_12 = VAR_11->layout;
  if (VAR_12->pos == VAR_6 || VAR_12->pos == VAR_5 ||
      (VAR_11->string != ((void*)0) && FUNC_9(VAR_11->string, "\\^") == 0))
   continue;



  if (VAR_11->hspans > 0) {
   (void)FUNC_8(VAR_22, sizeof(VAR_22),
       "%d", VAR_11->hspans + 1);
   VAR_15 = VAR_22;
  } else
   VAR_15 = ((void*)0);
  if (VAR_11->vspans > 0) {
   (void)FUNC_8(VAR_23, sizeof(VAR_23),
       "%d", VAR_11->vspans + 1);
   VAR_16 = VAR_23;
  } else
   VAR_16 = ((void*)0);

  switch (VAR_12->pos) {
  case 132:
   VAR_17 = "center";
   break;
  case 130:
  case 131:
   VAR_17 = "right";
   break;
  default:
   VAR_17 = ((void*)0);
   break;
  }
  if (VAR_12->flags & VAR_7)
   VAR_18 = "top";
  else if (VAR_12->flags & VAR_4)
   VAR_18 = "bottom";
  else
   VAR_18 = ((void*)0);

  for (VAR_24 = VAR_11->hspans; VAR_24 > 0; VAR_24--)
   VAR_12 = VAR_12->next;
  switch (VAR_12->vert) {
  case 2:
   VAR_21 = "double";
   break;
  case 1:
   VAR_21 = "solid";
   break;
  default:
   VAR_21 = ((void*)0);
   break;
  }



  FUNC_3(VAR_9, VAR_2, "??sss",
      "colspan", VAR_15, "rowspan", VAR_16,
      "vertical-align", VAR_18,
      "text-align", VAR_17,
      "border-right-style", VAR_21);
  if (VAR_11->string != ((void*)0))
   FUNC_7(VAR_9, VAR_11->string);
 }

 FUNC_5(VAR_9, VAR_14);

 VAR_9->flags &= ~VAR_0;

 if (VAR_10->next == ((void*)0)) {
  FUNC_0(VAR_9->tbl.cols);
  FUNC_1(VAR_9->tbl.cols);
  VAR_9->tbl.cols = ((void*)0);
  FUNC_6(VAR_9);
 }
}
