
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct passwd {char* pw_dir; } ;
struct TYPE_14__ {char* bp; int len; } ;
struct TYPE_13__ {int argc; TYPE_4__** argv; int iflags; } ;
struct TYPE_12__ {TYPE_1__* frp; int ep; } ;
struct TYPE_11__ {char* name; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EXCMD ;
typedef TYPE_4__ ARGS ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,char*,int ,char*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int *,int ) ;
 char* FUNC_8 (char*) ;
 struct passwd* FUNC_9 (int ) ;
 int FUNC_10 () ;
 char* FUNC_11 (char*,char*) ;
 int FUNC_12 (TYPE_2__*,int ,char*) ;
 int FUNC_13 (TYPE_2__*,int ,char*,char*) ;

int
FUNC_14(SCR *VAR_6, EXCMD *VAR_7)
{
 struct passwd *VAR_8;
 ARGS *VAR_9;
 int VAR_10;
 char *VAR_11, *VAR_12, *VAR_13;
 char *VAR_14;
 size_t VAR_15;







 if (FUNC_1(VAR_6->ep, VAR_1) &&
     !FUNC_0(VAR_7->iflags, VAR_0) && VAR_6->frp->name[0] != '/') {
  FUNC_12(VAR_6, VAR_2,
    "120|File modified since last complete write; write or use ! to override");
  return (1);
 }

 switch (VAR_7->argc) {
 case 0:

  if ((VAR_11 = FUNC_8("HOME")) == ((void*)0)) {
   if ((VAR_8 = FUNC_9(FUNC_10())) == ((void*)0) ||
       VAR_8->pw_dir == ((void*)0) || VAR_8->pw_dir[0] == '\0') {
    FUNC_12(VAR_6, VAR_2,
      "121|Unable to find home directory location");
    return (1);
   }
   VAR_11 = VAR_8->pw_dir;
  }
  break;
 case 1:
  FUNC_2(VAR_6, VAR_7->argv[0]->bp, VAR_7->argv[0]->len + 1,
    VAR_11, VAR_15);
  break;
 default:
  FUNC_4();
 }






 if (!FUNC_5(VAR_11))
  return (0);





 if (VAR_7->argc == 0 ||
     (VAR_9 = VAR_7->argv[0])->bp[0] == '/' ||
     (VAR_9->len == 1 && VAR_9->bp[0] == '.') ||
     (VAR_9->len >= 2 && VAR_9->bp[0] == '.' && VAR_9->bp[1] == '.' &&
     (VAR_9->bp[2] == '/' || VAR_9->bp[2] == '\0')))
  goto err;


 for (VAR_12 = VAR_13 = FUNC_3(VAR_6, VAR_5);; ++VAR_12)
  if (*VAR_12 == '\0' || *VAR_12 == ':') {




   if (VAR_13 < VAR_12 && (VAR_12 - VAR_13 != 1 || *VAR_13 != '.')) {
    VAR_10 = *VAR_12;
    *VAR_12 = '\0';
    if ((VAR_14 = FUNC_11(VAR_13, VAR_11)) == ((void*)0)) {
     FUNC_12(VAR_6, VAR_4, ((void*)0));
     return (1);
    }
    *VAR_12 = VAR_10;
    if (!FUNC_5(VAR_14)) {
     FUNC_6(VAR_14);
     if ((VAR_14 = FUNC_7(((void*)0), 0)) != ((void*)0)) {
  FUNC_13(VAR_6, VAR_3, VAR_14, "122|New current directory: %s");
      FUNC_6(VAR_14);
     }
     return (0);
    }
    FUNC_6(VAR_14);
   }
   VAR_13 = VAR_12 + 1;
   if (*VAR_12 == '\0')
    break;
  }

err: FUNC_13(VAR_6, VAR_4, VAR_11, "%s");
 return (1);
}
