
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pcm_channel {int timeout; int devinfo; int methods; int dev; int flags; scalar_t__ xruns; scalar_t__ interrupts; scalar_t__ feedcount; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct pcm_channel*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct pcm_channel*) ;
 int FUNC_4 (struct pcm_channel*,scalar_t__) ;
 int FUNC_5 (struct pcm_channel*,int ) ;
 int FUNC_6 (struct pcm_channel*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct pcm_channel*,scalar_t__) ;
 int FUNC_8 (int ) ;

int
FUNC_9(struct pcm_channel *VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 int VAR_7;

 FUNC_2(VAR_4);
 VAR_4->feedcount = 0;
 VAR_4->flags &= VAR_1;
 VAR_4->interrupts = 0;
 VAR_4->timeout = 1;
 VAR_4->xruns = 0;

 VAR_4->flags |= (FUNC_8(VAR_4->dev) & VAR_2) ?
     VAR_0 : 0;

 VAR_7 = FUNC_0(VAR_4->methods, VAR_4->devinfo);
 if (VAR_7 == 0 && VAR_5 != 0 && VAR_6 != 0) {
  VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_6);
  VAR_5 = 0;
  VAR_6 = 0;
 }
 if (VAR_7 == 0 && VAR_5 != 0)
  VAR_7 = FUNC_4(VAR_4, VAR_5);
 if (VAR_7 == 0 && VAR_6 != 0)
  VAR_7 = FUNC_7(VAR_4, VAR_6);
 if (VAR_7 == 0)
  VAR_7 = FUNC_5(VAR_4, VAR_3);
 if (VAR_7 == 0) {
  FUNC_3(VAR_4);
  VAR_7 = FUNC_1(VAR_4->methods, VAR_4->devinfo);
 }
 return VAR_7;
}
