
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
typedef scalar_t__ u_long ;
struct passwd {int pw_uid; } ;
struct TYPE_2__ {int * uids; } ;
struct listinfo {scalar_t__ count; scalar_t__ maxcount; TYPE_1__ l; int lname; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct listinfo*) ;
 struct passwd* FUNC_1 (char const*) ;
 struct passwd* FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char**,int) ;
 int FUNC_5 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_6(struct listinfo *VAR_4, const char *VAR_5)
{
 struct passwd *VAR_6;
 char *VAR_7;
 u_long VAR_8;

 if (*VAR_5 == '\0' || FUNC_3(VAR_5) >= VAR_0) {
  if (*VAR_5 == '\0')
   FUNC_5("Invalid (zero-length) %s name", VAR_4->lname);
  else
   FUNC_5("%s name too long: %s", VAR_4->lname, VAR_5);
  VAR_3 = 1;
  return (0);
 }

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 == ((void*)0)) {
  VAR_2 = 0;
  VAR_8 = FUNC_4(VAR_5, &VAR_7, 10);
  if (VAR_2 != 0 || *VAR_7 != '\0' || VAR_8 > VAR_1)
   FUNC_5("No %s named '%s'", VAR_4->lname, VAR_5);
  else {

   VAR_6 = FUNC_2((uid_t)VAR_8);
   if (VAR_6 == ((void*)0))
    FUNC_5("No %s name or ID matches '%s'",
        VAR_4->lname, VAR_5);
  }
 }
 if (VAR_6 == ((void*)0)) {





  VAR_3 = 1;
  return (0);
 }
 if (VAR_4->count >= VAR_4->maxcount)
  FUNC_0(VAR_4);
 VAR_4->l.uids[(VAR_4->count)++] = VAR_6->pw_uid;
 return (1);
}
