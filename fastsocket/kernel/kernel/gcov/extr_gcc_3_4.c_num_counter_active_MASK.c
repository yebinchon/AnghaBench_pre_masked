
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_info {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct gcov_info*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct gcov_info *VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (FUNC_0(VAR_1, VAR_2))
   VAR_3++;
 }
 return VAR_3;
}
