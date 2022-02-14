
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_codec {int (* codec_read ) (struct ac97_codec*,int ) ;int (* codec_write ) (struct ac97_codec*,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ac97_codec*,int ,int) ;
 int FUNC_1 (struct ac97_codec*,int ) ;
 int FUNC_2 (struct ac97_codec*,int ,int) ;
 int FUNC_3 (struct ac97_codec*,int ) ;

__attribute__((used)) static int FUNC_4(struct ac97_codec * VAR_1, int VAR_2)
{
 if(VAR_2)
  VAR_1->codec_write(VAR_1, VAR_0,
   VAR_1->codec_read(VAR_1, VAR_0)|0x8000);
 else
  VAR_1->codec_write(VAR_1, VAR_0,
   VAR_1->codec_read(VAR_1, VAR_0)&~0x8000);
 return 0;
}
