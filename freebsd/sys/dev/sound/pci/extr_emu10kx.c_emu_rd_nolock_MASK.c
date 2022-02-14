
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct emu_sc_info {int sh; int st; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (int ,int ,unsigned int) ;

__attribute__((used)) static uint32_t
FUNC_4(struct emu_sc_info *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{

 FUNC_0(VAR_0 != ((void*)0), ("emu_rd: NULL sc"));
 switch (VAR_2) {
 case 1:
  return (FUNC_1(VAR_0->st, VAR_0->sh, VAR_1));
 case 2:
  return (FUNC_2(VAR_0->st, VAR_0->sh, VAR_1));
 case 4:
  return (FUNC_3(VAR_0->st, VAR_0->sh, VAR_1));
 }
 return (0xffffffff);
}
