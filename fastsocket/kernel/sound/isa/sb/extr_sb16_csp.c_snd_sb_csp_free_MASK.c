
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb_csp {int running; int * csp_programs; } ;
struct snd_hwdep {struct snd_sb_csp* private_data; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_sb_csp*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_sb_csp*) ;

__attribute__((used)) static void FUNC_4(struct snd_hwdep *VAR_1)
{
 int VAR_2;
 struct snd_sb_csp *VAR_3 = VAR_1->private_data;
 if (VAR_3) {
  if (VAR_3->running & VAR_0)
   FUNC_3(VAR_3);
  for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_3->csp_programs); ++VAR_2)
   FUNC_2(VAR_3->csp_programs[VAR_2]);
  FUNC_1(VAR_3);
 }
}
