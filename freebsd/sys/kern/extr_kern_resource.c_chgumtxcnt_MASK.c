
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uidinfo {int ui_umtxcnt; } ;
typedef int rlim_t ;


 int FUNC_0 (struct uidinfo*,int *,int,int ,char*) ;

int
FUNC_1(struct uidinfo *VAR_0, int VAR_1, rlim_t VAR_2)
{

 return (FUNC_0(VAR_0, &VAR_0->ui_umtxcnt, VAR_1, VAR_2, "umtxcnt"));
}
