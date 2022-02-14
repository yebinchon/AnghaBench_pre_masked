
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_codec {scalar_t__ id; int (* codec_write ) (struct ac97_codec*,int ,int) ;int (* codec_read ) (struct ac97_codec*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ac97_codec*,int ,long) ;
 int FUNC_1 (struct ac97_codec*,int ,int) ;
 int FUNC_2 (struct ac97_codec*,int ,int) ;
 int FUNC_3 (struct ac97_codec*,int ) ;
 int FUNC_4 (struct ac97_codec*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ac97_codec * VAR_4)
{

 if (VAR_4->id == 0)
  return 0;

 VAR_4->codec_write(VAR_4, VAR_3, 0L);



 VAR_4->codec_write(VAR_4, VAR_2, 0x00);




 VAR_4->codec_write(VAR_4, VAR_0, 0xabba);
 VAR_4->codec_read(VAR_4, VAR_0);


 VAR_4->codec_write(VAR_4, VAR_1, 0x3802);

 return 0;
}
