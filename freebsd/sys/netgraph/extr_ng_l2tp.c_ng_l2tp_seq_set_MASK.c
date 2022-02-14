
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ng_l2tp_seq_config {scalar_t__ xack; scalar_t__ nr; scalar_t__ ns; scalar_t__ rack; } ;
struct l2tp_seq {scalar_t__ ns; scalar_t__ nr; scalar_t__ rack; scalar_t__ xack; } ;
typedef TYPE_2__* priv_p ;
struct TYPE_4__ {scalar_t__ enabled; } ;
struct TYPE_5__ {TYPE_1__ conf; struct l2tp_seq seq; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(priv_p VAR_2, const struct ng_l2tp_seq_config *VAR_3)
{
 struct l2tp_seq *const VAR_4 = &VAR_2->seq;


 if (VAR_2->conf.enabled)
  return (VAR_0);


 if (VAR_3->xack != VAR_3->nr || VAR_3->ns != VAR_3->rack)
  return (VAR_1);


 VAR_4->ns = VAR_3->ns;
 VAR_4->nr = VAR_3->nr;
 VAR_4->rack = VAR_3->rack;
 VAR_4->xack = VAR_3->xack;

 return (0);
}
