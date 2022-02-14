
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_2__ {int instruction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (int,int,int,int) ;

__attribute__((used)) static void
FUNC_2 (enum neon_shape VAR_7)
{
  int VAR_8 = (VAR_6.instruction & 0x80) != 0;
  FUNC_1 (2, VAR_7, VAR_1 | VAR_5, VAR_2 | VAR_3 | VAR_5 | VAR_4);

  if (VAR_7 == VAR_0)
    {
      if (VAR_8)
        FUNC_0 ("fnegs");
      else
        FUNC_0 ("fabss");
    }
  else
    {
      if (VAR_8)
        FUNC_0 ("fnegd");
      else
        FUNC_0 ("fabsd");
    }
}
