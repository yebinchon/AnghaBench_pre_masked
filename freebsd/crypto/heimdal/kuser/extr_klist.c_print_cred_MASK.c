
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int rtbl_t ;
typedef scalar_t__ krb5_timestamp ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_7__ {scalar_t__ hw_authent; scalar_t__ pre_authent; scalar_t__ invalid; scalar_t__ initial; scalar_t__ renewable; scalar_t__ postdated; scalar_t__ may_postdate; scalar_t__ proxy; scalar_t__ proxiable; scalar_t__ forwarded; scalar_t__ forwardable; } ;
struct TYPE_8__ {TYPE_2__ b; } ;
struct TYPE_6__ {scalar_t__ starttime; scalar_t__ authtime; scalar_t__ endtime; } ;
struct TYPE_9__ {TYPE_3__ flags; int server; TYPE_1__ times; } ;
typedef TYPE_4__ krb5_creds ;
typedef int krb5_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,scalar_t__,char*) ;
 int FUNC_3 (int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ,int ,char**) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int ,char*) ;

__attribute__((used)) static void
FUNC_7(krb5_context VAR_4, krb5_creds *VAR_5, rtbl_t VAR_6, int VAR_7)
{
    char *VAR_8;
    krb5_error_code VAR_9;
    krb5_timestamp VAR_10;

    FUNC_3 (VAR_4, &VAR_10);


    if(VAR_5->times.starttime)
 FUNC_6(VAR_6, VAR_2,
         FUNC_5(VAR_5->times.starttime));
    else
 FUNC_6(VAR_6, VAR_2,
         FUNC_5(VAR_5->times.authtime));

    if(VAR_5->times.endtime > VAR_10)
 FUNC_6(VAR_6, VAR_0,
         FUNC_5(VAR_5->times.endtime));
    else
 FUNC_6(VAR_6, VAR_0, FUNC_0(">>>Expired<<<", ""));
    VAR_9 = FUNC_4 (VAR_4, VAR_5->server, &VAR_8);
    if (VAR_9)
 FUNC_2(VAR_4, 1, VAR_9, "krb5_unparse_name");
    FUNC_6(VAR_6, VAR_3, VAR_8);
    if(VAR_7) {
 char VAR_11[16], *VAR_12 = VAR_11;
 if(VAR_5->flags.b.forwardable)
     *VAR_12++ = 'F';
 if(VAR_5->flags.b.forwarded)
     *VAR_12++ = 'f';
 if(VAR_5->flags.b.proxiable)
     *VAR_12++ = 'P';
 if(VAR_5->flags.b.proxy)
     *VAR_12++ = 'p';
 if(VAR_5->flags.b.may_postdate)
     *VAR_12++ = 'D';
 if(VAR_5->flags.b.postdated)
     *VAR_12++ = 'd';
 if(VAR_5->flags.b.renewable)
     *VAR_12++ = 'R';
 if(VAR_5->flags.b.initial)
     *VAR_12++ = 'I';
 if(VAR_5->flags.b.invalid)
     *VAR_12++ = 'i';
 if(VAR_5->flags.b.pre_authent)
     *VAR_12++ = 'A';
 if(VAR_5->flags.b.hw_authent)
     *VAR_12++ = 'H';
 *VAR_12 = '\0';
 FUNC_6(VAR_6, VAR_1, VAR_11);
    }
    FUNC_1(VAR_8);
}
