
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3sa2 {unsigned char* ctlregs; scalar_t__ port; } ;


 int FUNC_0 (unsigned char,scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct snd_opl3sa2 *VAR_1, unsigned char VAR_2, unsigned char VAR_3)
{



 FUNC_0(VAR_2, VAR_1->port);
 FUNC_0(VAR_3, VAR_1->port + 1);
 VAR_1->ctlregs[VAR_2] = VAR_3;
}
