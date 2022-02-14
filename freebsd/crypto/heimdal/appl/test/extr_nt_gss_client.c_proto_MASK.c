
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int remote ;
typedef int local ;
typedef int gss_name_t ;
typedef scalar_t__ gss_ctx_id_t ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_12__ {scalar_t__ length; char* value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (char**,char*,char const*,char const*) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_5 (int,struct sockaddr*,int*) ;
 int FUNC_6 (int*,scalar_t__*,int ) ;
 int FUNC_7 (int,int,char*,...) ;
 int FUNC_8 (int*,scalar_t__,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 (int*,TYPE_1__*,int ,int *) ;
 int FUNC_10 (int*,int ,scalar_t__*,int ,int ,int,int ,int ,TYPE_1__*,int *,TYPE_1__*,int *,int *) ;
 int FUNC_11 (int*,scalar_t__,int,int ,TYPE_1__*,int *,TYPE_1__*) ;
 int FUNC_12 (int,TYPE_1__*) ;
 int FUNC_13 (int,TYPE_1__*) ;
 char* FUNC_14 (char*) ;

__attribute__((used)) static int
FUNC_15 (int VAR_10, const char *VAR_11, const char *VAR_12)
{
    struct sockaddr_in VAR_13, VAR_14;
    socklen_t VAR_15;

    int VAR_16 = 0;
    gss_ctx_id_t VAR_17 = VAR_3;
    gss_buffer_t VAR_18, VAR_19;
    gss_buffer_desc VAR_20, VAR_21;
    OM_uint32 VAR_22, VAR_23;
    gss_name_t VAR_24;
    gss_buffer_desc VAR_25;
    char *VAR_26;

    VAR_25.length = FUNC_1 (&VAR_26,
      "%s@%s", VAR_12, VAR_11);
    if (VAR_26 == ((void*)0))
 FUNC_3(1, "out of memory");
    VAR_25.value = VAR_26;

    VAR_22 = FUNC_9 (&VAR_23,
    &VAR_25,
    VAR_6,
    &VAR_24);
    if (FUNC_0(VAR_22))
 FUNC_7 (1, VAR_23,
   "Error importing name `%s@%s':\n", VAR_12, VAR_11);

    VAR_15 = sizeof(VAR_14);
    if (FUNC_5 (VAR_10, (struct sockaddr *)&VAR_14, &VAR_15) < 0
 || VAR_15 != sizeof(VAR_14))
 FUNC_2 (1, "getsockname(%s)", VAR_11);

    VAR_15 = sizeof(VAR_13);
    if (FUNC_4 (VAR_10, (struct sockaddr *)&VAR_13, &VAR_15) < 0
 || VAR_15 != sizeof(VAR_13))
 FUNC_2 (1, "getpeername(%s)", VAR_11);

    VAR_18 = &VAR_20;
    VAR_19 = &VAR_21;

    VAR_18->length = 0;
    VAR_19->length = 0;

    while(!VAR_16) {
 VAR_22 =
     FUNC_10(&VAR_23,
     VAR_4,
     &VAR_17,
     VAR_24,
     VAR_5,
     VAR_0 | VAR_8,
     0,
     VAR_2,
     VAR_18,
     ((void*)0),
     VAR_19,
     ((void*)0),
     ((void*)0));
 if (FUNC_0(VAR_22))
     FUNC_7 (1, VAR_23, "gss_init_sec_context");
 if (VAR_19->length != 0)
     FUNC_13 (VAR_10, VAR_19);
 if (FUNC_0(VAR_22)) {
     if (VAR_17 != VAR_3)
  FUNC_6 (&VAR_23,
     &VAR_17,
     VAR_1);
     break;
 }
 if (VAR_22 & VAR_9) {
     FUNC_12 (VAR_10, VAR_18);
 } else {
     VAR_16 = 1;
 }

    }



    VAR_18->length = 3;
    VAR_18->value = FUNC_14("hej");

    VAR_22 = FUNC_8(&VAR_23,
      VAR_17,
      VAR_7,
      VAR_18,
      VAR_19);
    if (FUNC_0(VAR_22))
 FUNC_7 (1, VAR_23, "gss_get_mic");

    FUNC_13 (VAR_10, VAR_18);
    FUNC_13 (VAR_10, VAR_19);



    VAR_18->length = 7;
    VAR_18->value = "hemligt";


    VAR_22 = FUNC_11 (&VAR_23,
    VAR_17,
    1,
    VAR_7,
    VAR_18,
    ((void*)0),
    VAR_19);
    if (FUNC_0(VAR_22))
 FUNC_7 (1, VAR_23, "gss_wrap");

    FUNC_13 (VAR_10, VAR_19);

    return 0;
}
