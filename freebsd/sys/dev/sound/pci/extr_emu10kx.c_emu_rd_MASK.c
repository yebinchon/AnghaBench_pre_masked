
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct emu_sc_info {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct emu_sc_info*,unsigned int,unsigned int) ;

uint32_t
FUNC_2(struct emu_sc_info *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 uint32_t VAR_5;

 FUNC_0(VAR_3 != VAR_0, ("emu_rd: attempt to read DATA"));
 FUNC_0(VAR_3 != VAR_1, ("emu_rd: attempt to read DATA2"));

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 return (VAR_5);
}
