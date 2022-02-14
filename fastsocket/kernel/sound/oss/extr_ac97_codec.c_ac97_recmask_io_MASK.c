
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_codec {unsigned int (* codec_read ) (struct ac97_codec*,int ) ;int (* codec_write ) (struct ac97_codec*,int ,unsigned int) ;} ;


 int VAR_0 ;
 unsigned int* VAR_1 ;
 int* VAR_2 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned int) ;
 unsigned int FUNC_2 (struct ac97_codec*,int ) ;
 int FUNC_3 (struct ac97_codec*,int ) ;
 int FUNC_4 (struct ac97_codec*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct ac97_codec *VAR_3, int VAR_4, int VAR_5)
{
 unsigned int VAR_6;

 if (VAR_4) {

  VAR_6 = VAR_3->codec_read(VAR_3, VAR_0);



  return (1 << VAR_2[VAR_6 & 0x07]);
 }




 VAR_6 = (1 << VAR_2[VAR_3->codec_read(VAR_3, VAR_0) & 0x07]);
 if (VAR_5 != VAR_6)
     VAR_5 &= ~VAR_6;

 VAR_6 = FUNC_0(VAR_5);
 VAR_6 = VAR_1[VAR_6-1];
 VAR_6 |= VAR_6 << 8;





 VAR_3->codec_write(VAR_3, VAR_0, VAR_6);

 return 0;
}
