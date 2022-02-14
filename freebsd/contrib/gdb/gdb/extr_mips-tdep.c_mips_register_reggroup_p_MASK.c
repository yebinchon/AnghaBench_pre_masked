
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reggroup {int dummy; } ;
struct gdbarch {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 struct reggroup* VAR_2 ;
 struct reggroup* VAR_3 ;
 struct reggroup* VAR_4 ;
 int FUNC_3 (struct gdbarch*,int) ;
 struct reggroup* VAR_5 ;
 struct reggroup* VAR_6 ;
 struct reggroup* VAR_7 ;

__attribute__((used)) static int
FUNC_4 (struct gdbarch *VAR_8, int VAR_9,
     struct reggroup *VAR_10)
{
  int VAR_11;
  int VAR_12;
  int VAR_13;
  int VAR_14 = VAR_9 % VAR_0;
  int VAR_15 = VAR_9 / VAR_0;
  if (VAR_10 == VAR_2)
    return VAR_15;
  VAR_11 = FUNC_2 (FUNC_3 (VAR_8, VAR_9));
  VAR_12 = FUNC_1 (FUNC_3 (VAR_8, VAR_9)) == VAR_1;


  VAR_13 = VAR_14 < VAR_0;
  if (FUNC_0 (VAR_9) == ((void*)0) || FUNC_0 (VAR_9)[0] == '\0')
    return 0;
  if (VAR_10 == VAR_3)
    return VAR_12 && VAR_15;
  if (VAR_10 == VAR_7)
    return VAR_11 && VAR_15;
  if (VAR_10 == VAR_4)
    return (!VAR_11 && !VAR_12) && VAR_15;



  if (VAR_10 == VAR_6)
    return VAR_13 && VAR_15;

  if (VAR_10 == VAR_5)
    return VAR_13 && VAR_15;
  return 0;
}
