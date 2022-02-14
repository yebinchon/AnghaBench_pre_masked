
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct netent_data {int dummy; } ;
struct netent {int dummy; } ;
typedef TYPE_1__* res_state ;
struct TYPE_4__ {int res_h_errno; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (struct netent*,struct netent*,char*,size_t) ;
 struct netent_data* FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (struct netent*,struct netent_data*) ;

int
FUNC_5(struct netent *VAR_2, char *VAR_3, size_t VAR_4,
    struct netent **VAR_5, int *VAR_6)
{
 struct netent_data *VAR_7;
 struct netent VAR_8;
 res_state VAR_9;

 VAR_9 = FUNC_3();
 if ((VAR_7 = FUNC_2()) == ((void*)0)) {
  FUNC_0(VAR_9, VAR_0);
  *VAR_6 = VAR_9->res_h_errno;
  return (-1);
 }
 if (FUNC_4(&VAR_8, VAR_7) != 0)
  return (-1);
 if (FUNC_1(&VAR_8, VAR_2, VAR_3, VAR_4) != 0) {
  FUNC_0(VAR_9, VAR_0);
  *VAR_6 = VAR_9->res_h_errno;
  return ((VAR_1 != 0) ? VAR_1 : -1);
 }
 *VAR_5 = VAR_2;
 return (0);
}
