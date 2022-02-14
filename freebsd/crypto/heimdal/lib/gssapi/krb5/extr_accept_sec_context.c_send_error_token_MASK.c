
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int * krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_13__ {int member_0; int member_1; } ;
typedef TYPE_2__ krb5_data ;
typedef int krb5_context ;
typedef int gss_buffer_t ;
struct TYPE_12__ {int realm; int sname; } ;
struct TYPE_14__ {TYPE_1__ ticket; } ;
typedef scalar_t__ OM_uint32 ;
typedef TYPE_3__ AP_REQ ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*,TYPE_2__*,int ,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int **,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,int *,TYPE_2__*,int *,int *,int *,int *,TYPE_2__*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static OM_uint32
FUNC_8(OM_uint32 *VAR_3,
   krb5_context VAR_4,
   krb5_error_code VAR_5,
   krb5_principal VAR_6,
   krb5_data *VAR_7,
   gss_buffer_t VAR_8)
{
    krb5_principal VAR_9 = ((void*)0);
    krb5_error_code VAR_10;
    krb5_data VAR_11;



    krb5_data VAR_12 = { 7, FUNC_7("\x30\x05\xa1\x03\x02\x01\x02") };


    if (VAR_6 == ((void*)0)) {
 AP_REQ VAR_13;

 VAR_10 = FUNC_4(VAR_4, VAR_7, &VAR_13);
 if (VAR_10) {
     *VAR_3 = VAR_10;
     return VAR_2;
 }
 VAR_10 = FUNC_1(VAR_4,
        &VAR_9,
        VAR_13.ticket.sname,
        VAR_13.ticket.realm);
 FUNC_2(&VAR_13);
 if (VAR_10) {
     *VAR_3 = VAR_10;
     return VAR_2;
 }
 VAR_6 = VAR_9;
    }

    VAR_10 = FUNC_6(VAR_4, VAR_5, ((void*)0), &VAR_12, ((void*)0),
   VAR_6, ((void*)0), ((void*)0), &VAR_11);
    if (VAR_9)
 FUNC_5(VAR_4, VAR_9);
    if (VAR_10) {
 *VAR_3 = VAR_10;
 return VAR_2;
    }

    VAR_10 = FUNC_0(VAR_3,
          &VAR_11,
          VAR_8,
          "\x03\x00",
          VAR_0);
    FUNC_3 (&VAR_11);
    if (VAR_10)
 return VAR_10;

    *VAR_3 = 0;
    return VAR_1;
}
