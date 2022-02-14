
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int utmpx ;
struct TYPE_2__ {int tv_usec; int tv_sec; } ;
struct utmpx {int ut_pid; TYPE_1__ ut_tv; int ut_type; int ut_id; int ut_line; int ut_user; } ;
struct timeval {int tv_usec; int tv_sec; } ;
struct arg_val {int argv; scalar_t__ argc; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct arg_val*,char const*) ;
 scalar_t__ VAR_4 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ,int) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct timeval*,int *) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct utmpx*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (char*) ;
 int * FUNC_13 (struct utmpx*) ;
 scalar_t__ VAR_13 ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;
 char* FUNC_16 (char*) ;
 int FUNC_17 (int ,char*,int) ;
 int FUNC_18 (int ,char*,char const*,...) ;
 int FUNC_19 (char*) ;

void
FUNC_20(const char *VAR_14, int VAR_15, char *VAR_16)
{
    struct arg_val VAR_17;
    char *VAR_18;
    int VAR_19;
    FUNC_14();
    VAR_17.size=0;
    VAR_17.argc=0;
    VAR_17.argv=FUNC_10(0);
    FUNC_0(&VAR_17, "login");
    FUNC_0(&VAR_17, "-h");
    FUNC_0(&VAR_17, VAR_14);
    FUNC_0(&VAR_17, "-p");
    if(VAR_16 && VAR_16[0])
 VAR_18 = VAR_16;
    else
 VAR_18 = FUNC_6("USER");
    if(VAR_18){
 FUNC_0(&VAR_17, "--");
 FUNC_0(&VAR_17, FUNC_16(VAR_18));
    }
    if (FUNC_6("USER")) {
 FUNC_19("USER");
    }
    FUNC_2();





    FUNC_15(1);

    FUNC_3(VAR_11, VAR_17.argv);
    VAR_19 = VAR_7;
    FUNC_18(VAR_2, "%s: %m", VAR_11);
    FUNC_5(VAR_10, VAR_11, VAR_19);

}
