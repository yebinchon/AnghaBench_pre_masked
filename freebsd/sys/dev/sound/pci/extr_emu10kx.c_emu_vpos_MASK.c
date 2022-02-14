
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu_voice {int start; int vnum; scalar_t__ stereo; scalar_t__ b16; } ;
struct emu_sc_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct emu_sc_info*,int ,int ) ;

int
FUNC_1(struct emu_sc_info *VAR_1, struct emu_voice *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = (VAR_2->b16 ? 1 : 0) + (VAR_2->stereo ? 1 : 0);
 VAR_4 = (FUNC_0(VAR_1, VAR_2->vnum, VAR_0) - (VAR_2->start >> VAR_3)) << VAR_3;
 return (VAR_4 & ~0x0000001f);
}
