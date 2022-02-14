
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_6__ {int max_authtries; int use_dns; } ;
struct TYPE_5__ {int failures; scalar_t__ postponed; int user; scalar_t__ valid; int * auth_method_info; } ;
typedef TYPE_1__ Authctxt ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct ssh* VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ssh*,int ) ;
 char* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 void FUNC_6 (char const*) ;
 int FUNC_7 () ;
 TYPE_2__ VAR_3 ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (struct ssh*) ;
 int FUNC_10 (struct ssh*) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 scalar_t__ FUNC_12 (char const*,char*,int) ;
 int FUNC_13 (int ,int ,char*,int *) ;
 scalar_t__ VAR_4 ;
 void FUNC_14 (char const*) ;
 char* FUNC_15 (int *) ;

void
FUNC_16(Authctxt *VAR_5, int VAR_6, int VAR_7,
    const char *VAR_8, const char *VAR_9)
{
 struct ssh *VAR_10 = VAR_1;
 void (*VAR_11) (const char *VAR_12,...) = FUNC_14;
 const char *VAR_13;
 char *VAR_14 = ((void*)0);

 if (VAR_4 && !FUNC_7() && !VAR_5->postponed)
  return;


 if (VAR_6 == 1 ||
     !VAR_5->valid ||
     VAR_5->failures >= VAR_3.max_authtries / 2 ||
     FUNC_11(VAR_8, "password") == 0)
  VAR_11 = FUNC_6;

 if (VAR_5->postponed)
  VAR_13 = "Postponed";
 else if (VAR_7)
  VAR_13 = "Partial";
 else {
  VAR_13 = VAR_6 ? "Accepted" : "Failed";
  if (VAR_6)
   FUNC_0(VAR_0, "ssh");
 }

 if ((VAR_14 = FUNC_4(VAR_5)) == ((void*)0)) {
  if (VAR_5->auth_method_info != ((void*)0))
   VAR_14 = FUNC_15(VAR_5->auth_method_info);
 }

 VAR_11("%s %s%s%s for %s%.100s from %.200s port %d ssh2%s%s",
     VAR_13,
     VAR_8,
     VAR_9 != ((void*)0) ? "/" : "", VAR_9 == ((void*)0) ? "" : VAR_9,
     VAR_5->valid ? "" : "invalid user ",
     VAR_5->user,
     FUNC_9(VAR_10),
     FUNC_10(VAR_10),
     VAR_14 != ((void*)0) ? ": " : "",
     VAR_14 != ((void*)0) ? VAR_14 : "");

 FUNC_5(VAR_14);
}
