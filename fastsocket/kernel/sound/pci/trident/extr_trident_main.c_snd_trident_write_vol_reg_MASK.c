
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident_voice {unsigned int Vol; int number; int CTRL; } ;
struct snd_trident {int device; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct snd_trident*,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_trident * VAR_2,
          struct snd_trident_voice * VAR_3,
          unsigned int VAR_4)
{
 VAR_3->Vol = VAR_4;
 FUNC_1(VAR_3->number, FUNC_0(VAR_2, VAR_1));
 switch (VAR_2->device) {
 case 130:
 case 129:
  FUNC_1(VAR_3->Vol >> 2, FUNC_0(VAR_2, VAR_0 + 2));
  break;
 case 128:

  FUNC_2((VAR_3->CTRL << 12) | VAR_3->Vol,
       FUNC_0(VAR_2, VAR_0));
  break;
 }
}
