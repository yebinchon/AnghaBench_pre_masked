
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned short dev_flags; } ;
struct snd_ac97 {scalar_t__ id; TYPE_1__ spec; int * rates; int ext_id; int * build_ops; int flags; } ;


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
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned short FUNC_0 (struct snd_ac97*,int) ;
 int FUNC_1 (struct snd_ac97*,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 *VAR_13)
{
 unsigned short VAR_14;





 VAR_13->flags |= VAR_4;
 FUNC_1(VAR_13, VAR_8, 0x8808);
 FUNC_1(VAR_13, VAR_9, 0x8808);

 VAR_13->spec.dev_flags = 0;
 if (VAR_13->id == VAR_5) {
  unsigned short VAR_15;

  VAR_14 = FUNC_0(VAR_13, VAR_7);
  FUNC_1(VAR_13, VAR_7, (VAR_14 & ~0x0f) | 0x01);
  VAR_15 = FUNC_0(VAR_13, 0x60);
  VAR_13->spec.dev_flags = VAR_15 & 1;
  FUNC_1(VAR_13, VAR_7, VAR_14);
 } else if (VAR_13->id == VAR_6)
  VAR_13->spec.dev_flags = 2;

 VAR_13->build_ops = &VAR_12;



        VAR_13->ext_id |= VAR_2;

 FUNC_1(VAR_13, VAR_3, 0x05c0);

 FUNC_1(VAR_13, VAR_1, 0x0001);
 VAR_13->rates[VAR_10] = VAR_11;
 VAR_14 = FUNC_0(VAR_13, VAR_0);
 VAR_14 |= (1 << 4);
 FUNC_1(VAR_13, VAR_0, VAR_14);


 FUNC_1(VAR_13, 0x70, 0x0100);
 FUNC_1(VAR_13, 0x72, 0x0020);

 return 0;
}
