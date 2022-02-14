
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_3__ {scalar_t__ tgw; } ;
typedef int SCR ;
typedef TYPE_1__ CL_PRIVATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ,char*,...) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 char* FUNC_3 (int ) ;

int
FUNC_4(SCR *VAR_6, CL_PRIVATE *VAR_7, int VAR_8)
{
 struct stat VAR_9;
 char *VAR_10;


 if ((VAR_10 = FUNC_3(VAR_1)) == ((void*)0)) {
  if (VAR_6 != ((void*)0))
   FUNC_1(VAR_6, VAR_0, "stderr");
  return (1);
 }
 if (FUNC_2(VAR_10, &VAR_9) < 0) {
  if (VAR_6 != ((void*)0))
   FUNC_1(VAR_6, VAR_0, "%s", VAR_10);
  return (1);
 }


 if (VAR_7->tgw == VAR_4)
  VAR_7->tgw = VAR_9.st_mode & VAR_2 ? VAR_3 : VAR_5;


 if (VAR_8) {
  if (FUNC_0(VAR_10, VAR_9.st_mode | VAR_2) < 0) {
   if (VAR_6 != ((void*)0))
    FUNC_1(VAR_6, VAR_0,
        "046|messages not turned on: %s", VAR_10);
   return (1);
  }
 } else
  if (FUNC_0(VAR_10, VAR_9.st_mode & ~VAR_2) < 0) {
   if (VAR_6 != ((void*)0))
    FUNC_1(VAR_6, VAR_0,
        "045|messages not turned off: %s", VAR_10);
   return (1);
  }
 return (0);
}
