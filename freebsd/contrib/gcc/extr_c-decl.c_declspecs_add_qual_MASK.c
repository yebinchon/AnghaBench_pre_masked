
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct c_declspecs {int non_sc_seen_p; int declspecs_seen_p; int const_p; int volatile_p; int restrict_p; } ;
typedef enum rid { ____Placeholder_rid } rid ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;



 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (char*,int ) ;

struct c_declspecs *
FUNC_6 (struct c_declspecs *VAR_3, tree VAR_4)
{
  enum rid VAR_5;
  bool VAR_6 = 0;
  VAR_3->non_sc_seen_p = 1;
  VAR_3->declspecs_seen_p = 1;
  FUNC_3 (FUNC_2 (VAR_4) == VAR_0
       && FUNC_0 (VAR_4));
  VAR_5 = FUNC_1 (VAR_4);
  switch (VAR_5)
    {
    case 130:
      VAR_6 = VAR_3->const_p;
      VAR_3->const_p = 1;
      break;
    case 128:
      VAR_6 = VAR_3->volatile_p;
      VAR_3->volatile_p = 1;
      break;
    case 129:
      VAR_6 = VAR_3->restrict_p;
      VAR_3->restrict_p = 1;
      break;
    default:
      FUNC_4 ();
    }
  if (VAR_6 && VAR_2 && !VAR_1)
    FUNC_5 ("duplicate %qE", VAR_4);
  return VAR_3;
}
