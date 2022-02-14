
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_audio {int setup; int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_usb_audio *VAR_8,
      int VAR_9,
      int VAR_10)
{



 FUNC_0(VAR_8->dev, VAR_9, 0);

 if (VAR_8->setup & VAR_0) {
  unsigned int VAR_11;
  if ((VAR_8->setup & VAR_6) && VAR_10 != 6)
   return 1;
  if ((VAR_8->setup & VAR_5) && VAR_10 != 1)
   return 1;
  VAR_11 = VAR_8->setup & VAR_7;
  if (VAR_11 == VAR_3 && VAR_10 != 2)
   return 1;
  if (VAR_11 == VAR_4 && VAR_10 != 3)
   return 1;
  if (VAR_11 == VAR_1 && VAR_10 != 4)
   return 1;
  if (VAR_11 == VAR_2 && VAR_10 != 5)
   return 1;
 }

 return 0;
}
