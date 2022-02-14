
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dtrace_typeinfo_t ;
struct TYPE_4__ {scalar_t__ dt_errno; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int *,int ,int ,int *,int *,int *) ;

int
FUNC_1(dtrace_hdl_t *VAR_2, FILE *VAR_3, dtrace_typeinfo_t *VAR_4)
{
 (void) FUNC_0(VAR_2, VAR_1,
     VAR_0, VAR_4, 0, 0, ((void*)0), VAR_3, ((void*)0));
 return (VAR_2->dt_errno ? -1 : 0);
}
