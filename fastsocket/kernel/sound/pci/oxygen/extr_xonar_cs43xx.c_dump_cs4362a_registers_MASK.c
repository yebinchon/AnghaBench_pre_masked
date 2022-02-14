
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_cs43xx {int * cs4362a_regs; } ;
struct snd_info_buffer {int dummy; } ;


 int FUNC_0 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct xonar_cs43xx *VAR_0,
       struct snd_info_buffer *VAR_1)
{
 unsigned int VAR_2;

 FUNC_0(VAR_1, "\nCS4362A:");
 for (VAR_2 = 1; VAR_2 <= 14; ++VAR_2)
  FUNC_0(VAR_1, " %02x", VAR_0->cs4362a_regs[VAR_2]);
 FUNC_0(VAR_1, "\n");
}
