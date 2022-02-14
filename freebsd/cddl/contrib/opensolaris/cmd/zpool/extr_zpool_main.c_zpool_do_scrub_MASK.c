
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cb_type; scalar_t__ cb_scrub_cmd; int cb_argc; char** cb_argv; } ;
typedef TYPE_1__ scrub_cbdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,char**,int ,int *,int ,TYPE_1__*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,char**,char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;

int
FUNC_5(int VAR_10, char **VAR_11)
{
 int VAR_12;
 scrub_cbdata_t VAR_13;

 VAR_13.cb_type = VAR_3;
 VAR_13.cb_scrub_cmd = VAR_4;


 while ((VAR_12 = FUNC_2(VAR_10, VAR_11, "sp")) != -1) {
  switch (VAR_12) {
  case 's':
   VAR_13.cb_type = VAR_2;
   break;
  case 'p':
   VAR_13.cb_scrub_cmd = VAR_5;
   break;
  case '?':
   (void) FUNC_1(VAR_9, FUNC_3("invalid option '%c'\n"),
       VAR_7);
   FUNC_4(VAR_0);
  }
 }

 if (VAR_13.cb_type == VAR_2 &&
     VAR_13.cb_scrub_cmd == VAR_5) {
  (void) FUNC_1(VAR_9, "%s", FUNC_3("invalid option combination: "
      "-s and -p are mutually exclusive\n"));
  FUNC_4(VAR_0);
 }

 VAR_13.cb_argc = VAR_10;
 VAR_13.cb_argv = VAR_11;
 VAR_10 -= VAR_6;
 VAR_11 += VAR_6;

 if (VAR_10 < 1) {
  (void) FUNC_1(VAR_9, "%s", FUNC_3("missing pool name argument\n"));
  FUNC_4(VAR_0);
 }

 return (FUNC_0(VAR_10, VAR_11, VAR_1, ((void*)0), VAR_8, &VAR_13));
}
