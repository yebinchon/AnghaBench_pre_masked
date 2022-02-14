
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soundfont {struct snd_sf_zone* zones; } ;
struct snd_sf_zone {int v; struct snd_sf_zone* next; } ;
struct snd_sf_list {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct snd_sf_zone* FUNC_1 (int,int ) ;
 int FUNC_2 (struct snd_sf_list*,struct snd_soundfont*,struct snd_sf_zone*) ;

__attribute__((used)) static struct snd_sf_zone *
FUNC_3(struct snd_sf_list *VAR_1, struct snd_soundfont *VAR_2)
{
 struct snd_sf_zone *VAR_3;

 if ((VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0)) == ((void*)0))
  return ((void*)0);
 VAR_3->next = VAR_2->zones;
 VAR_2->zones = VAR_3;

 FUNC_0(&VAR_3->v);

 FUNC_2(VAR_1, VAR_2, VAR_3);
 return VAR_3;
}
