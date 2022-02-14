
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reggroup {int dummy; } ;
struct gdbarch_tdep {int dummy; } ;
struct gdbarch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct gdbarch*,int,struct reggroup*) ;
 struct reggroup* VAR_9 ;
 struct gdbarch_tdep* FUNC_1 (struct gdbarch*) ;
 struct reggroup* VAR_10 ;
 struct reggroup* VAR_11 ;
 struct reggroup* VAR_12 ;

__attribute__((used)) static int
FUNC_2 (struct gdbarch *VAR_13, int VAR_14,
     struct reggroup *VAR_15)
{
  struct gdbarch_tdep *VAR_16 = FUNC_1 (VAR_13);


  if (VAR_15 == VAR_10)
    return (VAR_14 >= VAR_7 && VAR_14 <= VAR_8)
    || VAR_14 == VAR_4
    || VAR_14 == VAR_0;


  if (VAR_15 == VAR_9)
    return (VAR_14 >= VAR_1 && VAR_14 <= VAR_2)
    || VAR_14 == VAR_3;



  if (VAR_15 == VAR_12 || VAR_15 == VAR_11)
    return VAR_14 != VAR_6 && VAR_14 != VAR_5;

  return FUNC_0 (VAR_13, VAR_14, VAR_15);
}
