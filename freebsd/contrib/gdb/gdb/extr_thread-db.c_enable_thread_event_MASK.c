
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int td_thragent_t ;
struct TYPE_4__ {scalar_t__ bptaddr; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef TYPE_2__ td_notify_t ;
typedef scalar_t__ td_err_e ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int,TYPE_2__*) ;

__attribute__((used)) static td_err_e
FUNC_3 (td_thragent_t *VAR_3, int VAR_4, CORE_ADDR *VAR_5)
{
  td_notify_t VAR_6;
  td_err_e VAR_7;


  VAR_7 = FUNC_2 (VAR_3, VAR_4, &VAR_6);
  if (VAR_7 != VAR_0)
    return VAR_7;


  (*VAR_5) = FUNC_1 (VAR_1,
           (CORE_ADDR) VAR_6.u.bptaddr,
           &VAR_2);
  FUNC_0 ((*VAR_5));

  return VAR_0;
}
