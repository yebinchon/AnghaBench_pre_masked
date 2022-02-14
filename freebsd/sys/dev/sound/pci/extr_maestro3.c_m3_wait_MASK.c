
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sc_info*,int ) ;

__attribute__((used)) static __inline int
FUNC_2(struct sc_info *VAR_1)
{
 int VAR_2;

 for (VAR_2=0 ; VAR_2<20 ; VAR_2++) {
  if ((FUNC_1(VAR_1, VAR_0) & 1) == 0) {
   return 0;
  }
  FUNC_0(2);
 }
 return -1;
}
