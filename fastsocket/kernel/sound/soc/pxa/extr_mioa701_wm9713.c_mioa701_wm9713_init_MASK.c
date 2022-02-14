
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {unsigned short (* read ) (struct snd_soc_codec*,int ) ;int (* write ) (struct snd_soc_codec*,int ,unsigned short) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct snd_soc_codec*,int ) ;
 int FUNC_2 (struct snd_soc_codec*,char*) ;
 int FUNC_3 (struct snd_soc_codec*,int ) ;
 int FUNC_4 (struct snd_soc_codec*) ;
 unsigned short FUNC_5 (struct snd_soc_codec*,int ) ;
 int FUNC_6 (struct snd_soc_codec*,int ,unsigned short) ;
 unsigned short FUNC_7 (struct snd_soc_codec*,int ) ;
 int FUNC_8 (struct snd_soc_codec*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_codec *VAR_4)
{
 unsigned short VAR_5;


 FUNC_3(VAR_4, FUNC_0(VAR_3));


 FUNC_1(VAR_4, FUNC_0(VAR_2));


 VAR_5 = VAR_4->read(VAR_4, VAR_1);
 VAR_4->write(VAR_4, VAR_1, VAR_5 | 0x0100);


 VAR_5 = VAR_4->read(VAR_4, VAR_0);
 VAR_4->write(VAR_4, VAR_0, VAR_5 | 0xc000);

 FUNC_2(VAR_4, "Front Speaker");
 FUNC_2(VAR_4, "Rear Speaker");
 FUNC_2(VAR_4, "Front Mic");
 FUNC_2(VAR_4, "GSM Line In");
 FUNC_2(VAR_4, "GSM Line Out");
 FUNC_4(VAR_4);

 return 0;
}
