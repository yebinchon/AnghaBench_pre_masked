
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {char const* rdomain_in; TYPE_1__* state; } ;
struct TYPE_2__ {int connection_in; } ;


 char const* FUNC_0 (int ) ;
 int FUNC_1 (struct ssh*) ;

const char *
FUNC_2(struct ssh *VAR_0)
{
 if (VAR_0->rdomain_in != ((void*)0))
  return VAR_0->rdomain_in;
 if (!FUNC_1(VAR_0))
  return ((void*)0);
 VAR_0->rdomain_in = FUNC_0(VAR_0->state->connection_in);
 return VAR_0->rdomain_in;
}
