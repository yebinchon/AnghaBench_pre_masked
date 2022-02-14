
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dt_gen; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef int dt_idhash_t ;
struct TYPE_6__ {scalar_t__ di_gen; } ;
typedef TYPE_2__ dt_ident_t ;


 int FUNC_0 (int *,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_1(dt_idhash_t *VAR_0, dt_ident_t *VAR_1, void *VAR_2)
{
 dtrace_hdl_t *VAR_3 = VAR_2;

 if (VAR_1->di_gen == VAR_3->dt_gen)
  FUNC_0(VAR_0, VAR_1);

 return (0);
}
