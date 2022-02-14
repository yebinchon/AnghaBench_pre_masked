
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf32_arm_link_hash_table {int use_blx; int obfd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct elf32_arm_link_hash_table *VAR_2)
{
  if (FUNC_0 (VAR_2->obfd, VAR_0,
    VAR_1) > 2)
    VAR_2->use_blx = 1;
}
