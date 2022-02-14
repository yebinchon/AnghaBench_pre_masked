
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superblock_security_struct {int list; } ;
struct super_block {struct superblock_security_struct* s_security; } ;


 int FUNC_0 (struct superblock_security_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct super_block *VAR_1)
{
 struct superblock_security_struct *VAR_2 = VAR_1->s_security;

 FUNC_3(&VAR_0);
 if (!FUNC_2(&VAR_2->list))
  FUNC_1(&VAR_2->list);
 FUNC_4(&VAR_0);

 VAR_1->s_security = ((void*)0);
 FUNC_0(VAR_2);
}
