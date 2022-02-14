
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct type* VAR_8 ;
 struct type* VAR_9 ;
 struct type* VAR_10 ;
 struct type* VAR_11 ;
 struct type* VAR_12 ;

__attribute__((used)) static struct type *
FUNC_0 (struct gdbarch *VAR_13, int VAR_14)
{
  if (VAR_14 >= VAR_4 && VAR_14 <= VAR_5)
    return VAR_9;

  if (VAR_14 >= VAR_0 && VAR_14 <= VAR_1)
    return VAR_8;

  if (VAR_14 == VAR_7 || VAR_14 == VAR_6)
    return VAR_11;

  if (VAR_14 == VAR_3 || VAR_14 == VAR_2)
    return VAR_12;

  return VAR_10;
}
