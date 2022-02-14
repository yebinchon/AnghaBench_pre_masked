
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int location_t ;
struct TYPE_4__ {int printer; } ;
typedef TYPE_1__ diagnostic_context ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__,int) ;
 int VAR_4 ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_8 (diagnostic_context *VAR_5)
{
  tree VAR_6 = FUNC_4 ();
  location_t VAR_7 = VAR_4;

  if (VAR_6)
    {
      if (VAR_3 != FUNC_1 (VAR_6)
   && VAR_3 != VAR_0)



 ;
      else
 {
   if (VAR_3 == FUNC_1 (VAR_6))
                                                         ;
   else
     FUNC_6 (VAR_5->printer,
    "%s: In instantiation of %qs:\n",
    FUNC_0 (VAR_7),
    FUNC_5 (FUNC_1 (VAR_6),
      VAR_1 | VAR_2));

   VAR_7 = FUNC_2 (VAR_6);
   VAR_6 = FUNC_3 (VAR_6);
 }
    }

  FUNC_7 (VAR_5, VAR_6, VAR_7);
}
