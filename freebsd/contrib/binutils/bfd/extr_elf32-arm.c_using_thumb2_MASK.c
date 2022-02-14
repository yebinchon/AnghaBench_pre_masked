
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf32_arm_link_hash_table {int obfd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1 (struct elf32_arm_link_hash_table *VAR_4)
{
  int VAR_5 = FUNC_0 (VAR_4->obfd, VAR_0,
           VAR_3);
  return VAR_5 == VAR_1 || VAR_5 >= VAR_2;
}
