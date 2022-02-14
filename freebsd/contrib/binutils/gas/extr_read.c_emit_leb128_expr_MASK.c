
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ valueT ;
typedef scalar_t__ operatorT ;
struct TYPE_6__ {scalar_t__ X_op; scalar_t__ X_add_number; int X_unsigned; } ;
typedef TYPE_1__ expressionS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,unsigned int*) ;
 int FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int ,int,int ,int ,char*) ;
 int VAR_5 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,int ,scalar_t__,int) ;
 int FUNC_11 (char*,scalar_t__,int) ;
 int VAR_6 ;
 int FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static void
FUNC_14 (expressionS *VAR_7, int VAR_8)
{
  operatorT VAR_9 = VAR_7->X_op;
  unsigned int VAR_10;

  if (VAR_9 == VAR_0 || VAR_9 == VAR_3)
    {
      FUNC_3 (FUNC_0("zero assumed for missing expression"));
      VAR_7->X_add_number = 0;
      VAR_9 = VAR_2;
    }
  else if (VAR_9 == VAR_1 && VAR_7->X_add_number <= 0)
    {
      FUNC_2 (FUNC_0("floating point number invalid"));
      VAR_7->X_add_number = 0;
      VAR_9 = VAR_2;
    }
  else if (VAR_9 == VAR_4)
    {
      FUNC_3 (FUNC_0("register value used as expression"));
      VAR_9 = VAR_2;
    }
  else if (VAR_9 == VAR_2
    && VAR_8
    && (VAR_7->X_add_number < 0) != !VAR_7->X_unsigned)
    {



      FUNC_5 (VAR_7);
      VAR_9 = VAR_1;
    }



  VAR_10 = (unsigned int) -1;
  if (FUNC_4 (VAR_7, &VAR_10))
    FUNC_1 ();






  if (VAR_9 == VAR_2)
    {


      valueT VAR_11 = VAR_7->X_add_number;
      int VAR_12;
      char *VAR_13;

      VAR_12 = FUNC_12 (VAR_11, VAR_8);
      VAR_13 = FUNC_6 (VAR_12);
      FUNC_11 (VAR_13, VAR_11, VAR_8);
    }
  else if (VAR_9 == VAR_1)
    {


      int VAR_14;
      char *VAR_15;

      VAR_14 = FUNC_10 (((void*)0), VAR_5, VAR_7->X_add_number, VAR_8);
      VAR_15 = FUNC_6 (VAR_14);
      FUNC_10 (VAR_15, VAR_5, VAR_7->X_add_number, VAR_8);
    }
  else
    {



      FUNC_7 (VAR_6, FUNC_13 (~(valueT) 0), 0, VAR_8,
  FUNC_8 (VAR_7), 0, (char *) ((void*)0));
    }
}
