
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigacts {int ps_mtx; int ps_refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sigacts* FUNC_0 (int,int ,int) ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int FUNC_2 (int *,int) ;

struct sigacts *
FUNC_3(void)
{
 struct sigacts *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct sigacts), VAR_1, VAR_2 | VAR_3);
 FUNC_2(&VAR_4->ps_refcnt, 1);
 FUNC_1(&VAR_4->ps_mtx, "sigacts", ((void*)0), VAR_0);
 return (VAR_4);
}
