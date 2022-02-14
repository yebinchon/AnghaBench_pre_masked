
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vchan_info {int trigger; struct pcm_channel* channel; } ;
struct pcm_channel {struct pcm_channel* parentchannel; } ;
typedef int kobj_t ;
struct TYPE_2__ {int busy; } ;


 int FUNC_0 (struct pcm_channel*,struct pcm_channel*,int ) ;
 int FUNC_1 (struct pcm_channel*) ;
 int FUNC_2 (struct pcm_channel*) ;
 int VAR_0 ;
 int FUNC_3 (struct pcm_channel*,struct pcm_channel*,int ) ;
 int FUNC_4 (struct pcm_channel*) ;

 int FUNC_5 (int) ;


 scalar_t__ FUNC_6 (struct pcm_channel*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_7 (struct pcm_channel*,int ) ;
 int FUNC_8 (struct pcm_channel*) ;

__attribute__((used)) static int
FUNC_9(kobj_t VAR_2, void *VAR_3, int VAR_4)
{
 struct vchan_info *VAR_5;
 struct pcm_channel *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 VAR_5 = VAR_3;

 if (!FUNC_5(VAR_4) || VAR_4 == VAR_5->trigger)
  return (0);

 VAR_6 = VAR_5->channel;
 VAR_7 = VAR_6->parentchannel;
 VAR_9 = VAR_5->trigger;
 VAR_5->trigger = VAR_4;

 FUNC_2(VAR_6);

 FUNC_4(VAR_6);
 FUNC_1(VAR_7);

 switch (VAR_4) {
 case 129:
  if (VAR_9 != 129)
   FUNC_0(VAR_7, VAR_6, VAR_1.busy);
  break;
 case 128:
 case 130:
  if (VAR_9 == 129)
   FUNC_3(VAR_7, VAR_6, VAR_1.busy);
  break;
 default:
  break;
 }

 VAR_8 = FUNC_7(VAR_7, VAR_0);

 FUNC_1(VAR_6);

 if (VAR_8 == 0 && VAR_4 == 129 && FUNC_6(VAR_6))
  VAR_8 = FUNC_8(VAR_6);

 FUNC_4(VAR_6);
 FUNC_4(VAR_7);
 FUNC_1(VAR_6);

 return (VAR_8);
}
