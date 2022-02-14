
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int type3 ;
typedef int type2 ;
typedef int type1 ;
struct ntlm_type3 {int flags; int sessionkey; int ntlm; int targetinfo; int challenge; int targetname; void* ws; void* username; scalar_t__* os; int * hostname; int domain; } ;
struct ntlm_type2 {int flags; int sessionkey; int ntlm; int targetinfo; int challenge; int targetname; void* ws; void* username; scalar_t__* os; int * hostname; int domain; } ;
struct ntlm_type1 {int flags; int sessionkey; int ntlm; int targetinfo; int challenge; int targetname; void* ws; void* username; scalar_t__* os; int * hostname; int domain; } ;
struct ntlm_buf {scalar_t__ length; int * data; } ;
typedef int ntlmv2 ;
typedef scalar_t__ krb5_error_code ;
typedef int gss_ctx_id_t ;
struct TYPE_4__ {scalar_t__ length; int * value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__*,int *,int ,TYPE_1__*,int ,int *,int *,TYPE_1__*,int *,int *,int *) ;
 int FUNC_4 (scalar_t__*,int *,int *) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (unsigned char*,int,struct ntlm_buf*,int *) ;
 int FUNC_7 (int *,scalar_t__,char const*,int ,int ,int *,unsigned char*,int *) ;
 scalar_t__ FUNC_8 (struct ntlm_buf*,struct ntlm_type3*) ;
 scalar_t__ FUNC_9 (struct ntlm_type3*,struct ntlm_buf*) ;
 scalar_t__ FUNC_10 (struct ntlm_type3*,struct ntlm_buf*) ;
 int FUNC_11 (char const*,struct ntlm_buf*) ;
 int FUNC_12 (struct ntlm_type3*,int ,int) ;
 void* FUNC_13 (char const*) ;
 int FUNC_14 (char const*) ;

__attribute__((used)) static int
FUNC_15(int VAR_8)
{
    const char *VAR_9 = "foo",
 *VAR_10 = "mydomain",
 *VAR_11 = "digestpassword";
    OM_uint32 VAR_12, VAR_13;
    gss_ctx_id_t VAR_14 = VAR_1;
    gss_buffer_desc VAR_15, VAR_16;
    struct ntlm_type1 VAR_17;
    struct ntlm_type2 VAR_18;
    struct ntlm_type3 VAR_19;
    struct ntlm_buf VAR_20;
    krb5_error_code VAR_21;

    FUNC_12(&VAR_17, 0, sizeof(VAR_17));
    FUNC_12(&VAR_18, 0, sizeof(VAR_18));
    FUNC_12(&VAR_19, 0, sizeof(VAR_19));

    VAR_17 = VAR_7|VAR_6|VAR_8;
    VAR_17 = FUNC_14(VAR_10);
    VAR_17 = ((void*)0);
    VAR_17[0] = 0;
    VAR_17[1] = 0;

    VAR_21 = FUNC_9(&VAR_17, &VAR_20);
    if (VAR_21)
 FUNC_1(1, "heim_ntlm_encode_type1");

    VAR_15.value = VAR_20.data;
    VAR_15.length = VAR_20.length;

    VAR_16.length = 0;
    VAR_16.value = ((void*)0);

    VAR_12 = FUNC_3(&VAR_13,
          &VAR_14,
          VAR_2,
          &VAR_15,
          VAR_0,
          ((void*)0),
          ((void*)0),
          &VAR_16,
          ((void*)0),
          ((void*)0),
          ((void*)0));
    FUNC_2(VAR_20.data);
    if (FUNC_0(VAR_12))
 FUNC_1(1, "accept_sec_context v2 %s",
      FUNC_5(VAR_12, VAR_13, VAR_3));

    if (VAR_16.length == 0)
 FUNC_1(1, "output.length == 0");

    VAR_20.data = VAR_16.value;
    VAR_20.length = VAR_16.length;

    VAR_21 = FUNC_8(&VAR_20, &VAR_18);
    if (VAR_21)
 FUNC_1(1, "heim_ntlm_decode_type2");

    VAR_19 = VAR_18;
    VAR_19 = FUNC_13(VAR_9);
    VAR_19 = VAR_18;
    VAR_19 = FUNC_13("workstation");

    {
 struct ntlm_buf VAR_22;
 unsigned char VAR_23[16];

 FUNC_11(VAR_11, &VAR_22);

 FUNC_7(VAR_22.data, VAR_22.length,
      VAR_9,
      VAR_18,
      VAR_18,
      &VAR_18,
      VAR_23,
      &VAR_19);
 FUNC_2(VAR_22.data);

 if (VAR_8 & VAR_5) {
     struct ntlm_buf VAR_24;
     FUNC_6(VAR_23, sizeof(VAR_23),
      &VAR_24,
      &VAR_19);
     FUNC_2(VAR_24.data);
 }
    }

    VAR_21 = FUNC_10(&VAR_19, &VAR_20);
    if (VAR_21)
 FUNC_1(1, "heim_ntlm_encode_type3");

    VAR_15.length = VAR_20.length;
    VAR_15.value = VAR_20.data;

    VAR_12 = FUNC_3(&VAR_13,
          &VAR_14,
          VAR_2,
          &VAR_15,
          VAR_0,
          ((void*)0),
          ((void*)0),
          &VAR_16,
          ((void*)0),
          ((void*)0),
          ((void*)0));
    FUNC_2(VAR_15.value);
    if (VAR_12 != VAR_4)
 FUNC_1(1, "accept_sec_context v2 2 %s",
      FUNC_5(VAR_12, VAR_13, VAR_3));

    FUNC_4(&VAR_13, &VAR_14, ((void*)0));

    return 0;
}
