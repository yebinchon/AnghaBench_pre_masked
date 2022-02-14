
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dev_flags; } ;
struct snd_ac97 {int flags; TYPE_1__ spec; int * build_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_ac97*,int ,int ,int ) ;
 int FUNC_1 (struct snd_ac97*,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 *VAR_8)
{
 VAR_8->build_ops = &VAR_7;

 VAR_8->spec.dev_flags = 0;
 VAR_8->flags |= VAR_3;


 FUNC_0(VAR_8, VAR_4, VAR_5, VAR_6);
 FUNC_1(VAR_8, VAR_1, 1<<15);



 FUNC_1(VAR_8, 0x7a, (1<<1)|(1<<4)|(0<<5)|(1<<6)|
        (1<<7)|(0<<12)|(1<<13)|(0<<14));



 FUNC_1(VAR_8, 0x76, (0<<0)|(0<<2)|(1<<4)|(1<<7)|(2<<8)|
        (1<<11)|(0<<12)|(1<<15));


 FUNC_1(VAR_8, VAR_2, 0x0808);
 FUNC_1(VAR_8, VAR_0, 0x0808);
 return 0;
}
