
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockcred {scalar_t__ sc_euid; } ;
struct port_input {int priv; } ;



__attribute__((used)) static void
FUNC_0(struct port_input *VAR_0, struct sockcred *VAR_1)
{


 if (VAR_1)
  VAR_0->priv = (VAR_1->sc_euid == 0);
 else
  VAR_0->priv = 0;
}
