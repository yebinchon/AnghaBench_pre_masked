
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct TYPE_3__ {scalar_t__ r_offset; scalar_t__ r_addend; int r_info; } ;
typedef TYPE_1__ Elf_Rela ;
typedef int Elf_Addr ;


 int FUNC_0 (int ) ;

 int FUNC_1 (int,int ,int*) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int,int,int,int) ;

__attribute__((used)) static void
FUNC_4(const Elf_Rela *VAR_0)
{
 Elf_Addr *VAR_1, *VAR_2, VAR_3;
 u_int VAR_4[4];
 uint32_t VAR_5, VAR_6;
 uint32_t VAR_7, VAR_8;

 FUNC_2(1, VAR_4);
 VAR_5 = VAR_4[3];
 VAR_6 = VAR_4[2];
 FUNC_2(0, VAR_4);
 if (VAR_4[0] >= 7) {
  FUNC_1(7, 0, VAR_4);
  VAR_7 = VAR_4[1];
  VAR_8 = VAR_4[2];
 } else {
  VAR_7 = 0;
  VAR_8 = 0;
 }

 switch (FUNC_0(VAR_0->r_info)) {
 case 128:
  VAR_1 = (Elf_Addr *)VAR_0->r_addend;
  VAR_2 = (Elf_Addr *)VAR_0->r_offset;
  VAR_3 = ((Elf_Addr (*)(uint32_t, uint32_t, uint32_t,
      uint32_t))VAR_1)(VAR_5, VAR_6,
      VAR_7, VAR_8);
  *VAR_2 = VAR_3;
  break;
 }
}
