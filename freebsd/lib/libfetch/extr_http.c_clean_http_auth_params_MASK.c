
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ password; scalar_t__ user; scalar_t__ realm; scalar_t__ scheme; } ;
typedef TYPE_1__ http_auth_params_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(http_auth_params_t *VAR_0)
{
 if (VAR_0->scheme)
  FUNC_0(VAR_0->scheme);
 if (VAR_0->realm)
  FUNC_0(VAR_0->realm);
 if (VAR_0->user)
  FUNC_0(VAR_0->user);
 if (VAR_0->password)
  FUNC_0(VAR_0->password);
 FUNC_1(VAR_0);
}
