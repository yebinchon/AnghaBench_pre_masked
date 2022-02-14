
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int commands; } ;
struct TYPE_9__ {int type; int flags; char* fname; int lineno; char* name; int children; int commands; } ;
typedef TYPE_1__ GNode ;
typedef int Boolean ;


 TYPE_4__* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,int ,TYPE_1__*,int ) ;
 int FUNC_6 (int ,TYPE_1__*,char**) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,char*,char const*,...) ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 void FUNC_10 (char const*,...) ;

Boolean
FUNC_11(GNode *VAR_13, void (*VAR_14)(const char *, ...))
{
    if (FUNC_4(VAR_13->type) && FUNC_2(VAR_13->commands) &&
 ((VAR_13->type & VAR_4) == 0 || FUNC_2(VAR_13->children))) {




 if ((VAR_0 != ((void*)0)) && !FUNC_2(VAR_0->commands) &&
  (VAR_13->type & VAR_6) == 0) {
     char *VAR_15;
     FUNC_3(VAR_0, VAR_13);
     FUNC_5(VAR_3, FUNC_6(VAR_7, VAR_13, &VAR_15), VAR_13, 0);
     FUNC_9(VAR_15);
 } else if (FUNC_0(VAR_13, 0) == 0 && (VAR_13->type & VAR_6) == 0) {







     static const char VAR_16[] = ": don't know how to make";

     if (VAR_13->flags & VAR_2) {
  if (!FUNC_1(".STALE", VAR_13->fname))
      FUNC_8(VAR_12, "%s: %s, %d: ignoring stale %s for %s\n",
   VAR_11, VAR_13->fname, VAR_13->lineno, VAR_10,
   VAR_13->name);
  return VAR_8;
     }

     if (VAR_13->type & VAR_5) {
  (void)FUNC_8(VAR_12, "%s%s %s (ignored)\n", VAR_11,
      VAR_16, VAR_13->name);
  (void)FUNC_7(VAR_12);
     } else if (VAR_9) {
  (void)FUNC_8(VAR_12, "%s%s %s (continuing)\n", VAR_11,
      VAR_16, VAR_13->name);
  (void)FUNC_7(VAR_12);
    return VAR_1;
     } else {
  (*VAR_14)("%s%s %s. Stop", VAR_11, VAR_16, VAR_13->name);
  return VAR_1;
     }
 }
    }
    return VAR_8;
}
