
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int as_drops; int as_stale; int as_mok; int as_merr; int as_uerr; } ;
typedef TYPE_1__ amq_mount_stats ;


 int FUNC_0 (char*,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_1(amq_mount_stats *VAR_0)
{
  FUNC_0("requests  stale     mount     mount     unmount\ndeferred  fhandles  ok        failed    failed\n%-9d %-9d %-9d %-9d %-9d\n",



  VAR_0->as_drops, VAR_0->as_stale, VAR_0->as_mok, VAR_0->as_merr, VAR_0->as_uerr);
}
