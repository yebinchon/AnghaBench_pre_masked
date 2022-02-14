
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
struct passwd {char const* pw_name; } ;
struct TYPE_3__ {scalar_t__ valid; int uid; char const* name; } ;
typedef TYPE_1__ UIDC ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct passwd* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (char const*,int ,char*,long) ;
 int FUNC_4 (char const*,char const*,int ) ;
 int FUNC_5 (int) ;
 struct passwd* FUNC_6 (int) ;
 TYPE_1__** VAR_5 ;
 scalar_t__ FUNC_7 () ;

const char *
FUNC_8(uid_t VAR_6, int VAR_7)
{
 struct passwd *VAR_8;
 UIDC *VAR_9, **VAR_10;

 if ((VAR_5 == ((void*)0)) && (FUNC_7() < 0))
  return (((void*)0));




 VAR_10 = VAR_5 + (VAR_6 % VAR_1);
 VAR_9 = *VAR_10;

 if ((VAR_9 != ((void*)0)) && (VAR_9->valid > 0) && (VAR_9->uid == VAR_6)) {



  if (!VAR_7 || (VAR_9->valid == VAR_3))
   return (VAR_9->name);
  return (((void*)0));
 }




 if (!VAR_4) {
  if (&FUNC_1 != ((void*)0))
   FUNC_1)(1);
  ++VAR_4;
 }

 if (VAR_9 == ((void*)0))
  *VAR_10 = VAR_9 = (UIDC *)FUNC_2(sizeof(UIDC));

 if ((VAR_8 = FUNC_0)(VAR_6)) == ((void*)0)) {




  if (VAR_9 == ((void*)0))
   return (((void*)0));
  VAR_9->uid = VAR_6;
  (void)FUNC_3(VAR_9->name, VAR_2, "%lu", (long) VAR_6);
  VAR_9->valid = VAR_0;
  if (VAR_7)
   return (((void*)0));
 } else {



  if (VAR_9 == ((void*)0))
   return (VAR_8->pw_name);
  VAR_9->uid = VAR_6;
  (void)FUNC_4(VAR_9->name, VAR_8->pw_name, VAR_2);
  VAR_9->valid = VAR_3;
 }
 return (VAR_9->name);
}
