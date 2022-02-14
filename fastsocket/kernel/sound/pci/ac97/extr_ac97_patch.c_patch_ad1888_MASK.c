
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lo_as_master; } ;
struct TYPE_3__ {TYPE_2__ ad18xx; } ;
struct snd_ac97 {int subsystem_vendor; int subsystem_device; int flags; TYPE_1__ spec; int * build_ops; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_ac97*) ;
 int VAR_6 ;
 unsigned short FUNC_1 (struct snd_ac97*,int ) ;
 int FUNC_2 (struct snd_ac97*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_3(struct snd_ac97 * VAR_7)
{
 unsigned short VAR_8;

 FUNC_0(VAR_7);
 VAR_7->build_ops = &VAR_6;





 if (VAR_7->subsystem_vendor == 0x1043 &&
     VAR_7->subsystem_device == 0x1193)
  VAR_7->spec.ad18xx.lo_as_master = 1;

 VAR_8 = FUNC_1(VAR_7, VAR_4);


 VAR_8 |= VAR_3 | VAR_0;
 if (!VAR_7->spec.ad18xx.lo_as_master)




  VAR_8 |= VAR_2 | VAR_1;

 FUNC_2(VAR_7, VAR_4, VAR_8);
 VAR_7->flags |= VAR_5;
 return 0;
}
