
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct fst_iface* new_iface; struct fst_iface* old_iface; } ;
struct fst_session {TYPE_1__ data; } ;
struct fst_iface {int dummy; } ;
typedef scalar_t__ Boolean ;



void FUNC_0(struct fst_session *VAR_0, struct fst_iface *VAR_1,
      Boolean VAR_2)
{
 if (VAR_2)
  VAR_0->data.old_iface = VAR_1;
 else
  VAR_0->data.new_iface = VAR_1;

}
