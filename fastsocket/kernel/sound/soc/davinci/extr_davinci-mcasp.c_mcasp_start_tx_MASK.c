
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct davinci_audio_dev {size_t num_serializer; scalar_t__* serial_dir; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct davinci_audio_dev *VAR_9)
{
 u8 VAR_10 = 0, VAR_11;
 u32 VAR_12;

 FUNC_2(VAR_9->base + VAR_0, VAR_4);
 FUNC_2(VAR_9->base + VAR_0, VAR_2);
 FUNC_2(VAR_9->base + VAR_0, VAR_5);
 FUNC_3(VAR_9->base + VAR_1, 0);

 FUNC_2(VAR_9->base + VAR_0, VAR_6);
 FUNC_2(VAR_9->base + VAR_0, VAR_3);
 FUNC_3(VAR_9->base + VAR_1, 0);
 for (VAR_11 = 0; VAR_11 < VAR_9->num_serializer; VAR_11++) {
  if (VAR_9->serial_dir[VAR_11] == VAR_8) {
   VAR_10 = VAR_11;
   break;
  }
 }


 VAR_12 = 0;
 while (!(FUNC_1(VAR_9->base + FUNC_0(VAR_10)) &
   VAR_7) && (VAR_12 < 100000))
  VAR_12++;

 FUNC_3(VAR_9->base + VAR_1, 0);
}
