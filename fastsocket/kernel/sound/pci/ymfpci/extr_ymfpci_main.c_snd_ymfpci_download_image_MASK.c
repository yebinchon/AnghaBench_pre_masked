
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct snd_ymfpci {TYPE_2__* controller_microcode; TYPE_1__* dsp_microcode; } ;
typedef int __le32 ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (struct snd_ymfpci*) ;
 int FUNC_2 (struct snd_ymfpci*) ;
 int FUNC_3 (struct snd_ymfpci*,int ) ;
 int FUNC_4 (struct snd_ymfpci*,scalar_t__,int) ;
 int FUNC_5 (struct snd_ymfpci*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct snd_ymfpci *VAR_12)
{
 int VAR_13;
 u16 VAR_14;
 const __le32 *VAR_15;

 FUNC_4(VAR_12, VAR_7, 0x00000000);
 FUNC_1(VAR_12);
 FUNC_4(VAR_12, VAR_6, 0x00010000);
 FUNC_4(VAR_12, VAR_6, 0x00000000);
 FUNC_4(VAR_12, VAR_5, 0x00000000);
 FUNC_4(VAR_12, VAR_4, 0x00000000);
 FUNC_4(VAR_12, VAR_8, 0x00000000);
 FUNC_4(VAR_12, VAR_9, 0x00000000);
 FUNC_4(VAR_12, VAR_2, 0x00000000);
 VAR_14 = FUNC_3(VAR_12, VAR_3);
 FUNC_5(VAR_12, VAR_3, VAR_14 & ~0x0007);


 VAR_15 = (const __le32 *)VAR_12->dsp_microcode->data;
 for (VAR_13 = 0; VAR_13 < VAR_11 / 4; VAR_13++)
  FUNC_4(VAR_12, VAR_1 + (VAR_13 << 2),
      FUNC_0(VAR_15[VAR_13]));


 VAR_15 = (const __le32 *)VAR_12->controller_microcode->data;
 for (VAR_13 = 0; VAR_13 < VAR_10 / 4; VAR_13++)
  FUNC_4(VAR_12, VAR_0 + (VAR_13 << 2),
      FUNC_0(VAR_15[VAR_13]));

 FUNC_2(VAR_12);
}
