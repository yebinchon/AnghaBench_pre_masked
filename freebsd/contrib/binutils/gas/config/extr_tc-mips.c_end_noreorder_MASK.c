
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ noreorder; scalar_t__ mips16; } ;
struct TYPE_3__ {int fr_fix; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  VAR_1.noreorder--;
  if (VAR_1.noreorder == 0 && VAR_2 != ((void*)0))
    {


      VAR_2->fr_fix -= ((VAR_3 - VAR_4)
    * (VAR_1.mips16 ? 2 : 4));
      FUNC_0 (VAR_5,
      VAR_4, VAR_0);
      VAR_2 = ((void*)0);
    }
}
