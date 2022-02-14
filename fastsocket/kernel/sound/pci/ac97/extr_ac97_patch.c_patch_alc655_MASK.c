
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev_flags; } ;
struct snd_ac97 {scalar_t__ id; int subsystem_vendor; int subsystem_device; int ext_id; TYPE_1__ spec; int * build_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct snd_ac97*,int) ;
 int FUNC_1 (struct snd_ac97*,int,int,int) ;
 int FUNC_2 (struct snd_ac97*,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_ac97 * VAR_11)
{
 unsigned int VAR_12;

 if (VAR_11->id == VAR_5) {
  VAR_11->spec.dev_flags = 1;
  if ((FUNC_0(VAR_11, VAR_2) & 0x3f) == 2) {
   VAR_11->id = VAR_6;
   VAR_11->spec.dev_flags = 2;
  }
 }

 VAR_11->build_ops = &VAR_10;


 FUNC_1(VAR_11, VAR_7, VAR_8, VAR_9);


 VAR_12 = FUNC_0(VAR_11, 0x7a);
 if (VAR_11->spec.dev_flags)
  VAR_12 &= ~(1 << 1);
 else {
  if (VAR_11->subsystem_vendor == 0x1462 &&
      (VAR_11->subsystem_device == 0x0131 ||
       VAR_11->subsystem_device == 0x0161 ||
       VAR_11->subsystem_device == 0x0351 ||
       VAR_11->subsystem_device == 0x0471 ||
       VAR_11->subsystem_device == 0x0061))
   VAR_12 &= ~(1 << 1);
  else
   VAR_12 |= (1 << 1);

  VAR_11->ext_id |= VAR_4;
 }
 VAR_12 &= ~(1 << 12);
 FUNC_2(VAR_11, 0x7a, VAR_12);





 FUNC_2(VAR_11, VAR_1, 1<<15);


 FUNC_2(VAR_11, VAR_3, 0x0808);
 FUNC_2(VAR_11, VAR_0, 0x0808);


 if (VAR_11->id == VAR_6)
  FUNC_1(VAR_11, 0x74, 0x0800, 0x0800);

 return 0;
}
