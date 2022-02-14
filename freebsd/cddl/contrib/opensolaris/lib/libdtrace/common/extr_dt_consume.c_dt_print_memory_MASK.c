
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* dt_options; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef scalar_t__ caddr_t ;
typedef int FILE ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,scalar_t__,size_t,int,int,int) ;

__attribute__((used)) static int
FUNC_1(dtrace_hdl_t *VAR_2, FILE *VAR_3, caddr_t VAR_4)
{
 int VAR_5 = (VAR_2->dt_options[VAR_0] != VAR_1);
 size_t VAR_6 = *((uintptr_t *) VAR_4);

 return (FUNC_0(VAR_2, VAR_3, VAR_4 + sizeof(uintptr_t),
     VAR_6, 50, VAR_5, 1));
}
