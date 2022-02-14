
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net {int dummy; } ;
struct TYPE_4__ {int * proc_ent; scalar_t__ content_ent; scalar_t__ channel_ent; scalar_t__ flush_ent; } ;
struct TYPE_3__ {TYPE_2__ procfs; } ;
struct cache_detail {char* name; TYPE_1__ u; } ;


 int * VAR_0 ;
 int FUNC_0 (char*,int *) ;

__attribute__((used)) static void FUNC_1(struct cache_detail *VAR_1, struct net *VAR_2)
{
 if (VAR_1->u.procfs.proc_ent == ((void*)0))
  return;
 if (VAR_1->u.procfs.flush_ent)
  FUNC_0("flush", VAR_1->u.procfs.proc_ent);
 if (VAR_1->u.procfs.channel_ent)
  FUNC_0("channel", VAR_1->u.procfs.proc_ent);
 if (VAR_1->u.procfs.content_ent)
  FUNC_0("content", VAR_1->u.procfs.proc_ent);
 VAR_1->u.procfs.proc_ent = ((void*)0);
 FUNC_0(VAR_1->name, VAR_0);
}
