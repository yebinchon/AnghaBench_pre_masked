
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int badvaddr; int cause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4 (int VAR_4)
{
  if (VAR_4 == FUNC_2 (VAR_2)->badvaddr)
    FUNC_0 ();
  else if (VAR_4 == VAR_0)
    FUNC_1 (VAR_0, VAR_3);
  else if (VAR_4 == FUNC_2 (VAR_2)->cause)
    FUNC_1 (FUNC_2 (VAR_2)->cause,
         VAR_1);
  else
    FUNC_3 (VAR_4);
}
