
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct fst_iface* new_iface; struct fst_iface* old_iface; } ;
struct fst_session {TYPE_1__ data; } ;
struct fst_iface {int dummy; } ;
typedef scalar_t__ Boolean ;



struct fst_iface * FUNC_0(struct fst_session *VAR_0, Boolean VAR_1)
{
 return VAR_1 ? VAR_0->data.old_iface : VAR_0->data.new_iface;
}
