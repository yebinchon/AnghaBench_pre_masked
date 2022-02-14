
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int krb5_error_code ;
struct TYPE_15__ {unsigned char* data; size_t length; } ;
typedef TYPE_1__ krb5_data ;
struct TYPE_16__ {int pid; int session; int gid; int uid; } ;
typedef TYPE_2__ kcm_client ;
typedef int heim_sipc_call ;
typedef int (* heim_ipc_complete ) (int ,int ,TYPE_1__*) ;
struct TYPE_17__ {int length; unsigned char* data; } ;
typedef TYPE_4__ heim_idata ;
typedef int heim_icred ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const) ;
 int VAR_3 ;
 int FUNC_4 (int ,TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (int,char*,unsigned char,...) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ,TYPE_1__*) ;
 int FUNC_9 (int ,int ,TYPE_1__*) ;
 int FUNC_10 (int ,int ,TYPE_1__*) ;

void
FUNC_11(void *VAR_4, const heim_idata *VAR_5,
     const heim_icred VAR_6,
     heim_ipc_complete VAR_7,
     heim_sipc_call VAR_8)
{
    kcm_client VAR_9;
    krb5_error_code VAR_10;
    krb5_data VAR_11, VAR_12;
    unsigned char *VAR_13;
    size_t VAR_14;

    FUNC_7(&VAR_12);

    VAR_9.uid = FUNC_3(VAR_6);
    VAR_9.gid = FUNC_0(VAR_6);
    VAR_9.pid = FUNC_1(VAR_6);
    VAR_9.session = FUNC_2(VAR_6);

    if (VAR_5->length < 4) {
 FUNC_5(1, "malformed request from process %d (too short)",
  VAR_9.pid);
 (*VAR_7)(VAR_8, VAR_0, ((void*)0));
 return;
    }

    VAR_13 = VAR_5->data;
    VAR_14 = VAR_5->length;

    if (VAR_13[0] != VAR_1 ||
 VAR_13[1] != VAR_2) {
 FUNC_5(1, "incorrect protocol version %d.%d from process %d",
  VAR_13[0], VAR_13[1], VAR_9.pid);
 (*VAR_7)(VAR_8, VAR_0, ((void*)0));
 return;
    }

    VAR_11.data = VAR_13 + 2;
    VAR_11.length = VAR_14 - 2;



    VAR_10 = FUNC_4(VAR_3, &VAR_9, &VAR_11, &VAR_12);

    (*VAR_7)(VAR_8, VAR_10, &VAR_12);
    FUNC_6(&VAR_12);
}
