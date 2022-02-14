
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u_int ;
struct ssh {int dummy; } ;
struct TYPE_8__ {size_t num_accept_env; int * accept_env; } ;
struct TYPE_7__ {char* name; char* val; } ;
struct TYPE_6__ {int num_env; TYPE_2__* env; } ;
typedef TYPE_1__ Session ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 TYPE_5__ VAR_0 ;
 int FUNC_3 () ;
 char* FUNC_4 (size_t*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*,int,int,int) ;

__attribute__((used)) static int
FUNC_6(struct ssh *VAR_1, Session *VAR_2)
{
 char *VAR_3, *VAR_4;
 u_int VAR_5, VAR_6, VAR_7;

 VAR_3 = FUNC_4(&VAR_5);
 VAR_4 = FUNC_4(&VAR_6);
 FUNC_3();


 if (VAR_2->num_env > 128) {
  FUNC_0("Ignoring env request %s: too many env vars", VAR_3);
  goto fail;
 }

 for (VAR_7 = 0; VAR_7 < VAR_0.num_accept_env; VAR_7++) {
  if (FUNC_2(VAR_3, VAR_0.accept_env[VAR_7])) {
   FUNC_0("Setting env %d: %s=%s", VAR_2->num_env, VAR_3, VAR_4);
   VAR_2->env = FUNC_5(VAR_2->env, VAR_2->num_env,
       VAR_2->num_env + 1, sizeof(*VAR_2->env));
   VAR_2->env[VAR_2->num_env].name = VAR_3;
   VAR_2->env[VAR_2->num_env].val = VAR_4;
   VAR_2->num_env++;
   return (1);
  }
 }
 FUNC_0("Ignoring env request %s: disallowed name", VAR_3);

 fail:
 FUNC_1(VAR_3);
 FUNC_1(VAR_4);
 return (0);
}
