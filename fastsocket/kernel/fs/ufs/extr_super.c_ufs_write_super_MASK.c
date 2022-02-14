
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; scalar_t__ s_dirt; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,int) ;

__attribute__((used)) static void FUNC_1(struct super_block *VAR_1)
{
 if (!(VAR_1->s_flags & VAR_0))
  FUNC_0(VAR_1, 1);
 else
  VAR_1->s_dirt = 0;
}
