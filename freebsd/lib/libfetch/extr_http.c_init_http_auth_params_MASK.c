
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * password; int user; int realm; int scheme; } ;
typedef TYPE_1__ http_auth_params_t ;



__attribute__((used)) static void
FUNC_0(http_auth_params_t *VAR_0)
{
 VAR_0->scheme = VAR_0->realm = VAR_0->user = *(VAR_0->password = ((void*)0));
}
