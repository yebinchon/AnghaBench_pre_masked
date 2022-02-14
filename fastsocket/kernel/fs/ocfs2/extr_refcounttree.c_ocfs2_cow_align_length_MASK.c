
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 unsigned int FUNC_1 (struct super_block*) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct super_block *VAR_1,
        unsigned int VAR_2)
{
 unsigned int VAR_3 =
  (VAR_2 + (FUNC_0(VAR_1) - 1)) &
  FUNC_1(VAR_1);


 if (VAR_3 < VAR_2)
  VAR_3 = VAR_0;

 return VAR_3;
}
