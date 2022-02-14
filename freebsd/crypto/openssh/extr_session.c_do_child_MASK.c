
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct passwd {char* pw_shell; char* pw_dir; int pw_name; } ;
typedef int cell ;
typedef int argv0 ;
struct TYPE_11__ {scalar_t__ kerberos_get_afs_token; scalar_t__ use_pam; } ;
struct TYPE_10__ {int ttyfd; scalar_t__ is_subsystem; struct passwd* pw; TYPE_1__* authctxt; int * tty; } ;
struct TYPE_9__ {int krb5_fwd_ccache; int * krb5_ctx; scalar_t__ force_pwchange; } ;
typedef TYPE_2__ Session ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,char const*) ;
 int FUNC_2 (struct ssh*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct passwd*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct ssh*,TYPE_2__*,char const*) ;
 char** FUNC_12 (struct ssh*,TYPE_2__*,char const*) ;
 int FUNC_13 (struct passwd*) ;
 int VAR_10 ;
 int FUNC_14 (char const*,char**,char**) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,char*,char*,char*) ;
 int VAR_11 ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 (char*,char*,int) ;
 scalar_t__ FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (int *,int ,char*,int *) ;
 int FUNC_23 (int *,int ,int *,int *,char*) ;
 int VAR_12 ;
 int FUNC_24 (int ,char*,int ) ;
 char* FUNC_25 (int ,char*,char*,char*) ;
 TYPE_3__ VAR_13 ;
 int FUNC_26 () ;
 int FUNC_27 (char const*) ;
 int FUNC_28 (char*) ;
 int FUNC_29 (struct passwd*,int *) ;
 int FUNC_30 (char*,int ,int ) ;
 int FUNC_31 (int,char**,struct passwd*) ;
 int FUNC_32 (int ,int ) ;
 int FUNC_33 (char*) ;
 int VAR_14 ;
 char* FUNC_34 (int ) ;
 int FUNC_35 (char*,char const*,int) ;
 char* FUNC_36 (char const*,char) ;
 char* FUNC_37 (char*,char*) ;
 char* FUNC_38 (char const*) ;

void
FUNC_39(struct ssh *VAR_15, Session *VAR_16, const char *VAR_17)
{
 extern char **VAR_18;
 char **VAR_19;
 char *VAR_20[VAR_0];
 const char *VAR_21, *VAR_22;
 struct passwd *VAR_23 = VAR_16->pw;
 int VAR_24 = 0;


 FUNC_6();
 FUNC_26();


 if (VAR_16->authctxt->force_pwchange) {
  FUNC_13(VAR_23);
  FUNC_2(VAR_15);
  FUNC_10(VAR_16);
  FUNC_15(1);
 }
 if (!VAR_13.use_pam)
  FUNC_9(VAR_23);
 FUNC_13(VAR_23);





 if (!FUNC_1(VAR_16, VAR_17))
  FUNC_7();
 VAR_21 = (VAR_23->pw_shell[0] == '\0') ? VAR_8 : VAR_23->pw_shell;





 VAR_19 = FUNC_12(VAR_15, VAR_16, VAR_21);
 FUNC_2(VAR_15);





 VAR_18 = VAR_19;
 if (FUNC_0(VAR_23->pw_dir) < 0) {




  if (VAR_24 || !VAR_11) {
   FUNC_17(VAR_14, "Could not chdir to home "
       "directory %s: %s\n", VAR_23->pw_dir,
       FUNC_34(VAR_10));
  }
  if (VAR_24)
   FUNC_15(1);
 }

 FUNC_3(VAR_5 + 1);

 FUNC_11(VAR_15, VAR_16, VAR_21);


 FUNC_32(VAR_3, VAR_4);

 if (VAR_16->is_subsystem == VAR_7) {
  FUNC_28("This service allows sftp connections only.\n");
  FUNC_16(((void*)0));
  FUNC_15(1);
 } else if (VAR_16->is_subsystem == VAR_6) {
  extern int VAR_25, VAR_26;
  int VAR_27;
  char *VAR_28, *VAR_29;

  FUNC_30("%s@%s", VAR_16->pw->pw_name, VAR_2);
  VAR_29 = FUNC_38(VAR_17 ? VAR_17 : "sftp-server");
  for (VAR_27 = 0, (VAR_28 = FUNC_37(VAR_29, " ")); VAR_28; (VAR_28 = FUNC_37(((void*)0), " ")))
   if (VAR_27 < VAR_0 - 1)
    VAR_20[VAR_27++] = VAR_28;
  VAR_20[VAR_27] = ((void*)0);
  VAR_25 = VAR_26 = 1;
  VAR_9 = VAR_20[0];



  FUNC_15(FUNC_31(VAR_27, VAR_20, VAR_16->pw));
 }

 FUNC_16(((void*)0));


 if ((VAR_22 = FUNC_36(VAR_21, '/')) != ((void*)0))
  VAR_22++;
 else
  VAR_22 = VAR_21;






 if (!VAR_17) {
  char VAR_30[256];


  VAR_30[0] = '-';

  if (FUNC_35(VAR_30 + 1, VAR_22, sizeof(VAR_30) - 1)
      >= sizeof(VAR_30) - 1) {
   VAR_10 = VAR_1;
   FUNC_27(VAR_21);
   FUNC_15(1);
  }


  VAR_20[0] = VAR_30;
  VAR_20[1] = ((void*)0);
  FUNC_14(VAR_21, VAR_20, VAR_19);


  FUNC_27(VAR_21);
  FUNC_15(1);
 }




 VAR_20[0] = (char *) VAR_22;
 VAR_20[1] = "-c";
 VAR_20[2] = (char *) VAR_17;
 VAR_20[3] = ((void*)0);
 FUNC_14(VAR_21, VAR_20, VAR_19);
 FUNC_27(VAR_21);
 FUNC_15(1);
}
