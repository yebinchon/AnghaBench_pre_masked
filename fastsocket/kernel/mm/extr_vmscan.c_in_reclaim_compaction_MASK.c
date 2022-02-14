
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scan_control {scalar_t__ order; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_0(int VAR_3, struct scan_control *VAR_4)
{
 if (VAR_0 && VAR_4->order &&
   (VAR_4->order > VAR_2 ||
    VAR_3 < VAR_1 - 2))
  return 1;

 return 0;
}
