
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct passwd {int pw_gid; } ;
typedef int prefix ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_15__ {scalar_t__ uid; scalar_t__ gid; int session; } ;
typedef TYPE_1__ kcm_client ;
typedef TYPE_2__* kcm_ccache ;
typedef int gid_t ;
struct TYPE_16__ {scalar_t__ uid; scalar_t__ gid; int session; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct passwd* FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (int ,char const*,TYPE_2__**) ;
 scalar_t__ FUNC_5 (int ,char const*,TYPE_2__**) ;
 int FUNC_6 (int ,TYPE_1__*,TYPE_2__*,unsigned long,int ) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (int,char*,char const*,int ) ;
 int FUNC_9 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (int ,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_12 (char*,int,char*,long) ;
 int FUNC_13 (char const*,char*,unsigned long*) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 size_t FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (char const*,char*,size_t) ;

krb5_error_code
FUNC_17(krb5_context VAR_5,
        kcm_client *VAR_6,
        const char *VAR_7,
        kcm_ccache *VAR_8)
{
    krb5_error_code VAR_9;
    kcm_ccache VAR_10;


    if (VAR_4 != 0) {
 char VAR_11[64];
 size_t VAR_12;
 int VAR_13 = 1;

 FUNC_12(VAR_11, sizeof(VAR_11), "%ld:", (long)VAR_6->uid);
 VAR_12 = FUNC_15(VAR_11);

 if (FUNC_16(VAR_7, VAR_11, VAR_12) == 0)
     VAR_13 = 0;
 else {
     VAR_11[VAR_12 - 1] = '\0';
     if (FUNC_14(VAR_7, VAR_11) == 0)
  VAR_13 = 0;
 }


 if (VAR_13 && !FUNC_0(VAR_6))
     return VAR_1;
    }

    VAR_9 = FUNC_5(VAR_5, VAR_7, &VAR_10);
    if (VAR_9 == 0) {
 if ((VAR_10->uid != VAR_6->uid ||
      VAR_10->gid != VAR_6->gid) && !FUNC_0(VAR_6))
     return VAR_3;
    } else if (VAR_9 != VAR_2 && !(FUNC_0(VAR_6) && VAR_9 == VAR_3)) {
  return VAR_9;
    }

    if (VAR_9 == VAR_2) {
 VAR_9 = FUNC_4(VAR_5, VAR_7, &VAR_10);
 if (VAR_9) {
     FUNC_8(1, "Failed to initialize cache %s: %s",
      VAR_7, FUNC_11(VAR_5, VAR_9));
     return VAR_9;
 }


 VAR_10->uid = VAR_6->uid;
 VAR_10->gid = VAR_6->gid;
 VAR_10->session = VAR_6->session;
    } else {
 VAR_9 = FUNC_10(VAR_5, VAR_10);
 if (VAR_9) {
     FUNC_8(1, "Failed to empty cache %s: %s",
      VAR_7, FUNC_11(VAR_5, VAR_9));
     FUNC_9(VAR_5, VAR_10);
     return VAR_9;
 }
 FUNC_7(VAR_5, VAR_10);
    }

    VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_0, VAR_10);
    if (VAR_9) {
 FUNC_9(VAR_5, VAR_10);
 FUNC_3(VAR_5, VAR_7);
 return VAR_9;
    }






    if (FUNC_0(VAR_6)) {
 unsigned long VAR_14;
 int VAR_15 = FUNC_13(VAR_7,"%ld:",&VAR_14);
 if (VAR_15 == 0)
     VAR_15 = FUNC_13(VAR_7,"%ld",&VAR_14);
 if (VAR_15 == 1) {
     struct passwd *VAR_16 = FUNC_1(VAR_14);
     if (VAR_16 != ((void*)0)) {
  gid_t VAR_17 = VAR_16->pw_gid;
  FUNC_6(VAR_5, VAR_6, VAR_10, VAR_14, VAR_17);
     }
 }
    }

    *VAR_8 = VAR_10;
    return 0;
}
