
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ gss_name_t ;
typedef int gss_cred_id_t ;
struct TYPE_3__ {int length; int value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int gss_OID_set ;
typedef int gss_OID ;
typedef int OM_uint32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,scalar_t__,int ,int ,int,int *,int *,int *) ;
 int FUNC_4 (int *,TYPE_1__*,int ,scalar_t__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,scalar_t__*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static gss_cred_id_t
FUNC_12(const char *VAR_2,
       gss_OID VAR_3,
       gss_OID_set VAR_4,
       int VAR_5)
{
    OM_uint32 VAR_6, VAR_7;
    gss_cred_id_t VAR_8;
    OM_uint32 VAR_9;
    gss_buffer_desc VAR_10;
    gss_name_t VAR_11 = VAR_0;

    if (VAR_2) {
 VAR_10.value = FUNC_9(VAR_2);
 VAR_10.length = FUNC_10(VAR_2);

 VAR_6 = FUNC_4(&VAR_7,
           &VAR_10,
           VAR_3,
           &VAR_11);
 if (FUNC_0(VAR_6))
     FUNC_1(1, "import_name failed");
    }

    VAR_6 = FUNC_3(&VAR_7,
        VAR_11,
        0,
        VAR_4,
        VAR_5,
        &VAR_8,
        ((void*)0),
        &VAR_9);
    if (FUNC_0(VAR_6)) {
 FUNC_11("acquire_cred failed: %s",
      FUNC_7(VAR_6, VAR_7, VAR_1));
    } else {
 FUNC_8(VAR_9);
 FUNC_5(&VAR_7, &VAR_8);
    }

    if (VAR_11 != VAR_0)
 FUNC_6(&VAR_7, &VAR_11);

    if (FUNC_0(VAR_6))
 FUNC_2(1);

    return VAR_8;
}
