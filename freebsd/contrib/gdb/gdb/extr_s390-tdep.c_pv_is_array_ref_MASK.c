
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prologue_value {scalar_t__ kind; int k; } ;
typedef enum pv_boolean { ____Placeholder_pv_boolean } pv_boolean ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct prologue_value*,struct prologue_value*,struct prologue_value*) ;

__attribute__((used)) static enum pv_boolean
FUNC_1 (struct prologue_value *VAR_4,
                 CORE_ADDR VAR_5,
                 struct prologue_value *VAR_6,
                 CORE_ADDR VAR_7,
                 CORE_ADDR VAR_8,
                 int *VAR_9)
{
  struct prologue_value VAR_10;




  FUNC_0 (&VAR_10, VAR_4, VAR_6);

  if (VAR_10.kind == VAR_0)
    {






      if (VAR_10.k <= -VAR_5
          && VAR_10.k >= VAR_7 * VAR_8)
        return VAR_1;
      else if (VAR_10.k % VAR_8 != 0
               || VAR_5 != VAR_8)
        return VAR_3;
      else
        {
          *VAR_9 = VAR_10.k / VAR_8;
          return VAR_2;
        }
    }
  else
    return VAR_3;
}
