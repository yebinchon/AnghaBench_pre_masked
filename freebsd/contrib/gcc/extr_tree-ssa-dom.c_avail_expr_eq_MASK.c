
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct expr_hash_elt {scalar_t__ stmt; scalar_t__ rhs; scalar_t__ hash; } ;
struct TYPE_2__ {scalar_t__ (* types_compatible_p ) (scalar_t__,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_6 (const void *VAR_3, const void *VAR_4)
{
  tree VAR_5 = ((struct expr_hash_elt *)VAR_3)->stmt;
  tree VAR_6 = ((struct expr_hash_elt *)VAR_3)->rhs;
  tree VAR_7 = ((struct expr_hash_elt *)VAR_4)->stmt;
  tree VAR_8 = ((struct expr_hash_elt *)VAR_4)->rhs;


  if (VAR_6 == VAR_8 && VAR_5 == VAR_7)
    return 1;


  if (FUNC_0 (VAR_6) != FUNC_0 (VAR_8))
    return 0;



  if ((FUNC_1 (VAR_6) == FUNC_1 (VAR_8)
       || VAR_2.types_compatible_p (FUNC_1 (VAR_6), FUNC_1 (VAR_8)))
      && FUNC_4 (VAR_6, VAR_8, VAR_0))
    {
      bool VAR_9 = FUNC_2 (VAR_5, VAR_7, VAR_1);
      FUNC_3 (!VAR_9 || ((struct expr_hash_elt *)VAR_3)->hash
    == ((struct expr_hash_elt *)VAR_4)->hash);
      return VAR_9;
    }

  return 0;
}
