
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
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct snd_emu10k1*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_emu10k1 *VAR_4,
     struct snd_emu10k1_fx8010_code *VAR_5)
{
 int VAR_6;
 u32 VAR_7, VAR_8;

 FUNC_0(VAR_5->tram_valid, 0, sizeof(VAR_5->tram_valid));
 for (VAR_6 = 0; VAR_6 < (VAR_4->audigy ? 0x100 : 0xa0); VAR_6++) {
  FUNC_2(VAR_6, VAR_5->tram_valid);
  VAR_7 = FUNC_3(VAR_4, VAR_3 + VAR_6, 0);
  if (!VAR_4->audigy) {
   VAR_8 = FUNC_3(VAR_4, VAR_2 + VAR_6, 0);
  } else {
   VAR_8 = FUNC_3(VAR_4, VAR_2 + VAR_6, 0) >> 12;
   VAR_8 |= FUNC_3(VAR_4, VAR_0 + VAR_6, 0) << 20;
  }
  if (FUNC_1(VAR_7, &VAR_5->tram_data_map[VAR_6]) ||
      FUNC_1(VAR_8, &VAR_5->tram_addr_map[VAR_6]))
   return -VAR_1;
 }
 return 0;
}
