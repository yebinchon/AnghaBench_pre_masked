
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu_sc_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct emu_sc_info*,int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct emu_sc_info *VAR_2, char VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = (VAR_3 & 0x20) ? VAR_0 : VAR_1;
 VAR_3 &= 0x1f;
 VAR_5 |= 1 << 24;
 VAR_5 |= VAR_3 << 16;
 FUNC_0(VAR_2, 0, VAR_5, VAR_4);
}
