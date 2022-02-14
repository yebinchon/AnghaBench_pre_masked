
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct TYPE_2__ {int * gids; } ;
struct listinfo {scalar_t__ count; scalar_t__ maxcount; TYPE_1__ l; int lname; } ;
struct group {int gr_gid; } ;
typedef int gid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct listinfo*) ;
 struct group* FUNC_1 (int ) ;
 struct group* FUNC_2 (char const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char**,int) ;
 int FUNC_5 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_6(struct listinfo *VAR_4, const char *VAR_5)
{
 struct group *VAR_6;
 const char *VAR_7;
 char *VAR_8;
 u_long VAR_9;

 if (*VAR_5 == '\0' || FUNC_3(VAR_5) >= VAR_1) {
  if (*VAR_5 == '\0')
   FUNC_5("Invalid (zero-length) %s name", VAR_4->lname);
  else
   FUNC_5("%s name too long: %s", VAR_4->lname, VAR_5);
  VAR_3 = 1;
  return (0);
 }
 VAR_6 = ((void*)0);
 VAR_7 = "named";
 VAR_2 = 0;
 VAR_9 = FUNC_4(VAR_5, &VAR_8, 10);
 if (VAR_2 == 0 && *VAR_8 == '\0' && VAR_9 <= VAR_0) {
  VAR_7 = "name or ID matches";
  VAR_6 = FUNC_1((gid_t)VAR_9);
 }
 if (VAR_6 == ((void*)0))
  VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 == ((void*)0)) {
  FUNC_5("No %s %s '%s'", VAR_4->lname, VAR_7, VAR_5);
  VAR_3 = 1;
  return (0);
 }
 if (VAR_4->count >= VAR_4->maxcount)
  FUNC_0(VAR_4);
 VAR_4->l.gids[(VAR_4->count)++] = VAR_6->gr_gid;
 return (1);
}
