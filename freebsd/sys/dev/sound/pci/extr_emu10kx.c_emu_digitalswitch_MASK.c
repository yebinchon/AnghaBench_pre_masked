
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu_sc_info {int root; int ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int,struct emu_sc_info*,int ,int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct emu_sc_info *VAR_4)
{

 FUNC_0(VAR_4->ctx,
  FUNC_1(VAR_4->root),
  VAR_2, "_digital",
  VAR_1 | VAR_0, VAR_4, 0,
  VAR_3, "I", "Enable digital output");

 return;
}
