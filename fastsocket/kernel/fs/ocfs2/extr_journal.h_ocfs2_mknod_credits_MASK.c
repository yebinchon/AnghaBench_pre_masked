
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;

__attribute__((used)) static inline int FUNC_2(struct super_block *VAR_2, int VAR_3,
          int VAR_4)
{
 int VAR_5 = VAR_0;

 if (VAR_3)
  VAR_5 += FUNC_0(VAR_2);

 return 4 + VAR_1 + VAR_5 + VAR_4 +
        FUNC_1(VAR_2);
}
