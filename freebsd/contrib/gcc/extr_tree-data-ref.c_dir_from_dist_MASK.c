
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum data_dependence_direction { ____Placeholder_data_dependence_direction } data_dependence_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline enum data_dependence_direction
FUNC_0 (int VAR_3)
{
  if (VAR_3 > 0)
    return VAR_2;
  else if (VAR_3 < 0)
    return VAR_1;
  else
    return VAR_0;
}
