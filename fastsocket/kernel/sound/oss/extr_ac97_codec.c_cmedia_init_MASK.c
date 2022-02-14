
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ac97_codec {int (* codec_read ) (struct ac97_codec*,int) ;int (* codec_write ) (struct ac97_codec*,int,int) ;} ;


 int FUNC_0 (struct ac97_codec*,int,int) ;
 int FUNC_1 (struct ac97_codec*,int) ;
 int FUNC_2 (struct ac97_codec*,int,int) ;
 int FUNC_3 (struct ac97_codec*,int,int) ;
 int FUNC_4 (struct ac97_codec*,int,int) ;

__attribute__((used)) static int FUNC_5(struct ac97_codec *VAR_0)
{
 u16 VAR_1;


 VAR_0->codec_write(VAR_0, 0x64, 0x3000);
 VAR_1 = VAR_0->codec_read(VAR_0, 0x64);
 VAR_1 &= ~0x8000;
 VAR_0->codec_write(VAR_0, 0x64, VAR_1);
 VAR_0->codec_write(VAR_0, 0x70, 0x0100);
 VAR_0->codec_write(VAR_0, 0x72, 0x0020);
 return 0;
}
