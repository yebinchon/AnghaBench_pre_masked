
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;
struct c_scope {int dummy; } ;
typedef int location_t ;


 int FUNC_0 (char*,int ,struct c_scope*,int,int) ;
 scalar_t__ VAR_0 ;
 struct c_scope* VAR_1 ;
 struct c_scope* VAR_2 ;
 int FUNC_1 (char*,int *,...) ;
 int VAR_3 ;

void
FUNC_2 (tree VAR_4, location_t VAR_5)
{
  static bool VAR_6 = 0;
  struct c_scope *VAR_7;

  if (VAR_0 == 0)
    {
      FUNC_1 ("%H%qE undeclared here (not in a function)", &VAR_5, VAR_4);
      VAR_7 = VAR_2;
    }
  else
    {
      FUNC_1 ("%H%qE undeclared (first use in this function)", &VAR_5, VAR_4);

      if (!VAR_6)
 {
   FUNC_1 ("%H(Each undeclared identifier is reported only once", &VAR_5);
   FUNC_1 ("%Hfor each function it appears in.)", &VAR_5);
   VAR_6 = 1;
 }



      VAR_7 = VAR_1 ? VAR_1 : VAR_2;
    }
  FUNC_0 (VAR_4, VAR_3, VAR_7, 0, 0);
}
