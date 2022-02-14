
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_2__ {int instruction; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__ VAR_8 ;
 int FUNC_5 (int,int,int,int,int) ;
 int FUNC_6 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_7 (void)
{
  enum neon_shape VAR_9 = FUNC_6 (VAR_1, VAR_0, VAR_2);
  FUNC_5 (3, VAR_9, VAR_3 | VAR_7, VAR_3 | VAR_7,
    VAR_4 | VAR_5 | VAR_6 | VAR_7);

  if (VAR_9 == VAR_1)
    {
      VAR_8.instruction = FUNC_1 (VAR_8.instruction);
      FUNC_4 ();
    }
  else
    {
      VAR_8.instruction = FUNC_0 (VAR_8.instruction);
      FUNC_3 ();
    }
  FUNC_2 ();
}
