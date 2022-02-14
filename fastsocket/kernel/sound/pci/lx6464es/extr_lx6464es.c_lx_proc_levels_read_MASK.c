
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_info_entry {struct lx6464es* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct lx6464es {int dummy; } ;


 int FUNC_0 (struct lx6464es*,int,int,int *) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct snd_info_entry *VAR_0,
    struct snd_info_buffer *VAR_1)
{
 u32 VAR_2[64];
 int VAR_3;
 int VAR_4, VAR_5;
 struct lx6464es *VAR_6 = VAR_0->private_data;

 FUNC_1(VAR_1, "capture levels:\n");
 VAR_3 = FUNC_0(VAR_6, 1, 64, VAR_2);
 if (VAR_3 < 0)
  return;

 for (VAR_4 = 0; VAR_4 != 8; ++VAR_4) {
  for (VAR_5 = 0; VAR_5 != 8; ++VAR_5)
   FUNC_1(VAR_1, "%08x ", VAR_2[VAR_4*8+VAR_5]);
  FUNC_1(VAR_1, "\n");
 }

 FUNC_1(VAR_1, "\nplayback levels:\n");

 VAR_3 = FUNC_0(VAR_6, 0, 64, VAR_2);
 if (VAR_3 < 0)
  return;

 for (VAR_4 = 0; VAR_4 != 8; ++VAR_4) {
  for (VAR_5 = 0; VAR_5 != 8; ++VAR_5)
   FUNC_1(VAR_1, "%08x ", VAR_2[VAR_4*8+VAR_5]);
  FUNC_1(VAR_1, "\n");
 }

 FUNC_1(VAR_1, "\n");
}
