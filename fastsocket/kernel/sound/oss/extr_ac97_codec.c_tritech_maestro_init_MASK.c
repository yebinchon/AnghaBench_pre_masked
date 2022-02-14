
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_codec {int (* codec_write ) (struct ac97_codec*,int,int) ;} ;


 int FUNC_0 (struct ac97_codec*,int,int) ;
 int FUNC_1 (struct ac97_codec*,int,int) ;
 int FUNC_2 (struct ac97_codec*,int,int) ;

__attribute__((used)) static int FUNC_3(struct ac97_codec * VAR_0)
{

 VAR_0->codec_write(VAR_0, 0x2A, 0x0001);
 VAR_0->codec_write(VAR_0, 0x2C, 0x0000);
 VAR_0->codec_write(VAR_0, 0x2C, 0XFFFF);
 return 0;
}
