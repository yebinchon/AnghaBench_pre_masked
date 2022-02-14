
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct utmp {int dummy; } ;
struct TYPE_4__ {int ut_pid; char const* ut_user; char const* ut_host; char const* ut_line; char const* ut_id; int ut_type; int ut_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,void (*) (int)) ;
 int FUNC_13 (char const*,int,char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char const*,char const*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 () ;
 int FUNC_18 (int) ;
 int FUNC_19 () ;
 int FUNC_20 (int,TYPE_1__*,int) ;
 int FUNC_21 (char*,int ) ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;

void
FUNC_22(const char *VAR_12, const char *VAR_13,
    int VAR_14, char *VAR_15)
{
    int VAR_16;
    {
 char *VAR_17 =
     "\r\n*** Connection not encrypted! "
     "Communication may be eavesdropped. ***\r\n";



     FUNC_21(VAR_17, FUNC_14(VAR_17));
    }




    if ((VAR_16 = FUNC_6()) < 0)
 FUNC_5(VAR_8, "fork");
    if (VAR_16) {
    } else {
 FUNC_7();




 FUNC_13(VAR_12, VAR_14, VAR_15);

    }
}
