
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ X_op; scalar_t__ X_add_number; } ;
typedef TYPE_1__ expressionS ;
struct TYPE_8__ {scalar_t__ noat; } ;


 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,char const*,char*,int,int,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 TYPE_3__ VAR_4 ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9 (expressionS *VAR_5, const char *VAR_6,
         int VAR_7, int VAR_8, int VAR_9)
{
  FUNC_5 (VAR_5->X_op == VAR_3);


  if (!VAR_9)
    FUNC_8 (VAR_5);


  if (! FUNC_1(VAR_5->X_add_number + 0x8000))
    FUNC_4 (FUNC_2("operand overflow"));

  if (FUNC_0(VAR_5->X_add_number))
    {

      FUNC_6 (VAR_5, VAR_6, "t,o(b)", VAR_7, VAR_2, VAR_8);
    }
  else
    {





      FUNC_7 (VAR_5, VAR_1);
      FUNC_6 (((void*)0), VAR_0, "d,v,t", VAR_1, VAR_1, VAR_8);
      FUNC_6 (VAR_5, VAR_6, "t,o(b)", VAR_7, VAR_2, VAR_1);

      if (VAR_4.noat)
 FUNC_3 (FUNC_2("Macro used $at after \".set noat\""));
    }
}
