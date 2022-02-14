
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct es1938 {int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct es1938*,int ) ;




 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct es1938*,int ,int) ;
 struct es1938* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4,
     int VAR_5)
{
 struct es1938 *VAR_6 = FUNC_3(VAR_4);
 switch (VAR_5) {
 case 130:
 case 131:


                FUNC_2(VAR_6, VAR_3, 0x92);
                FUNC_4(10);
  FUNC_2(VAR_6, VAR_3, 0x93);



  FUNC_1(0x0a, FUNC_0(VAR_6, VAR_0));
  VAR_6->active |= VAR_1;
  break;
 case 129:
 case 128:
  FUNC_1(0, FUNC_0(VAR_6, VAR_0));
  FUNC_2(VAR_6, VAR_3, 0);
  VAR_6->active &= ~VAR_1;
  break;
 default:
  return -VAR_2;
 }
 return 0;
}
