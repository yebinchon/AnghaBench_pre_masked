
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soundfont {struct snd_sf_zone* zones; } ;
struct snd_sf_zone {int bank; int instr; struct snd_sf_zone* next; int mapped; } ;
struct snd_sf_list {int dummy; } ;


 int FUNC_0 (struct snd_sf_zone*) ;
 int FUNC_1 (struct snd_sf_list*) ;

__attribute__((used)) static int
FUNC_2(struct snd_sf_list *VAR_0, struct snd_soundfont *VAR_1,
     int VAR_2, int VAR_3)
{
 struct snd_sf_zone *VAR_4, *VAR_5, *VAR_6;
 int VAR_7 = 0;

 VAR_4 = ((void*)0);
 for (VAR_6 = VAR_1->zones; VAR_6; VAR_6 = VAR_5) {
  VAR_5 = VAR_6->next;
  if (! VAR_6->mapped &&
      VAR_6->bank == VAR_2 && VAR_6->instr == VAR_3) {

   if (VAR_4)
    VAR_4->next = VAR_5;
   else
    VAR_1->zones = VAR_5;
   VAR_7++;
   FUNC_0(VAR_6);
  } else
   VAR_4 = VAR_6;
 }
 if (VAR_7)
  FUNC_1(VAR_0);
 return VAR_7;
}
