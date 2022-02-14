
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_long ;
typedef int ginfo ;
struct TYPE_11__ {scalar_t__ type; int flags; char* name; struct TYPE_11__* parent; scalar_t__ lineno; struct TYPE_11__* child; struct TYPE_11__* next; } ;
typedef TYPE_1__ NODE ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int VAR_5 ;
 char* FUNC_2 (int *,int *,scalar_t__*,int *,int ) ;
 int FUNC_3 (int ,char*,int ,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ VAR_6 ;
 char* FUNC_8 (char*,size_t) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (char*,TYPE_1__*) ;
 int VAR_7 ;
 char* FUNC_11 (char*,char) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (char*,int ) ;
 char* FUNC_17 (char**,char*) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,TYPE_1__*) ;

NODE *
FUNC_20(FILE *VAR_8)
{
 NODE *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 char *VAR_13, *VAR_14, *VAR_15;
 NODE VAR_16, *VAR_17;
 char *VAR_18, *VAR_19, *VAR_20;
 size_t VAR_21, VAR_22;

 VAR_17 = ((void*)0);
 VAR_9 = VAR_10 = ((void*)0);
 VAR_19 = ((void*)0);
 VAR_21 = 0;
 FUNC_6(&VAR_16, 0, sizeof(VAR_16));
 for (VAR_6 = 0;
     (VAR_18 = FUNC_2(VAR_8, ((void*)0), &VAR_6, ((void*)0),
  VAR_0));
     FUNC_4(VAR_18)) {

  for (VAR_13 = VAR_18; *VAR_13 && FUNC_5((unsigned char)*VAR_13); ++VAR_13)
   continue;


  if (!*VAR_13)
   continue;






  VAR_15 = VAR_18;
  while ((VAR_13 = FUNC_17(&VAR_15, " \t")) != ((void*)0) && *VAR_13 == '\0')
   continue;
  if (VAR_13 == ((void*)0))
   FUNC_7("missing field");

  if (VAR_13[0] == '/') {
   if (FUNC_12(VAR_13 + 1, "set") == 0)
    FUNC_10(VAR_15, &VAR_16);
   else if (FUNC_12(VAR_13 + 1, "unset") == 0)
    FUNC_19(VAR_15, &VAR_16);
   else
    FUNC_7("invalid specification `%s'", VAR_13);
   continue;
  }

  if (FUNC_12(VAR_13, "..") == 0) {

   if (VAR_17 == ((void*)0))
    goto noparent;
   if (VAR_10->type != VAR_1 || VAR_10->flags & VAR_2) {
    if (VAR_10 == VAR_17)
     goto noparent;
    VAR_10 = VAR_10->parent;
   }
   VAR_10->flags |= VAR_2;
   continue;

noparent: FUNC_7("no parent node");
  }

  VAR_22 = FUNC_15(VAR_13) + 1;
  if (VAR_22 > VAR_21) {
   if ((VAR_20 = FUNC_8(VAR_19, VAR_22)) == ((void*)0))
    FUNC_7("realloc: %s", FUNC_14(VAR_5));
   VAR_19 = VAR_20;
   VAR_21 = VAR_22;
  }
  if (FUNC_18(VAR_19, VAR_13) == -1)
   FUNC_7("strunvis failed on `%s'", VAR_13);
  VAR_13 = VAR_19;

  VAR_11 = ((void*)0);
  if (FUNC_11(VAR_13, '/') != ((void*)0)) {
   VAR_12 = VAR_17;
   for (; (VAR_14 = FUNC_11(VAR_13, '/')) != ((void*)0); VAR_13 = VAR_14+1) {
    if (VAR_13 == VAR_14)
     continue;
    *VAR_14 = '\0';
    if (FUNC_12(VAR_13, ".") != 0) {
     while (VAR_12 &&
         FUNC_12(VAR_12->name, VAR_13) != 0) {
      VAR_12 = VAR_12->next;
     }
    }
    if (VAR_12 == ((void*)0) || VAR_12->type != VAR_1) {
     FUNC_7("%s: %s", VAR_19,
     "missing directory in specification");
    }
    *VAR_14 = '/';
    VAR_11 = VAR_12;
    VAR_12 = VAR_12->child;
   }
   if (*VAR_13 == '\0')
    FUNC_7("%s: empty leaf element", VAR_19);
  }

  if ((VAR_9 = FUNC_1(1, sizeof(NODE) + FUNC_15(VAR_13))) == ((void*)0))
   FUNC_7("%s", FUNC_14(VAR_5));
  *VAR_9 = VAR_16;
  VAR_9->lineno = VAR_6;
  FUNC_13(VAR_9->name, VAR_13);

  if (FUNC_16(VAR_13, "?*["))
   VAR_9->flags |= VAR_3;
  FUNC_10(VAR_15, VAR_9);

  if (VAR_17 == ((void*)0)) {







   if (FUNC_12(VAR_9->name, ".") == 0 && VAR_9->type == 0)
    VAR_9->type = VAR_1;
   if (FUNC_12(VAR_9->name, ".") != 0 ||
       VAR_9->type != VAR_1)
    FUNC_7(
        "root node must be the directory `.'");
   VAR_10 = VAR_17 = VAR_9;
   VAR_17->parent = VAR_17;
  } else if (VAR_11 != ((void*)0)) {



   VAR_9->parent = VAR_11;
   FUNC_0(VAR_11, VAR_9);
   VAR_10 = VAR_9;
  } else if (FUNC_12(VAR_9->name, ".") == 0) {



   FUNC_9(VAR_17, VAR_9);
  } else if (VAR_10->type == VAR_1 && !(VAR_10->flags & VAR_2)) {




   VAR_9->parent = VAR_10;
   FUNC_0(VAR_10, VAR_9);
   VAR_10 = VAR_9;
  } else {





   VAR_9->parent = VAR_10->parent;
   FUNC_0(VAR_10->parent, VAR_9);
   VAR_10 = VAR_9;
  }
 }
 return (VAR_17);
}
