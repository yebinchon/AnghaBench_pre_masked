
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int gss_qop_t ;
typedef int gss_ctx_id_t ;
struct TYPE_7__ {char* value; int length; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int gss_OID ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (scalar_t__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5(gss_ctx_id_t VAR_1, gss_ctx_id_t VAR_2, gss_OID VAR_3)
{
    gss_buffer_desc VAR_4, VAR_5;
    OM_uint32 VAR_6, VAR_7;
    gss_qop_t VAR_8;

    VAR_4.value = "bar";
    VAR_4.length = 3;

    VAR_7 = FUNC_1(&VAR_6, VAR_1, 0, &VAR_4,
      &VAR_5);
    if (VAR_7 != VAR_0)
 FUNC_0(1, "gss_get_mic failed: %s",
      FUNC_4(VAR_7, VAR_6, VAR_3));

    VAR_7 = FUNC_3(&VAR_6, VAR_2, &VAR_4,
         &VAR_5, &VAR_8);
    if (VAR_7 != VAR_0)
 FUNC_0(1, "gss_verify_mic failed: %s",
      FUNC_4(VAR_7, VAR_6, VAR_3));

    FUNC_2(&VAR_6, &VAR_5);
}
