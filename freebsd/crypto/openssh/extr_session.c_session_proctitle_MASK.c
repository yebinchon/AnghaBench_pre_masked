
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pw; int self; } ;
struct TYPE_4__ {int pw_name; } ;
typedef TYPE_2__ Session ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,int ) ;

void
FUNC_3(Session *VAR_0)
{
 if (VAR_0->pw == ((void*)0))
  FUNC_0("no user for session %d", VAR_0->self);
 else
  FUNC_2("%s@%s", VAR_0->pw->pw_name, FUNC_1());
}
