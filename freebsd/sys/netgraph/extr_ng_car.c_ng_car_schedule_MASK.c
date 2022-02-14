
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cir; } ;
struct hookinfo {int tc; int hook; int q_callout; TYPE_1__ conf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,int,int *,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct hookinfo *VAR_2)
{
 int VAR_3;

 VAR_3 = (-(VAR_2->tc)) * VAR_0 * 8 / VAR_2->conf.cir + 1;

 FUNC_1(&VAR_2->q_callout, FUNC_0(VAR_2->hook), VAR_2->hook,
     VAR_3, &VAR_1, ((void*)0), 0);
}
