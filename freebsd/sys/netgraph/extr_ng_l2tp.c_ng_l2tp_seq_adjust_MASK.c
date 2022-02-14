
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct ng_l2tp_config {scalar_t__ peer_win; int enabled; } ;
struct l2tp_seq {scalar_t__ wmax; } ;
typedef TYPE_1__* priv_p ;
struct TYPE_4__ {struct l2tp_seq seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(priv_p VAR_3, const struct ng_l2tp_config *VAR_4)
{
 struct l2tp_seq *const VAR_5 = &VAR_3->seq;
 u_int16_t VAR_6;


 if (!VAR_4->enabled) {
  FUNC_0(VAR_3);
  return (0);
 }


 VAR_6 = VAR_4->peer_win;
 if (VAR_6 > VAR_2)
  VAR_6 = VAR_2;
 if (VAR_6 == 0)
  return (VAR_1);
 if (VAR_6 < VAR_5->wmax)
  return (VAR_0);
 VAR_5->wmax = VAR_6;


 return (0);
}
