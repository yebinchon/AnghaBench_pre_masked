
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_codec {int (* codec_read ) (struct ac97_codec*,int ) ;int (* codec_write ) (struct ac97_codec*,int ,long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ac97_codec*,int ) ;
 int FUNC_1 (struct ac97_codec*,int ,long) ;
 int FUNC_2 (struct ac97_codec*,int ) ;

__attribute__((used)) static int FUNC_3(struct ac97_codec *VAR_2)
{

 if(VAR_2->codec_read(VAR_2, VAR_1) & 2)
  return 1;

 VAR_2->codec_write(VAR_2, VAR_0, 0L);
 if(VAR_2->codec_read(VAR_2, VAR_0) & 1)
  return 1;
 return 0;
}
