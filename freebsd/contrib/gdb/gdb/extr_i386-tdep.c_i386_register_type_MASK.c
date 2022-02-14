
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct gdbarch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct type* VAR_3 ;
 struct type* VAR_4 ;
 struct type* VAR_5 ;
 struct type* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct gdbarch*,int) ;
 scalar_t__ FUNC_2 (struct gdbarch*,int) ;
 struct type* FUNC_3 (int ) ;

__attribute__((used)) static struct type *
FUNC_4 (struct gdbarch *VAR_8, int VAR_9)
{
  if (VAR_9 == VAR_1
      || VAR_9 == VAR_0 || VAR_9 == VAR_2)
    return FUNC_3 (VAR_7);

  if (FUNC_0 (VAR_9))
    return VAR_3;

  if (FUNC_2 (VAR_8, VAR_9))
    return VAR_5;

  if (FUNC_1 (VAR_8, VAR_9))
    return VAR_6;

  return VAR_4;
}
