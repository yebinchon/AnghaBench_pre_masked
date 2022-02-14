
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int ctrl_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sc_info*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct sc_info *VAR_3)
{

 VAR_3->ctrl_register |= (VAR_0 | VAR_2);
 FUNC_0(VAR_3, VAR_1, VAR_3->ctrl_register);
}
