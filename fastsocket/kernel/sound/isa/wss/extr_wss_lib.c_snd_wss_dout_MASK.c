
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {unsigned char mce_bit; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct snd_wss*,int ) ;
 int FUNC_4 (struct snd_wss*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_5(struct snd_wss *VAR_3, unsigned char VAR_4,
    unsigned char VAR_5)
{
 int VAR_6;

 for (VAR_6 = 250;
      VAR_6 > 0 && (FUNC_3(VAR_3, FUNC_0(VAR_2)) & VAR_0);
      VAR_6--)
  FUNC_2(10);
 FUNC_4(VAR_3, FUNC_0(VAR_2), VAR_3->mce_bit | VAR_4);
 FUNC_4(VAR_3, FUNC_0(VAR_1), VAR_5);
 FUNC_1();
}
