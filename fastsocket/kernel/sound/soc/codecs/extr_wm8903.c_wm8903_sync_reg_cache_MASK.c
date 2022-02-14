
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_codec {int (* hw_read ) (struct snd_soc_codec*,int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_codec*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct snd_soc_codec *VAR_1, u16 *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  VAR_2[VAR_3] = VAR_1->hw_read(VAR_1, VAR_3);
}
