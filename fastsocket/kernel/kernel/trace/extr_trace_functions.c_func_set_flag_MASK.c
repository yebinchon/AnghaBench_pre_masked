
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(u32 VAR_5, u32 VAR_6, int VAR_7)
{
 if (VAR_6 == VAR_1) {

  if (!!VAR_7 == !!(VAR_2.val & VAR_1))
   return 0;

  if (VAR_7) {
   FUNC_1(&VAR_3);
   FUNC_0(&VAR_4);
  } else {
   FUNC_1(&VAR_4);
   FUNC_0(&VAR_3);
  }

  return 0;
 }

 return -VAR_0;
}
