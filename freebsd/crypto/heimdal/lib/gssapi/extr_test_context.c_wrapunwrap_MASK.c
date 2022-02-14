
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
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (scalar_t__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,TYPE_1__*,TYPE_1__*,int*,int *) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,int,int ,TYPE_1__*,int*,TYPE_1__*) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5(gss_ctx_id_t VAR_1, gss_ctx_id_t VAR_2, int VAR_3, gss_OID VAR_4)
{
    gss_buffer_desc VAR_5, VAR_6, VAR_7;
    OM_uint32 VAR_8, VAR_9;
    gss_qop_t VAR_10;
    int VAR_11;

    VAR_5.value = "foo";
    VAR_5.length = 3;

    VAR_9 = FUNC_3(&VAR_8, VAR_1, VAR_3, 0, &VAR_5,
   &VAR_11, &VAR_6);
    if (VAR_9 != VAR_0)
 FUNC_0(1, "gss_wrap failed: %s",
      FUNC_4(VAR_9, VAR_8, VAR_4));

    VAR_9 = FUNC_2(&VAR_8, VAR_2, &VAR_6,
     &VAR_7, &VAR_11, &VAR_10);
    if (VAR_9 != VAR_0)
 FUNC_0(1, "gss_unwrap failed: %s",
      FUNC_4(VAR_9, VAR_8, VAR_4));

    FUNC_1(&VAR_8, &VAR_6);
    FUNC_1(&VAR_8, &VAR_7);





}
