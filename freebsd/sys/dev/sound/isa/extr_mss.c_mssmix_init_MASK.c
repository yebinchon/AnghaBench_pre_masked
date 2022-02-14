
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct mss_info {int bd_id; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mss_info*,int,int) ;
 struct mss_info* FUNC_1 (struct snd_mixer*) ;
 int FUNC_2 (struct snd_mixer*,int ) ;
 int FUNC_3 (struct snd_mixer*,int ) ;
 int FUNC_4 (struct mss_info*) ;
 int FUNC_5 (struct mss_info*) ;

__attribute__((used)) static int
FUNC_6(struct snd_mixer *VAR_5)
{
 struct mss_info *VAR_6 = FUNC_1(VAR_5);

 FUNC_2(VAR_5, VAR_1);
 FUNC_3(VAR_5, VAR_2);
 switch(VAR_6->bd_id) {
 case 129:
  FUNC_2(VAR_5, VAR_3);
  break;

 case 128:
  FUNC_2(VAR_5, VAR_4);
  FUNC_4(VAR_6);
  FUNC_0(VAR_6, 20, 0x88);
  FUNC_0(VAR_6, 21, 0x88);
  FUNC_5(VAR_6);
  break;

 case 132:
  FUNC_2(VAR_5, VAR_0);
  break;

 case 130:
 case 131:

  FUNC_4(VAR_6);
  FUNC_0(VAR_6, 22, 0x88);
  FUNC_0(VAR_6, 23, 0x88);
  FUNC_5(VAR_6);
  break;
 }
 return 0;
}
