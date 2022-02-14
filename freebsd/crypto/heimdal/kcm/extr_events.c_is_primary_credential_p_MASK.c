
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int krb5_flags ;
struct TYPE_8__ {int * client; } ;
typedef TYPE_2__ krb5_creds ;
typedef int krb5_context ;
typedef TYPE_3__* kcm_ccache ;
struct TYPE_9__ {TYPE_1__* creds; int * client; } ;
struct TYPE_7__ {int cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,TYPE_2__*,int *) ;
 int FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static int
FUNC_2(krb5_context VAR_6,
   kcm_ccache VAR_7,
   krb5_creds *VAR_8)
{
    krb5_flags VAR_9;

    if (VAR_7->client == ((void*)0))
 return 0;

    if (VAR_8->client == ((void*)0) ||
 !FUNC_1(VAR_6, VAR_7->client, VAR_8->client))
 return 0;


    if (VAR_7->creds == ((void*)0))
 return 0;

    VAR_9 = VAR_4 | VAR_2 |
    VAR_5 | VAR_1 |
    VAR_0 | VAR_3;

    return FUNC_0(VAR_6, VAR_9, VAR_8, &VAR_7->creds->cred);
}
