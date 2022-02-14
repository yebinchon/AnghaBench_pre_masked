
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int td_thragent_t ;
struct TYPE_4__ {int bptaddr; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef TYPE_2__ td_notify_t ;
typedef scalar_t__ td_err_e ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int,TYPE_2__*) ;

__attribute__((used)) static td_err_e
FUNC_4 (td_thragent_t *VAR_4, int VAR_5, CORE_ADDR *VAR_6)
{
  td_notify_t VAR_7;
  td_err_e VAR_8;


  VAR_8 = FUNC_3 (VAR_4, VAR_5, &VAR_7);
  if (VAR_8 != VAR_0)
    return VAR_8;


  (*VAR_6) = FUNC_2 (VAR_2,
            FUNC_1(&VAR_7.u.bptaddr, VAR_1),
            &VAR_3);
  FUNC_0 ((*VAR_6));

  return VAR_0;
}
