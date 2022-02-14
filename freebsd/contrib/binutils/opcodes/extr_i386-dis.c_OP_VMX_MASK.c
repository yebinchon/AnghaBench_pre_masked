
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mod; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_2 (int VAR_7, int VAR_8)
{
  if (VAR_2.mod == 3)
    {
      FUNC_1 (VAR_3, "rdrand");
      FUNC_0 (VAR_6, VAR_8);
    }
  else
    {
      VAR_5 |= (VAR_4 & (VAR_0 | VAR_1));
      if (VAR_4 & VAR_0)
 FUNC_1 (VAR_3, "vmclear");
      else if (VAR_4 & VAR_1)
 FUNC_1 (VAR_3, "vmxon");
      else
 FUNC_1 (VAR_3, "vmptrld");
      FUNC_0 (VAR_7, VAR_8);
    }
}
