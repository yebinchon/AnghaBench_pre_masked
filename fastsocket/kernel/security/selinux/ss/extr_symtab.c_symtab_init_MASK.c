
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {scalar_t__ nprim; int table; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(struct symtab *VAR_3, unsigned int VAR_4)
{
 VAR_3->table = FUNC_0(VAR_2, VAR_1, VAR_4);
 if (!VAR_3->table)
  return -VAR_0;
 VAR_3->nprim = 0;
 return 0;
}
