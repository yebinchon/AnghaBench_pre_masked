
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static inline unsigned int
FUNC_0(const struct super_block *VAR_4, unsigned int VAR_5, int VAR_6)
{
 unsigned long VAR_7;

 VAR_7 = (((unsigned long)VAR_4>>VAR_0) ^ VAR_5) * (VAR_1 - VAR_6);
 return (VAR_7 + (VAR_7 >> VAR_2)) & VAR_3;
}
