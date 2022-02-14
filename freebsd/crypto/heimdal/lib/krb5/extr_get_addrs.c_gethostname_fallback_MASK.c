
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hostent {int h_length; int h_addr; int h_addrtype; } ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_6__ {int len; TYPE_2__* val; } ;
typedef TYPE_1__ krb5_addresses ;
typedef int hostname ;
struct TYPE_8__ {scalar_t__ length; int * data; } ;
struct TYPE_7__ {TYPE_3__ address; int addr_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (int ,scalar_t__,char*,...) ;
 TYPE_2__* FUNC_5 (int) ;
 struct hostent* FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static krb5_error_code
FUNC_8 (krb5_context VAR_3, krb5_addresses *VAR_4)
{
    krb5_error_code VAR_5;
    char VAR_6[VAR_1];
    struct hostent *VAR_7;

    if (FUNC_2 (VAR_6, sizeof(VAR_6))) {
 VAR_5 = VAR_2;
 FUNC_4(VAR_3, VAR_5, "gethostname: %s", FUNC_7(VAR_5));
 return VAR_5;
    }
    VAR_7 = FUNC_6 (VAR_6);
    if (VAR_7 == ((void*)0)) {
 VAR_5 = VAR_2;
 FUNC_4 (VAR_3, VAR_5, "gethostbyname %s: %s",
    VAR_6, FUNC_7(VAR_5));
 return VAR_5;
    }
    VAR_4->len = 1;
    VAR_4->val = FUNC_5 (sizeof(*VAR_4->val));
    if (VAR_4->val == ((void*)0)) {
 FUNC_4(VAR_3, VAR_0, FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }
    VAR_4->val[0].addr_type = VAR_7->h_addrtype;
    VAR_4->val[0].address.data = ((void*)0);
    VAR_4->val[0].address.length = 0;
    VAR_5 = FUNC_3 (&VAR_4->val[0].address,
     VAR_7->h_addr,
     VAR_7->h_length);
    if (VAR_5) {
 FUNC_1 (VAR_4->val);
 return VAR_5;
    }
    return 0;
}
