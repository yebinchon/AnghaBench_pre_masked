
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ac97_codec {int (* codec_read ) (struct ac97_codec*,int ) ;int (* codec_write ) (struct ac97_codec*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct ac97_codec*,int ) ;
 int FUNC_1 (struct ac97_codec*,int ) ;
 int FUNC_2 (struct ac97_codec*,int ,int) ;
 int FUNC_3 (struct ac97_codec*,int ,int) ;
 int FUNC_4 (struct ac97_codec*,int ) ;
 int FUNC_5 (struct ac97_codec*,int ,int) ;
 int FUNC_6 (struct ac97_codec*,int ) ;
 int FUNC_7 (struct ac97_codec*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct ac97_codec *VAR_15, int VAR_16, int VAR_17, int VAR_18)
{
 u16 VAR_19;

 VAR_19 = VAR_15->codec_read(VAR_15, VAR_9);

 switch(VAR_17)
 {

  default:
  case 0:
   VAR_19 = VAR_15->codec_read(VAR_15, VAR_3);
   VAR_15->codec_write(VAR_15, VAR_3, (VAR_19 & ~VAR_1));
   if(VAR_17 == 0)
    return 0;
   return -VAR_14;
  case 1:
   VAR_19 = (VAR_19 & VAR_8) | VAR_7;
   break;
  case 2:
   VAR_19 = (VAR_19 & VAR_8) | VAR_6;
   break;
  case 3:
   VAR_19 = (VAR_19 & VAR_8) | VAR_5;
   break;
 }

 VAR_19 &= ~VAR_4;
 VAR_19 |= (VAR_18 & VAR_10) << 6;

 if(VAR_18 & VAR_11)
  VAR_19 |= 2;
 if(VAR_18 & VAR_13)
  VAR_19 |= 1;
 if(VAR_18 & VAR_12)
  VAR_19 |= 0x4000;

 VAR_15->codec_write(VAR_15, VAR_9, VAR_19);

 VAR_19 = VAR_15->codec_read(VAR_15, VAR_3);
 VAR_19 &= (VAR_0);
 VAR_19 |= VAR_2 | VAR_1 | VAR_16;
 VAR_15->codec_write(VAR_15, VAR_3, VAR_19);

 VAR_19 = VAR_15->codec_read(VAR_15, VAR_3);
 if(!(VAR_19 & 0x0400))
 {
  VAR_15->codec_write(VAR_15, VAR_3, VAR_19 & ~ VAR_1);
  return -VAR_14;
 }
 return 0;
}
