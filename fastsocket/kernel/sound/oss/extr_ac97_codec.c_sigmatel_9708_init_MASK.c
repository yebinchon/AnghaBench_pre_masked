
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
 int FUNC_0 (struct ac97_codec*,int ) ;
 int FUNC_1 (struct ac97_codec*,int ,int) ;
 int FUNC_2 (struct ac97_codec*,int ) ;
 int FUNC_3 (struct ac97_codec*,int ,int) ;
 int FUNC_4 (struct ac97_codec*,int ,int) ;
 int FUNC_5 (struct ac97_codec*,int ,int) ;
 int FUNC_6 (struct ac97_codec*,int ,int) ;
 int FUNC_7 (struct ac97_codec*,int ,int) ;
 int FUNC_8 (struct ac97_codec*,int ,int) ;
 int FUNC_9 (struct ac97_codec*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct ac97_codec * VAR_7)
{
 u16 VAR_8, VAR_9;

 VAR_8 = VAR_7->codec_read(VAR_7, VAR_2) & 0x8000;
 VAR_9 = VAR_7->codec_read(VAR_7, VAR_0);

 if ((VAR_8==0) && (VAR_9==0)) {
  VAR_7->codec_write(VAR_7, VAR_3, 0xabba);
  VAR_7->codec_write(VAR_7, VAR_4, 0x1000);
  VAR_7->codec_write(VAR_7, VAR_1, 0xabba);
  VAR_7->codec_write(VAR_7, VAR_2, 0x0007);
 } else if ((VAR_8==0x8000) && (VAR_9==0)) {
  VAR_7->codec_write(VAR_7, VAR_3, 0xabba);
  VAR_7->codec_write(VAR_7, VAR_4, 0x1001);
  VAR_7->codec_write(VAR_7, VAR_5, 0x0008);
 } else if ((VAR_8==0x8000) && (VAR_9==0x0080)) {

 }
 VAR_7->codec_write(VAR_7, VAR_6, 0x0000);
 return 0;
}
