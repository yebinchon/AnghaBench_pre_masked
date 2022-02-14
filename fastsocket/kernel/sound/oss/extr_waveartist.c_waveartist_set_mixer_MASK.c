
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* mix; } ;
typedef TYPE_2__ wavnc_info ;
struct TYPE_6__ {int stereo_devs; int (* decode_mixer ) (TYPE_2__*,int,unsigned int,unsigned int) ;} ;


 int FUNC_0 (TYPE_2__*,int,unsigned int,unsigned int) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_2(wavnc_info *VAR_0, int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_2 & 0x00ff;
 unsigned int VAR_4 = (VAR_2 & 0xff00) >> 8;

 if (VAR_3 > 100)
  VAR_3 = 100;
 if (VAR_4 > 100)
  VAR_4 = 100;





 if (!(VAR_0->mix->stereo_devs & (1 << VAR_1)))
  VAR_4 = VAR_3;

 VAR_1 = VAR_0->mix->decode_mixer(VAR_0, VAR_1, VAR_3, VAR_4);

 if (VAR_1 >= 0)
  FUNC_1(VAR_0, VAR_1);

 return VAR_1 < 0 ? VAR_1 : 0;
}
