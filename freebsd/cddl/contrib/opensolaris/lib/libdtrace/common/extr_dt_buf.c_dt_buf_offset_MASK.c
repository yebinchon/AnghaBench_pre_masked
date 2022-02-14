
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dbu_buf; scalar_t__ dbu_ptr; } ;
typedef TYPE_1__ dt_buf_t ;


 size_t FUNC_0 (size_t,size_t) ;

size_t
FUNC_1(const dt_buf_t *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = (size_t)(VAR_0->dbu_ptr - VAR_0->dbu_buf);
 return (FUNC_0(VAR_2, VAR_1));
}
