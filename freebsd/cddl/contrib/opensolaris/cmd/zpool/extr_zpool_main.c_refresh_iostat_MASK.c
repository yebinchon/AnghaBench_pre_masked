
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_2__ {int cb_list; } ;
typedef TYPE_1__ iostat_cbdata_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;

__attribute__((used)) static int
FUNC_2(zpool_handle_t *VAR_0, void *VAR_1)
{
 iostat_cbdata_t *VAR_2 = VAR_1;
 boolean_t VAR_3;




 if (FUNC_1(VAR_0, &VAR_3) != 0)
  return (-1);

 if (VAR_3)
  FUNC_0(VAR_2->cb_list, VAR_0);

 return (0);
}
