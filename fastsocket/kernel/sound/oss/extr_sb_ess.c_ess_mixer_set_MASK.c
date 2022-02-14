
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int recmask; int submodel; } ;
typedef TYPE_1__ sb_devc ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int,int) ;

int FUNC_2(sb_devc *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 if (FUNC_0 (VAR_1->submodel) && (VAR_1->recmask & (1 << VAR_2))) {
  FUNC_1 (VAR_1, VAR_2 + VAR_0, VAR_3, VAR_4);
 }
 return FUNC_1 (VAR_1, VAR_2, VAR_3, VAR_4);
}
