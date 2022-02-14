
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
struct passwd {int pw_uid; } ;
struct TYPE_3__ {scalar_t__ valid; char* name; int uid; } ;
typedef TYPE_1__ UIDC ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct passwd* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 TYPE_1__** VAR_5 ;
 scalar_t__ FUNC_7 () ;

int
FUNC_8(char *VAR_6, uid_t *VAR_7)
{
 struct passwd *VAR_8;
 UIDC *VAR_9;
 int VAR_10;




 if (((VAR_10 = FUNC_5(VAR_6)) == 0) || (VAR_6[0] == '\0'))
  return(-1);
 if ((VAR_5 == ((void*)0)) && (FUNC_7() < 0))
  return(-1);





 VAR_9 = VAR_5[FUNC_3(VAR_6, VAR_10, VAR_2)];
 if ((VAR_9 != ((void*)0)) && (VAR_9->valid > 0) && !FUNC_4(VAR_6, VAR_9->name)) {
  if (VAR_9->valid == VAR_0)
   return(-1);
  *VAR_7 = VAR_9->uid;
  return(0);
 }

 if (!VAR_4) {
  FUNC_2(1);
  ++VAR_4;
 }

 if (VAR_9 == ((void*)0))
  VAR_9 = VAR_5[FUNC_3(VAR_6, VAR_10, VAR_2)] =
    (UIDC *)FUNC_1(sizeof(UIDC));





 if (VAR_9 == ((void*)0)) {
  if ((VAR_8 = FUNC_0(VAR_6)) == ((void*)0))
   return(-1);
  *VAR_7 = VAR_8->pw_uid;
  return(0);
 }
 (void)FUNC_6(VAR_9->name, VAR_6, VAR_1 - 1);
 VAR_9->name[VAR_1-1] = '\0';
 if ((VAR_8 = FUNC_0(VAR_6)) == ((void*)0)) {
  VAR_9->valid = VAR_0;
  return(-1);
 }
 VAR_9->valid = VAR_3;
 *VAR_7 = VAR_9->uid = VAR_8->pw_uid;
 return(0);
}
