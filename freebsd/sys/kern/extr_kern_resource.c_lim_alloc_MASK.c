
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plimit {int pl_refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct plimit* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int *,int) ;

struct plimit *
FUNC_2()
{
 struct plimit *VAR_2;

 VAR_2 = FUNC_0(sizeof(struct plimit), VAR_0, VAR_1);
 FUNC_1(&VAR_2->pl_refcnt, 1);
 return (VAR_2);
}
