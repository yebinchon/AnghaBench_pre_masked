
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct gdbarch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct type* VAR_4 ;
 struct type* VAR_5 ;
 struct type* VAR_6 ;
 struct type* VAR_7 ;

__attribute__((used)) static struct type *
FUNC_0 (struct gdbarch *VAR_8, int VAR_9)
{
  if (VAR_9 == VAR_3 || VAR_9 == VAR_1)
    return VAR_6;
  if (VAR_9 == VAR_2)
    return VAR_7;



  if (VAR_9 >= VAR_0 && VAR_9 < VAR_0 + 31)
    return VAR_4;

  return VAR_5;
}
