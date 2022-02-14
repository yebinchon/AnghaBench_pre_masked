
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_pdacf {int dummy; } ;
struct snd_info_entry {struct snd_pdacf* private_data; } ;
struct snd_info_buffer {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_pdacf*,int ) ;
 int FUNC_2 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct snd_info_entry * VAR_1,
                            struct snd_info_buffer *VAR_2)
{
 struct snd_pdacf *VAR_3 = VAR_1->private_data;
 u16 VAR_4;

 FUNC_2(VAR_2, "PDAudioCF\n\n");
 VAR_4 = FUNC_1(VAR_3, VAR_0);
 FUNC_2(VAR_2, "FPGA revision      : 0x%x\n", FUNC_0(VAR_4));

}
