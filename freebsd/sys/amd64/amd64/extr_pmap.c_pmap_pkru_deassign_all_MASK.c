
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pmap_t ;
struct TYPE_4__ {scalar_t__ pm_type; int pm_pkru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(pmap_t VAR_4)
{

 FUNC_0(VAR_4, VAR_1);
 if (VAR_4->pm_type == VAR_2 &&
     (VAR_3 & VAR_0) != 0)
  FUNC_1(&VAR_4->pm_pkru);
}
