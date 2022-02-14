
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* pmap_t ;
struct TYPE_8__ {int * rs_data_ctx; } ;
struct TYPE_7__ {scalar_t__ pm_type; TYPE_2__ pm_pkru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_3(pmap_t VAR_4, pmap_t VAR_5)
{

 FUNC_1(VAR_4, VAR_1);
 FUNC_1(VAR_5, VAR_1);
 FUNC_0(VAR_4->pm_type == VAR_2);
 FUNC_0(VAR_5->pm_type == VAR_2);
 FUNC_0((VAR_3 & VAR_0) != 0);
 if (VAR_5->pm_pkru.rs_data_ctx == ((void*)0))
  return (0);
 return (FUNC_2(&VAR_4->pm_pkru, &VAR_5->pm_pkru));
}
