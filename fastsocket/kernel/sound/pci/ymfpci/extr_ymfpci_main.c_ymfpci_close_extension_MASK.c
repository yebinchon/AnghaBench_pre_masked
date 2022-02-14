
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ymfpci {int spdif_opened; int rear_opened; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ymfpci*,int ) ;
 int FUNC_1 (struct snd_ymfpci*,int ) ;
 int FUNC_2 (struct snd_ymfpci*,int ,int) ;
 int FUNC_3 (struct snd_ymfpci*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct snd_ymfpci *VAR_2)
{
 if (! VAR_2->rear_opened) {
  if (! VAR_2->spdif_opened)
   FUNC_2(VAR_2, VAR_0,
       FUNC_0(VAR_2, VAR_0) & ~(1 << 30));
  FUNC_3(VAR_2, VAR_1,
      (FUNC_1(VAR_2, VAR_1) & ~0x0330) & ~0x0010);
 }
}
