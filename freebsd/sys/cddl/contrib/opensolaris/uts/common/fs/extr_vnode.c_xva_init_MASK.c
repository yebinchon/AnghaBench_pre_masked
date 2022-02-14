
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int va_mask; } ;
struct TYPE_6__ {int * xva_rtnattrmap; int * xva_rtnattrmapp; TYPE_1__ xva_vattr; int xva_magic; int xva_mapsize; } ;
typedef TYPE_2__ xvattr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;

void
FUNC_1(xvattr_t *VAR_3)
{
 FUNC_0(VAR_3, sizeof (xvattr_t));
 VAR_3->xva_mapsize = VAR_2;
 VAR_3->xva_magic = VAR_1;
 VAR_3->xva_vattr.va_mask = VAR_0;
 VAR_3->xva_rtnattrmapp = &(VAR_3->xva_rtnattrmap)[0];
}
