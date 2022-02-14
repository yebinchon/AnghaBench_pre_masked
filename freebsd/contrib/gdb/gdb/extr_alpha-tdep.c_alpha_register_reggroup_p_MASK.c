
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reggroup {int dummy; } ;
struct gdbarch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int) ;
 struct reggroup* VAR_4 ;
 struct reggroup* VAR_5 ;
 struct reggroup* VAR_6 ;
 struct reggroup* VAR_7 ;
 struct reggroup* VAR_8 ;
 struct reggroup* VAR_9 ;

__attribute__((used)) static int
FUNC_1 (struct gdbarch *VAR_10, int VAR_11,
      struct reggroup *VAR_12)
{


  if (FUNC_0 (VAR_11) == ((void*)0) || *FUNC_0 (VAR_11) == '\0')
    return 0;

  if (VAR_12 == VAR_4)
    return 1;





  if (VAR_11 == VAR_3)
    return 0;


  if (VAR_12 == VAR_8 || VAR_12 == VAR_7)
    return 1;




  if (VAR_11 == VAR_2)
    return VAR_12 == VAR_9;


  if (VAR_11 == VAR_1)
    return VAR_12 == VAR_5;

  if (VAR_11 >= VAR_0 && VAR_11 < VAR_0 + 31)
    return VAR_12 == VAR_5;
  else
    return VAR_12 == VAR_6;
}
