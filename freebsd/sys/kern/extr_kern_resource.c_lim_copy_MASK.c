
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plimit {int pl_refcnt; int pl_rlimit; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,int) ;

void
FUNC_2(struct plimit *VAR_0, struct plimit *VAR_1)
{

 FUNC_0(VAR_0->pl_refcnt <= 1, ("lim_copy to shared limit"));
 FUNC_1(VAR_1->pl_rlimit, VAR_0->pl_rlimit, sizeof(VAR_1->pl_rlimit));
}
