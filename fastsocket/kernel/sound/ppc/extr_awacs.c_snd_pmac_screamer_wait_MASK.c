
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pmac {TYPE_1__* awacs; } ;
struct TYPE_2__ {int codec_stat; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct snd_pmac *VAR_1)
{
 long VAR_2 = 2000;
 while (!(FUNC_0(&VAR_1->awacs->codec_stat) & VAR_0)) {
  FUNC_1(1);
  if (! --VAR_2) {
   FUNC_2("snd_pmac_screamer_wait timeout\n");
   break;
  }
 }
}
