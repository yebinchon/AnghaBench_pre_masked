
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lacp_port {TYPE_1__* lp_lsc; } ;
struct TYPE_2__ {scalar_t__ lsc_strict_mode; } ;


 int FUNC_0 (struct lacp_port*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct lacp_port*,int *) ;

__attribute__((used)) static void
FUNC_2(struct lacp_port *VAR_2)
{

 FUNC_0(VAR_2);

 if (VAR_2->lp_lsc->lsc_strict_mode)
  FUNC_1(VAR_2,
      &VAR_1);
 else
  FUNC_1(VAR_2,
      &VAR_0);
}
