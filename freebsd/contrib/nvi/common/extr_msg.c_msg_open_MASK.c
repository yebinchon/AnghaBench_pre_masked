
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int nl_catd ;
struct TYPE_7__ {int catd; } ;
struct TYPE_6__ {TYPE_5__* gp; } ;
typedef TYPE_1__ SCR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_1__*,int ,int *) ;
 int FUNC_5 (TYPE_1__*,int ,char*,char*) ;
 char* FUNC_6 (int ,int *) ;
 char* FUNC_7 (char*,char) ;

int
FUNC_8(
 SCR *VAR_6,
 char *VAR_7)
{
 static int VAR_8 = 1;
 nl_catd VAR_9;
 char *VAR_10;
 int VAR_11 = 0;

 if ((VAR_10 = FUNC_7(VAR_7, '/')) != ((void*)0) && VAR_10[1] == '\0') {

  if ((VAR_10 = FUNC_2(VAR_7, FUNC_6(VAR_1, ((void*)0)))) == ((void*)0)) {
   FUNC_4(VAR_6, VAR_3, ((void*)0));
   return (1);
  }
 } else {

  if ((VAR_10 = FUNC_2(".", VAR_7)) == ((void*)0)) {
   FUNC_4(VAR_6, VAR_3, ((void*)0));
   return (1);
  }
 }
 VAR_5 = 0;
 if ((VAR_9 = FUNC_0(VAR_10, VAR_4)) == (nl_catd)-1) {
  if (VAR_8) {
   VAR_8 = 0;
   VAR_11 = 1;
   goto ret;
  }






  if (VAR_5 == 0 || VAR_5 == VAR_0)
   FUNC_5(VAR_6, VAR_2, VAR_10,
       "030|The file %s is not a message catalog");
  else
   FUNC_5(VAR_6, VAR_3, VAR_10, "%s");
  VAR_11 = 1;
  goto ret;
 }
 VAR_8 = 0;

 FUNC_3(VAR_6->gp);
 VAR_6->gp->catd = VAR_9;
ret: FUNC_1(VAR_10);
 return (VAR_11);
}
