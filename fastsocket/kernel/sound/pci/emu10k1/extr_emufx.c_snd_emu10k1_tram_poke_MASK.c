
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_emu10k1_fx8010_code {int * tram_addr_map; int * tram_data_map; int tram_valid; } ;
struct snd_emu10k1 {scalar_t__ audigy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (struct snd_emu10k1*,scalar_t__,int ,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_emu10k1 *VAR_4,
     struct snd_emu10k1_fx8010_code *VAR_5)
{
 int VAR_6;
 u32 VAR_7, VAR_8;

 for (VAR_6 = 0; VAR_6 < (VAR_4->audigy ? 0x100 : 0xa0); VAR_6++) {
  if (!FUNC_2(VAR_6, VAR_5->tram_valid))
   continue;
  if (FUNC_0(VAR_8, &VAR_5->tram_data_map[VAR_6]) ||
      FUNC_0(VAR_7, &VAR_5->tram_addr_map[VAR_6]))
   return -VAR_1;
  FUNC_1(VAR_4, VAR_3 + VAR_6, 0, VAR_8);
  if (!VAR_4->audigy) {
   FUNC_1(VAR_4, VAR_2 + VAR_6, 0, VAR_7);
  } else {
   FUNC_1(VAR_4, VAR_2 + VAR_6, 0, VAR_7 << 12);
   FUNC_1(VAR_4, VAR_0 + VAR_6, 0, VAR_7 >> 20);
  }
 }
 return 0;
}
