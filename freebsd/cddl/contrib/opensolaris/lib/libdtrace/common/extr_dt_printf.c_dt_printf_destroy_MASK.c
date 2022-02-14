
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* pfv_format; struct TYPE_5__* pfd_next; struct TYPE_5__* pfv_argv; } ;
typedef TYPE_1__ dt_pfargv_t ;
typedef TYPE_1__ dt_pfargd_t ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(dt_pfargv_t *VAR_0)
{
 dt_pfargd_t *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0->pfv_argv; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
  VAR_2 = VAR_1->pfd_next;
  FUNC_0(VAR_1);
 }

 FUNC_0(VAR_0->pfv_format);
 FUNC_0(VAR_0);
}
