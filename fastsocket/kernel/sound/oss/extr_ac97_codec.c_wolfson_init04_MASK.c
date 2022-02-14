
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_codec {int (* codec_read ) (struct ac97_codec*,int ) ;int (* codec_write ) (struct ac97_codec*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ac97_codec*,int ,int) ;
 int FUNC_1 (struct ac97_codec*,int ,int) ;
 int FUNC_2 (struct ac97_codec*,int ,int) ;
 int FUNC_3 (struct ac97_codec*,int ,int) ;
 int FUNC_4 (struct ac97_codec*,int ) ;
 int FUNC_5 (struct ac97_codec*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct ac97_codec * VAR_6)
{
 VAR_6->codec_write(VAR_6, VAR_3, 0x0808);
 VAR_6->codec_write(VAR_6, VAR_4, 0x0808);


 VAR_6->codec_write(VAR_6, VAR_5, 0x0200);


 VAR_6->codec_write(VAR_6, VAR_2,
  VAR_6->codec_read(VAR_6, VAR_0));


 VAR_6->codec_write(VAR_6, VAR_1, 0x0000);
 return 0;
}
