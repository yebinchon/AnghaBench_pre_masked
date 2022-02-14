
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int * krb5_const_principal ;
typedef scalar_t__ krb5_boolean ;
struct TYPE_4__ {int acl_file; } ;
struct TYPE_5__ {int context; int caller; TYPE_1__ config; } ;
typedef TYPE_2__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
typedef int buf ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char*,unsigned int*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,char*,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int *,int ) ;
 char* FUNC_8 (char*,char*,char**) ;

__attribute__((used)) static kadm5_ret_t
FUNC_9 (kadm5_server_context *VAR_0,
    krb5_const_principal VAR_1,
    unsigned *VAR_2)
{
    FILE *VAR_3;
    krb5_error_code VAR_4 = 0;
    char VAR_5[256];

    *VAR_2 = 0;


    VAR_3 = FUNC_3(VAR_0->config.acl_file, "r");
    if (VAR_3 == ((void*)0))
 return 0;

    while(FUNC_2(VAR_5, sizeof(VAR_5), VAR_3) != ((void*)0)) {
 char *VAR_6 = ((void*)0), *VAR_7;
 krb5_principal VAR_8;
 unsigned VAR_9 = 0;

 VAR_7 = FUNC_8(VAR_5, " \t\n", &VAR_6);
 if(VAR_7 == ((void*)0))
     continue;
 if (*VAR_7 == '#')
     continue;
 VAR_4 = FUNC_5(VAR_0->context, VAR_7, &VAR_8);
 if(VAR_4)
     break;
 if(!FUNC_6(VAR_0->context,
       VAR_0->caller, VAR_8)) {
     FUNC_4(VAR_0->context, VAR_8);
     continue;
 }
 FUNC_4(VAR_0->context, VAR_8);
 VAR_7 = FUNC_8(((void*)0), " \t\n", &VAR_6);
 if(VAR_7 == ((void*)0))
     continue;
 VAR_4 = FUNC_0(VAR_7, &VAR_9);
 if (VAR_4)
     break;
 VAR_7 = FUNC_8(((void*)0), " \t\n", &VAR_6);
 if (VAR_7 == ((void*)0)) {
     *VAR_2 = VAR_9;
     break;
 }
 if (VAR_1 != ((void*)0)) {
     krb5_principal VAR_10;
     krb5_boolean VAR_11;

     VAR_4 = FUNC_5 (VAR_0->context, VAR_7, &VAR_10);
     if (VAR_4)
  break;
     VAR_11 = FUNC_7 (VAR_0->context,
       VAR_1, VAR_10);
     FUNC_4 (VAR_0->context, VAR_10);
     if (VAR_11) {
  *VAR_2 = VAR_9;
  break;
     }
 }
    }
    FUNC_1(VAR_3);
    return VAR_4;
}
