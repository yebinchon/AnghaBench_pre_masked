
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct ak4114* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct ak4114 {int dummy; } ;


 int FUNC_0 (struct ak4114*,int) ;
 int FUNC_1 (struct snd_info_buffer*,char*,int,int) ;

__attribute__((used)) static void FUNC_2(struct snd_info_entry *VAR_0,
  struct snd_info_buffer *VAR_1)
{
 struct ak4114 *VAR_2 = VAR_0->private_data;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < 0x20; VAR_3++) {
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  FUNC_1(VAR_1, "0x%02x = 0x%02x\n", VAR_3, VAR_4);
 }
}
