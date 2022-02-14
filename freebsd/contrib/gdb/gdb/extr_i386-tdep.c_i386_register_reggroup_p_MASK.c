
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reggroup {int dummy; } ;
struct gdbarch {int dummy; } ;


 int FUNC_0 (struct gdbarch*,int,struct reggroup*) ;
 struct reggroup* VAR_0 ;
 struct reggroup* VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 struct reggroup* VAR_2 ;
 int FUNC_3 (struct gdbarch*,int) ;
 scalar_t__ FUNC_4 (struct gdbarch*,int) ;
 struct reggroup* VAR_3 ;
 scalar_t__ FUNC_5 (struct gdbarch*,int) ;
 struct reggroup* VAR_4 ;

int
FUNC_6 (struct gdbarch *VAR_5, int VAR_6,
     struct reggroup *VAR_7)
{
  int VAR_8 = (FUNC_5 (VAR_5, VAR_6)
        || FUNC_4 (VAR_5, VAR_6));
  int VAR_9 = (FUNC_1 (VAR_6)
       || FUNC_2 (VAR_6));
  int VAR_10 = (FUNC_3 (VAR_5, VAR_6));

  if (VAR_7 == VAR_2)
    return VAR_10;
  if (VAR_7 == VAR_3)
    return VAR_8;
  if (VAR_7 == VAR_4)
    return (VAR_10 || VAR_8);
  if (VAR_7 == VAR_0)
    return VAR_9;
  if (VAR_7 == VAR_1)
    return (!VAR_9 && !VAR_10 && !VAR_8);

  return FUNC_0 (VAR_5, VAR_6, VAR_7);
}
