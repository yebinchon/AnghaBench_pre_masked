
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_info {int rt6i_flags; } ;


 int FUNC_0 (char*,struct rt6_info*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct rt6_info *VAR_1, void *VAR_2)
{
 if (VAR_1->rt6i_flags & VAR_0) {
  FUNC_0("pruning clone %p\n", VAR_1);
  return -1;
 }

 return 0;
}
