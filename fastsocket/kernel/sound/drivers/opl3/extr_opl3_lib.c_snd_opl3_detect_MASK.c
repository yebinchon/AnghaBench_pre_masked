
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3 {scalar_t__ hardware; int r_port; int (* command ) (struct snd_opl3*,int,int) ;int l_port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned char FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,unsigned char) ;
 int FUNC_3 (struct snd_opl3*,int,int) ;
 int FUNC_4 (struct snd_opl3*,int,int) ;
 int FUNC_5 (struct snd_opl3*,int,int) ;
 int FUNC_6 (struct snd_opl3*,int,int) ;
 int FUNC_7 (struct snd_opl3*,int,int) ;
 int FUNC_8 (struct snd_opl3*,int,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct snd_opl3 * VAR_11)
{
 unsigned char VAR_12, VAR_13, VAR_14;


 VAR_11->command(VAR_11, VAR_5 | VAR_7, VAR_8 | VAR_10);

 VAR_11->command(VAR_11, VAR_5 | VAR_7, VAR_4);
 VAR_14 = VAR_12 = FUNC_0(VAR_11->l_port);
 if ((VAR_12 & 0xe0) != 0x00) {
  FUNC_2("OPL3: stat1 = 0x%x\n", VAR_12);
  return -VAR_0;
 }

 VAR_11->command(VAR_11, VAR_5 | VAR_6, 0xff);

 VAR_11->command(VAR_11, VAR_5 | VAR_7, VAR_10 | VAR_9);

 FUNC_9(200);

 VAR_13 = FUNC_0(VAR_11->l_port);

 VAR_11->command(VAR_11, VAR_5 | VAR_7, VAR_8 | VAR_10);

 VAR_11->command(VAR_11, VAR_5 | VAR_7, VAR_4);
 if ((VAR_13 & 0xe0) != 0xc0) {
  FUNC_2("OPL3: stat2 = 0x%x\n", VAR_13);
  return -VAR_0;
 }



 if (VAR_11->hardware != VAR_1)
  return 0;


 if (VAR_14 == 0x06) {
  VAR_11->hardware = VAR_2;
 } else {




  if (FUNC_1(!VAR_11->r_port))
   return -VAR_0;
  VAR_11->hardware = VAR_3;
 }
 return 0;
}
