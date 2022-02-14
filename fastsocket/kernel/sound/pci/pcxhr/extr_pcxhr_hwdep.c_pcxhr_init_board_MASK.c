
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcxhr_rmh {int* stat; int* cmd; int cmd_len; } ;
struct pcxhr_mgr {int capture_chips; int playback_chips; int firmware_num; int granularity; int dsp_version; scalar_t__ is_hr_stereo; scalar_t__ mono_capture; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pcxhr_mgr*) ;
 int FUNC_1 (struct pcxhr_mgr*) ;
 int FUNC_2 (struct pcxhr_rmh*,int ) ;
 int FUNC_3 (struct pcxhr_mgr*,struct pcxhr_rmh*) ;
 int FUNC_4 (struct pcxhr_mgr*) ;
 int FUNC_5 (char*,int,int,...) ;

__attribute__((used)) static int FUNC_6(struct pcxhr_mgr *VAR_6)
{
 int VAR_7;
 struct pcxhr_rmh VAR_8;
 int VAR_9;


 if (VAR_6->mono_capture)
  VAR_9 = VAR_6->capture_chips * 2;
 else
  VAR_9 = VAR_6->capture_chips;
 VAR_9 += VAR_6->playback_chips * VAR_5;


 FUNC_1(VAR_6);

 FUNC_2(&VAR_8, VAR_0);
 VAR_7 = FUNC_3(VAR_6, &VAR_8);
 if (VAR_7)
  return VAR_7;

 if ((VAR_8.stat[0] & VAR_4) != VAR_6->playback_chips * 2)
  return -VAR_2;

 if (((VAR_8.stat[0] >> (2 * VAR_3)) & VAR_4) <
     VAR_6->capture_chips * 2)
  return -VAR_2;

 if ((VAR_8.stat[1] & 0x5F) < VAR_9)
  return -VAR_2;

 if (((VAR_8.stat[1] >> 7) & 0x5F) < VAR_5)
  return -VAR_2;
 FUNC_5("supported formats : playback=%x capture=%x\n",
      VAR_8.stat[2], VAR_8.stat[3]);

 FUNC_2(&VAR_8, VAR_1);

 VAR_8.cmd[0] |= VAR_6->firmware_num;

 VAR_8.cmd[1] = (1<<23) + VAR_6->granularity;
 VAR_8.cmd_len = 2;
 VAR_7 = FUNC_3(VAR_6, &VAR_8);
 if (VAR_7)
  return VAR_7;
 FUNC_5("PCXHR DSP version is %d.%d.%d\n", (VAR_8.stat[0]>>16)&0xff,
      (VAR_8.stat[0]>>8)&0xff, VAR_8.stat[0]&0xff);
 VAR_6->dsp_version = VAR_8.stat[0];

 if (VAR_6->is_hr_stereo)
  VAR_7 = FUNC_0(VAR_6);
 else
  VAR_7 = FUNC_4(VAR_6);
 return VAR_7;
}
