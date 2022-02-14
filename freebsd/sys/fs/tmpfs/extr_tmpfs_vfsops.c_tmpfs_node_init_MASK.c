
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpfs_node {int tn_gen; int tn_interlock; scalar_t__ tn_id; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, int VAR_2, int VAR_3)
{
 struct tmpfs_node *VAR_4 = (struct tmpfs_node *)VAR_1;
 VAR_4->tn_id = 0;

 FUNC_1(&VAR_4->tn_interlock, "tmpfs node interlock", ((void*)0), VAR_0);
 VAR_4->tn_gen = FUNC_0();

 return (0);
}
