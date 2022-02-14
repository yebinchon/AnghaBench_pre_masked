
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_17__ {int s_addr; } ;
struct sockaddr_storage {unsigned short sin_port; TYPE_2__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct TYPE_19__ {int length; int * value; } ;
struct TYPE_18__ {int length; int* value; } ;
struct TYPE_16__ {int length; int* value; } ;
struct gss_channel_bindings_struct {TYPE_4__ application_data; TYPE_3__ acceptor_address; void* acceptor_addrtype; TYPE_1__ initiator_address; void* initiator_addrtype; } ;
typedef int socklen_t ;
typedef int remote ;
typedef scalar_t__ pid_t ;
typedef int local ;
typedef int gss_name_t ;
typedef scalar_t__ gss_ctx_id_t ;
typedef int gss_cred_id_t ;
typedef TYPE_5__* gss_buffer_t ;
struct TYPE_20__ {scalar_t__ length; char* value; } ;
typedef TYPE_5__ gss_buffer_desc ;
typedef int gss_OID ;
typedef int OM_uint32 ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (char**,char*,char const*,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_9 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_10 (int,struct sockaddr*,int*) ;
 int FUNC_11 (int*,int ,TYPE_5__*,int ,int ,int ,int *,int *,int *) ;
 int FUNC_12 (int*,scalar_t__*,int ) ;
 int FUNC_13 (int,int,char*,...) ;
 int FUNC_14 (int*,scalar_t__*,TYPE_5__*) ;
 int FUNC_15 (int*,TYPE_5__*,int ,int *) ;
 int FUNC_16 (int*,TYPE_5__*,scalar_t__*) ;
 int FUNC_17 (int*,int ,scalar_t__*,int ,int ,int,int ,int *,TYPE_5__*,int *,TYPE_5__*,int *,int *) ;
 int FUNC_18 (int*,TYPE_5__*) ;
 int VAR_13 ;
 char* VAR_14 ;
 scalar_t__ FUNC_19 (int*) ;
 int FUNC_20 (int,TYPE_5__*) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (char*) ;
 int FUNC_23 (int,TYPE_5__*) ;

__attribute__((used)) static int
FUNC_24 (int VAR_15, const char *VAR_16, const char *VAR_17)
{
    struct sockaddr_storage VAR_18, VAR_19;
    socklen_t VAR_20;

    int VAR_21 = 0;
    gss_ctx_id_t VAR_22 = VAR_5;
    gss_cred_id_t VAR_23 = VAR_6;
    gss_buffer_desc VAR_24, VAR_25;
    gss_buffer_t VAR_26 = &VAR_24,
 VAR_27 = &VAR_25;
    OM_uint32 VAR_28, VAR_29;
    gss_name_t VAR_30;
    gss_buffer_desc VAR_31;
    u_char VAR_32[4];
    u_char VAR_33[4];
    gss_OID VAR_34;
    char *VAR_35;

    VAR_34 = FUNC_21(VAR_13);

    VAR_31.length = FUNC_1 (&VAR_35,
      "%s@%s", VAR_17, VAR_16);
    if (VAR_35 == ((void*)0))
 FUNC_6(1, "malloc - out of memory");
    VAR_31.value = VAR_35;

    VAR_28 = FUNC_15 (&VAR_29,
    &VAR_31,
    VAR_9,
    &VAR_30);
    if (FUNC_0(VAR_28))
 FUNC_13 (1, VAR_29,
   "Error importing name `%s@%s':\n", VAR_17, VAR_16);

    if (VAR_14) {
        gss_buffer_desc VAR_36;

        VAR_36.value = VAR_14;
        VAR_36.length = FUNC_22(VAR_14);

        VAR_28 = FUNC_11(&VAR_29,
        VAR_7,
        &VAR_36,
        VAR_1,
        VAR_8,
        VAR_2,
        &VAR_23,
        ((void*)0),
        ((void*)0));
        if (FUNC_0(VAR_28))
            FUNC_13 (1, VAR_29,
                     "Error acquiring default initiator credentials");
    }

    VAR_20 = sizeof(VAR_19);
    if (FUNC_10 (VAR_15, (struct sockaddr *)&VAR_19, &VAR_20) < 0
 || VAR_20 > sizeof(VAR_19))
 FUNC_5 (1, "getsockname(%s)", VAR_16);

    VAR_20 = sizeof(VAR_18);
    if (FUNC_9 (VAR_15, (struct sockaddr *)&VAR_18, &VAR_20) < 0
 || VAR_20 > sizeof(VAR_18))
 FUNC_5 (1, "getpeername(%s)", VAR_16);

    VAR_26->length = 0;
    VAR_27->length = 0;
    while(!VAR_21) {
 VAR_28 =
     FUNC_17(&VAR_29,
     VAR_23,
     &VAR_22,
     VAR_30,
     VAR_34,
     VAR_3 | VAR_10,
     0,
     ((void*)0),
     VAR_26,
     ((void*)0),
     VAR_27,
     ((void*)0),
     ((void*)0));
 if (FUNC_0(VAR_28))
     FUNC_13 (1, VAR_29, "gss_init_sec_context");
 if (VAR_27->length != 0)
     FUNC_23 (VAR_15, VAR_27);
 if (FUNC_0(VAR_28)) {
     if (VAR_22 != VAR_5)
  FUNC_12 (&VAR_29,
     &VAR_22,
     VAR_4);
     break;
 }
 if (VAR_28 & VAR_11) {
     FUNC_20 (VAR_15, VAR_26);
 } else {
     VAR_21 = 1;
 }

    }
    if (VAR_12) {
 pid_t VAR_37;
 int VAR_38[2];

 if (FUNC_19 (VAR_38) < 0)
     FUNC_5 (1, "pipe");

 VAR_37 = FUNC_8 ();
 if (VAR_37 < 0)
     FUNC_5 (1, "fork");
 if (VAR_37 != 0) {
     gss_buffer_desc VAR_39;

     VAR_28 = FUNC_14 (&VAR_29,
            &VAR_22,
            &VAR_39);
     if (FUNC_0(VAR_28))
  FUNC_13 (1, VAR_29, "gss_export_sec_context");
     FUNC_23 (VAR_38[1], &VAR_39);
     FUNC_7 (0);
 } else {
     gss_ctx_id_t VAR_40;
     gss_buffer_desc VAR_41;

     FUNC_2 (VAR_38[1]);
     FUNC_20 (VAR_38[0], &VAR_41);
     FUNC_2 (VAR_38[0]);
     VAR_28 = FUNC_16 (&VAR_29, &VAR_41, &VAR_40);
     if (FUNC_0(VAR_28))
  FUNC_13 (1, VAR_29, "gss_import_sec_context");
     FUNC_18 (&VAR_29, &VAR_41);
     return FUNC_3 (VAR_15, VAR_40);
 }
    } else {
 return FUNC_3 (VAR_15, VAR_22);
    }
}
