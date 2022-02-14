
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dt_pfargv_t ;
struct TYPE_6__ {char* pfd_fmt; } ;
typedef TYPE_1__ dt_pfargd_t ;
struct TYPE_7__ {int dn_flags; } ;
typedef TYPE_2__ dt_node_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(dt_pfargv_t *VAR_1, dt_pfargd_t *VAR_2, dt_node_t *VAR_3)
{
 if (VAR_3->dn_flags & VAR_0)
  VAR_2->pfd_fmt[FUNC_1(VAR_2->pfd_fmt) - 1] = 'i';
 else
  VAR_2->pfd_fmt[FUNC_1(VAR_2->pfd_fmt) - 1] = 'u';

 return (FUNC_0(VAR_3));
}
