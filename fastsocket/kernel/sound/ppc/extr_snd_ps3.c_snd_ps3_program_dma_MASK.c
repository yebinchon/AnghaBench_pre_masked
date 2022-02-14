
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_ps3_card_info {int null_buffer_start_dma_addr; int dma_lock; void** dma_next_transfer_vaddr; } ;
typedef enum snd_ps3_dma_filltype { ____Placeholder_snd_ps3_dma_filltype } snd_ps3_dma_filltype ;
typedef enum snd_ps3_ch { ____Placeholder_snd_ps3_ch } snd_ps3_ch ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 int VAR_5 ;




 int FUNC_7 (struct snd_ps3_card_info*,int,int ,int) ;
 int FUNC_8 (struct snd_ps3_card_info*,int,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct snd_ps3_card_info*,void*,int) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int) ;

__attribute__((used)) static int FUNC_14(struct snd_ps3_card_info *VAR_6,
          enum snd_ps3_dma_filltype VAR_7)
{

 uint32_t VAR_8;
 int VAR_9, VAR_10, VAR_11;
 enum snd_ps3_ch VAR_12;
 uint32_t VAR_13 = 0;
 void *VAR_14;
 unsigned long VAR_15;
 int VAR_16 = 0;

 switch (VAR_7) {
 case 129:
  VAR_16 = 1;

 case 131:
  VAR_13 = VAR_2;
  break;

 case 128:
  VAR_16 = 1;

 case 130:
  VAR_13 = VAR_3;
  break;
 }

 FUNC_8(VAR_6, 700, 0);
 VAR_9 = 4;
 FUNC_9(&VAR_6->dma_lock, VAR_15);
 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  VAR_14 = VAR_6->dma_next_transfer_vaddr[0];
  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
   VAR_10 = VAR_11 * 2 + VAR_12;
   if (VAR_16)
    VAR_8 = VAR_6->null_buffer_start_dma_addr;
   else
    VAR_8 =
    FUNC_11(VAR_6,
      VAR_6->dma_next_transfer_vaddr[VAR_12],
      VAR_12);

   FUNC_13(FUNC_6(VAR_10),
      (VAR_5 |
       VAR_8));


   if (VAR_12 == 0)
    FUNC_13(FUNC_2(VAR_10),
       (VAR_0 |
        FUNC_0(0)));
   else
    FUNC_13(FUNC_2(VAR_10),
       (VAR_0 |
        FUNC_1(0)));


   FUNC_13(FUNC_3(VAR_10), 0);

   if (!VAR_16)
    FUNC_7(VAR_6, VAR_12,
          VAR_1,
          VAR_11);


   if (VAR_10 == 0)
    FUNC_13(FUNC_4(VAR_10),
       VAR_13);
   else
    FUNC_13(FUNC_4(VAR_10),
       FUNC_5(VAR_10
          - 1) |
       VAR_4);
  }
 }

 FUNC_12();
 FUNC_10(&VAR_6->dma_lock, VAR_15);

 return 0;
}
