
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int location_t ;
struct TYPE_2__ {unsigned int rid; scalar_t__* decl; int pretty; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;

tree
FUNC_7 (unsigned int VAR_7, tree VAR_8)
{
  unsigned VAR_9;
  tree VAR_10 = VAR_0;

  for (VAR_9 = 0; VAR_3[VAR_9].decl; VAR_9++)
    if (VAR_3[VAR_9].rid == VAR_7)
      break;

  VAR_10 = *VAR_3[VAR_9].decl;
  if (!VAR_10)
    {





      tree VAR_11;
      location_t VAR_12 = VAR_5;



      VAR_4 = 0;


      VAR_11 = FUNC_4 ();
      VAR_10 = FUNC_1) (VAR_8, VAR_3[VAR_9].pretty);
      VAR_11 = FUNC_3 (VAR_11);
      if (!FUNC_0 (VAR_11))
 VAR_6
   = FUNC_6 (VAR_10, VAR_11, VAR_6);
      *VAR_3[VAR_9].decl = VAR_10;
      VAR_5 = VAR_12;
    }
  if (!VAR_9 && !VAR_2)
    FUNC_2 ("%qD is not defined outside of function scope", VAR_10);

  return VAR_10;
}
