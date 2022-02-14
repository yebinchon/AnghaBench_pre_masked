
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct group {char const* gr_name; } ;
typedef int gid_t ;
struct TYPE_3__ {scalar_t__ valid; int gid; char const* name; } ;
typedef TYPE_1__ GIDC ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct group* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__** VAR_4 ;
 scalar_t__ FUNC_2 () ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char const*,int ,char*,long) ;
 int FUNC_5 (char const*,char const*,int ) ;
 int FUNC_6 (int) ;
 struct group* FUNC_7 (int) ;

const char *
FUNC_8(gid_t VAR_6, int VAR_7)
{
 struct group *VAR_8;
 GIDC *VAR_9, **VAR_10;

 if ((VAR_4 == ((void*)0)) && (FUNC_2() < 0))
  return (((void*)0));




 VAR_10 = VAR_4 + (VAR_6 % VAR_0);
 VAR_9 = *VAR_10;

 if ((VAR_9 != ((void*)0)) && (VAR_9->valid > 0) && (VAR_9->gid == VAR_6)) {



  if (!VAR_7 || (VAR_9->valid == VAR_3))
   return (VAR_9->name);
  return (((void*)0));
 }




 if (!VAR_5) {
  if (&FUNC_1 != ((void*)0))
   FUNC_1)(1);
  ++VAR_5;
 }

 if (VAR_9 == ((void*)0))
  *VAR_10 = VAR_9 = (GIDC *)FUNC_3(sizeof(GIDC));

 if ((VAR_8 = FUNC_0)(VAR_6)) == ((void*)0)) {




  if (VAR_9 == ((void*)0))
   return (((void*)0));
  VAR_9->gid = VAR_6;
  (void)FUNC_4(VAR_9->name, VAR_1, "%lu", (long) VAR_6);
  VAR_9->valid = VAR_2;
  if (VAR_7)
   return (((void*)0));
 } else {



  if (VAR_9 == ((void*)0))
   return (VAR_8->gr_name);
  VAR_9->gid = VAR_6;
  (void)FUNC_5(VAR_9->name, VAR_8->gr_name, VAR_1);
  VAR_9->valid = VAR_3;
 }
 return (VAR_9->name);
}
