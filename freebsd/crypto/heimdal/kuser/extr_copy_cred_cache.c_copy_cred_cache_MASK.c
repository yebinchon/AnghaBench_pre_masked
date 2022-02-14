
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_5__ {scalar_t__ endtime; } ;
struct TYPE_4__ {int keytype; } ;
struct TYPE_6__ {int server; TYPE_2__ times; int flags; TYPE_1__ session; } ;
struct ctx {TYPE_3__ mcreds; int whichfields; } ;
struct copy_cred_cache_options {scalar_t__ krbtgt_only_flag; scalar_t__ fcache_version_integer; scalar_t__ valid_for_string; scalar_t__ flags_string; int enctype_string; int service_string; } ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
typedef int krb5_ccache ;
typedef int ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,struct ctx*,unsigned int*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,char const*,int *) ;
 int FUNC_7 (int ,int,scalar_t__,char*,...) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,scalar_t__) ;
 scalar_t__ FUNC_13 (int ,int ,int *) ;
 int VAR_5 ;
 int FUNC_14 (struct ctx*,int ,int) ;
 int FUNC_15 (int ,scalar_t__,int *) ;
 scalar_t__ FUNC_16 (scalar_t__,char*) ;
 scalar_t__ FUNC_17 (int *) ;

int
FUNC_18(struct copy_cred_cache_options *VAR_6, int VAR_7, char **VAR_8)
{
    krb5_error_code VAR_9;
    const char *VAR_10, *VAR_11;
    krb5_ccache VAR_12, VAR_13;
    unsigned int VAR_14;
    struct ctx VAR_15;

    FUNC_14(&VAR_15, 0, sizeof(VAR_15));

    if (VAR_6->service_string) {
 VAR_9 = FUNC_10(VAR_4, VAR_6->service_string, &VAR_15.mcreds.server);
 if (VAR_9)
     FUNC_7(VAR_4, 1, VAR_9, "%s", VAR_6->service_string);
    }
    if (VAR_6->enctype_string) {
 krb5_enctype VAR_16;
 VAR_9 = FUNC_13(VAR_4, VAR_6->enctype_string, &VAR_16);
 if (VAR_9)
     FUNC_7(VAR_4, 1, VAR_9, "%s", VAR_6->enctype_string);
 VAR_15.whichfields |= VAR_1;
 VAR_15.mcreds.session.keytype = VAR_16;
    }
    if (VAR_6->flags_string) {
 FUNC_15(VAR_4, VAR_6->flags_string, &VAR_15.mcreds.flags);
 VAR_15.whichfields |= VAR_0;
    }
    if (VAR_6->valid_for_string) {
 time_t VAR_17 = FUNC_16(VAR_6->valid_for_string, "s");
 if(VAR_17 < 0)
     FUNC_0(1, "unknown time \"%s\"", VAR_6->valid_for_string);
 VAR_15.mcreds.times.endtime = FUNC_17(((void*)0)) + VAR_17;
 VAR_15.whichfields |= VAR_2;
    }
    if (VAR_6->fcache_version_integer)
 FUNC_12(VAR_4, VAR_6->fcache_version_integer);

    if (VAR_7 == 1) {
 VAR_10 = FUNC_3(VAR_4);
 VAR_11 = VAR_8[0];
    } else {
 VAR_10 = VAR_8[0];
 VAR_11 = VAR_8[1];
    }

    VAR_9 = FUNC_6(VAR_4, VAR_10, &VAR_12);
    if (VAR_9)
 FUNC_7(VAR_4, 1, VAR_9, "%s", VAR_10);

    if (VAR_6->krbtgt_only_flag) {
 krb5_principal VAR_18;
 VAR_9 = FUNC_5(VAR_4, VAR_12, &VAR_18);
 if (VAR_9)
     FUNC_7(VAR_4, 1, VAR_9, "getting default principal");
 VAR_9 = FUNC_9(VAR_4, &VAR_15.mcreds.server,
      FUNC_11(VAR_4, VAR_18),
      VAR_3,
      FUNC_11(VAR_4, VAR_18),
      ((void*)0));
 if (VAR_9)
     FUNC_7(VAR_4, 1, VAR_9, "constructing krbtgt principal");
 FUNC_8(VAR_4, VAR_18);
    }
    VAR_9 = FUNC_6(VAR_4, VAR_11, &VAR_13);
    if (VAR_9)
 FUNC_7(VAR_4, 1, VAR_9, "%s", VAR_11);

    VAR_9 = FUNC_2(VAR_4, VAR_12, VAR_13,
          VAR_5, &VAR_15, &VAR_14);
    if (VAR_9)
 FUNC_7(VAR_4, 1, VAR_9, "copying cred cache");

    FUNC_1(VAR_4, VAR_12);
    if(VAR_14 == 0)
 FUNC_4(VAR_4, VAR_13);
    else
 FUNC_1(VAR_4, VAR_13);

    return VAR_14 == 0;
}
