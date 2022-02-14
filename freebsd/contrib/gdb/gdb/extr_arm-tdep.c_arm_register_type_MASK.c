
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct gdbarch {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct type* VAR_4 ;
 struct type* VAR_5 ;
 struct type* VAR_6 ;

__attribute__((used)) static struct type *
FUNC_0 (struct gdbarch *VAR_7, int VAR_8)
{
  if (VAR_8 >= VAR_0 && VAR_8 < VAR_0 + VAR_2)
    {
      if (VAR_3 == VAR_1)
 return VAR_4;
      else
 return VAR_5;
    }
  else
    return VAR_6;
}
