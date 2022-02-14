
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int va_mask; } ;
struct TYPE_5__ {int xva_xoptattrs; TYPE_1__ xva_vattr; } ;
typedef TYPE_2__ xvattr_t ;
typedef int xoptattr_t ;


 int VAR_0 ;

xoptattr_t *
FUNC_0(xvattr_t *VAR_1)
{
 xoptattr_t *VAR_2 = ((void*)0);
 if (VAR_1->xva_vattr.va_mask & VAR_0)
  VAR_2 = &VAR_1->xva_xoptattrs;
 return (VAR_2);
}
