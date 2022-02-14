
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hostname; int * next; int * ai; int def_port; int port; int proto; } ;
typedef TYPE_1__ krb5_krbhst_info ;
typedef int krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,size_t) ;
 size_t FUNC_4 (int ) ;

krb5_error_code
FUNC_5(krb5_context VAR_1,
   krb5_krbhst_info *VAR_2,
   krb5_krbhst_info **VAR_3)
{
    size_t VAR_4 = FUNC_4(VAR_2->hostname);

    *VAR_3 = FUNC_1(1, sizeof(**VAR_3) + VAR_4);
    if(*VAR_3 == ((void*)0)) {
 FUNC_2(VAR_1, VAR_0,
          FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }

    (*VAR_3)->proto = VAR_2->proto;
    (*VAR_3)->port = VAR_2->port;
    (*VAR_3)->def_port = VAR_2->def_port;
    (*VAR_3)->ai = VAR_2->ai;
    VAR_2->ai = ((void*)0);
    (*VAR_3)->next = ((void*)0);
    FUNC_3((*VAR_3)->hostname, VAR_2->hostname, VAR_4 + 1);
    return 0;
}
