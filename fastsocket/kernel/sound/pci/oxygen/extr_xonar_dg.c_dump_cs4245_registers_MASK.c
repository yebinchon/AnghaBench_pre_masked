
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct oxygen {struct dg* model_data; } ;
struct dg {int * cs4245_regs; } ;


 int FUNC_0 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_0,
      struct snd_info_buffer *VAR_1)
{
 struct dg *VAR_2 = VAR_0->model_data;
 unsigned int VAR_3;

 FUNC_0(VAR_1, "\nCS4245:");
 for (VAR_3 = 1; VAR_3 <= 0x10; ++VAR_3)
  FUNC_0(VAR_1, " %02x", VAR_2->cs4245_regs[VAR_3]);
 FUNC_0(VAR_1, "\n");
}
