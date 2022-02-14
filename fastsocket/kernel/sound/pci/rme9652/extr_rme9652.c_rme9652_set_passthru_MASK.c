
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int control_register; int passthru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_rme9652*) ;
 int FUNC_2 (struct snd_rme9652*,int,int) ;
 int FUNC_3 (struct snd_rme9652*) ;
 int FUNC_4 (struct snd_rme9652*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_rme9652 *VAR_3, int VAR_4)
{
 if (VAR_4) {
  FUNC_2(VAR_3, -1, 1);





  VAR_3->control_register =
   VAR_1 |
   FUNC_0(7) |
   VAR_2;

  FUNC_1(VAR_3);

  FUNC_4(VAR_3, VAR_0,
         VAR_3->control_register);
  VAR_3->passthru = 1;
 } else {
  FUNC_2(VAR_3, -1, 0);
  FUNC_3(VAR_3);
  VAR_3->passthru = 0;
 }

 return 0;
}
