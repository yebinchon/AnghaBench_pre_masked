
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ X_op; int X_add_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,char*,char*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_2 (int VAR_5, int VAR_6)
{
  if (VAR_4.X_op == VAR_3
      && VAR_4.X_add_number >= -0x8000
      && VAR_4.X_add_number < 0x8000)
    FUNC_1 (&VAR_4, VAR_6 ? "sltiu" : "slti", "t,r,j",
   VAR_0, VAR_5, VAR_1);
  else
    {
      FUNC_0 (VAR_0, &VAR_4, VAR_2);
      FUNC_1 (((void*)0), VAR_6 ? "sltu" : "slt", "d,v,t", VAR_0, VAR_5, VAR_0);
    }
}
