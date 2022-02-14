
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpl_spec_kind ;
struct cp_binding_level {scalar_t__ kind; scalar_t__ explicit_spec_p; struct cp_binding_level* level_chain; } ;


 struct cp_binding_level* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

tmpl_spec_kind
FUNC_0 (int VAR_11)
{
  int VAR_12 = 0;
  int VAR_13 = 0;
  int VAR_14 = 0;
  struct cp_binding_level *VAR_15;


  for (VAR_15 = VAR_0;
       VAR_15->kind == VAR_2;
       VAR_15 = VAR_15->level_chain)
    {
      if (VAR_15->explicit_spec_p)
 {
   if (VAR_12 == 0)
     VAR_14 = 1;
   else
     VAR_13 = 1;
 }
      else if (VAR_13 == 1)
 return VAR_8;

      ++VAR_12;
    }


  if (VAR_1)
    {
      if (VAR_12 != 0)






 return VAR_7;
      else
 return VAR_4;
    }

  if (VAR_12 < VAR_11)







    return VAR_6;
  else if (VAR_12 == VAR_11)







    return VAR_9;
  else if (VAR_12 > VAR_11 + 1)





    return VAR_3;
  else







    return VAR_14 ? VAR_5 : VAR_10;
}
