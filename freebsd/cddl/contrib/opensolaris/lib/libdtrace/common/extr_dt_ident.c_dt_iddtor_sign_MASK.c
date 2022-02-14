
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * dis_args; } ;
typedef TYPE_1__ dt_idsig_t ;
struct TYPE_5__ {int * di_data; } ;
typedef TYPE_2__ dt_ident_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(dt_ident_t *VAR_0)
{
 if (VAR_0->di_data != ((void*)0))
  FUNC_0(((dt_idsig_t *)VAR_0->di_data)->dis_args);
 FUNC_0(VAR_0->di_data);
}
