
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gfp_t ;
struct TYPE_2__ {int attr; scalar_t__ ignore_gfp_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *,size_t) ;

bool FUNC_1(size_t VAR_3, gfp_t VAR_4)
{
 if (VAR_4 & VAR_0)
  return 0;

        if (VAR_2.ignore_gfp_wait && (VAR_4 & VAR_1))
  return 0;

 return FUNC_0(&VAR_2.attr, VAR_3);
}
