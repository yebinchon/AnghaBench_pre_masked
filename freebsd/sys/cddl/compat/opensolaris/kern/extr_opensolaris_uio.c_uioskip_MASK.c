
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t uio_resid; int uio_segflg; int uio_rw; } ;
typedef TYPE_1__ uio_t ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int FUNC_0 (int *,size_t,int ,TYPE_1__*) ;

void
FUNC_1(uio_t *VAR_1, size_t VAR_2)
{
 enum uio_seg VAR_3;


 if (VAR_2 > VAR_1->uio_resid)
  return;

 VAR_3 = VAR_1->uio_segflg;
 VAR_1->uio_segflg = VAR_0;
 FUNC_0(((void*)0), VAR_2, VAR_1->uio_rw, VAR_1);
 VAR_1->uio_segflg = VAR_3;
}
