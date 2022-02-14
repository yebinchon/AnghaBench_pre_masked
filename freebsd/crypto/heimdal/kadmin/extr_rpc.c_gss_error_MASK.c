
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_context ;
struct TYPE_4__ {scalar_t__ value; scalar_t__ length; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int gss_OID ;
typedef scalar_t__ OM_uint32 ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__,scalar_t__,int ,scalar_t__*,TYPE_1__*) ;
 int FUNC_2 (scalar_t__*,TYPE_1__*) ;
 int FUNC_3 (int ,char*,int,char*) ;

__attribute__((used)) static void
FUNC_4(krb5_context VAR_0,
   gss_OID VAR_1, OM_uint32 VAR_2, OM_uint32 VAR_3)
{
    OM_uint32 VAR_4;
    OM_uint32 VAR_5 = 0;
    gss_buffer_desc VAR_6;
    OM_uint32 VAR_7;

    do {
 VAR_7 = FUNC_1 (&VAR_4,
      VAR_3,
      VAR_2,
      VAR_1,
      &VAR_5,
      &VAR_6);
 FUNC_3(VAR_0, "%.*s",
     (int)VAR_6.length,
     (char *)VAR_6.value);
 FUNC_2 (&VAR_4, &VAR_6);
    } while (!FUNC_0(VAR_7) && VAR_5 != 0);
}
