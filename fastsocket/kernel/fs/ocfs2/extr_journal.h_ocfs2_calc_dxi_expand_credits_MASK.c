
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*,int) ;
 scalar_t__ FUNC_1 (struct super_block*) ;

__attribute__((used)) static inline int FUNC_2(struct super_block *VAR_1)
{
 int VAR_2 = 1 + VAR_0;

 VAR_2 += FUNC_0(VAR_1, 1);
 VAR_2 += FUNC_1(VAR_1);

 return VAR_2;
}
