
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pcmchan_caps {int maxspeed; int minspeed; } ;
struct pcm_channel {int format; int speed; int bufhard; int devinfo; int methods; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct pcm_channel*) ;
 scalar_t__ FUNC_3 (struct pcm_channel*) ;
 int VAR_0 ;
 int FUNC_4 (int,int ,int ) ;
 struct pcmchan_caps* FUNC_5 (struct pcm_channel*) ;
 int FUNC_6 (struct pcm_channel*,int,int ,int ) ;
 int FUNC_7 (struct pcm_channel*) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;

int
FUNC_11(struct pcm_channel *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 struct pcmchan_caps *VAR_5;
 uint32_t VAR_6, VAR_7;
 int VAR_8;

 FUNC_2(VAR_2);

 if (VAR_4 < 1 || VAR_3 == 0 || FUNC_3(VAR_2))
  return (VAR_0);

 VAR_2->format = VAR_3;
 VAR_2->speed = VAR_4;

 VAR_5 = FUNC_5(VAR_2);

 VAR_6 = VAR_4;
 FUNC_4(VAR_6, VAR_5->minspeed, VAR_5->maxspeed);

 FUNC_10(VAR_2->bufhard, FUNC_1(VAR_2->methods, VAR_2->devinfo,
     VAR_6));
 VAR_6 = FUNC_9(VAR_2->bufhard);

 VAR_7 = (VAR_6 > VAR_4) ? (VAR_6 - VAR_4) : (VAR_4 - VAR_6);

 if (VAR_7 <= VAR_1)
  VAR_2->speed = VAR_6;

 VAR_8 = FUNC_7(VAR_2);

 if (VAR_8 == 0)
  VAR_8 = FUNC_0(VAR_2->methods, VAR_2->devinfo,
      FUNC_8(VAR_2->bufhard));

 if (VAR_8 == 0)
  VAR_8 = FUNC_6(VAR_2, -2, 0, 0);

 return (VAR_8);
}
