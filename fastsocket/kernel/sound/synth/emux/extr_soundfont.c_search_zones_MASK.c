
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int low; int high; int vellow; int velhigh; int fixkey; int start; int end; } ;
struct snd_sf_zone {TYPE_1__ v; scalar_t__ mapped; struct snd_sf_zone* next_zone; } ;
struct snd_sf_list {int dummy; } ;


 struct snd_sf_zone* FUNC_0 (struct snd_sf_list*,int,int,int) ;

__attribute__((used)) static int
FUNC_1(struct snd_sf_list *VAR_0, int *VAR_1, int VAR_2,
      int VAR_3, int VAR_4, struct snd_sf_zone **VAR_5,
      int VAR_6, int VAR_7)
{
 struct snd_sf_zone *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(VAR_0, VAR_4, VAR_3, *VAR_1);
 VAR_9 = 0;
 for (; VAR_8; VAR_8 = VAR_8->next_zone) {
  if (*VAR_1 >= VAR_8->v.low && *VAR_1 <= VAR_8->v.high &&
      VAR_2 >= VAR_8->v.vellow && VAR_2 <= VAR_8->v.velhigh) {
   if (VAR_8->mapped) {

    int VAR_10 = VAR_8->v.fixkey;
    VAR_3 = VAR_8->v.start;
    VAR_4 = VAR_8->v.end;

    if (VAR_7 > 5)
     return 0;
    if (VAR_10 < 0)
     VAR_10 = *VAR_1;
    VAR_9 = FUNC_1(VAR_0, &VAR_10, VAR_2,
             VAR_3, VAR_4, VAR_5,
             VAR_6, VAR_7 + 1);
    if (VAR_9 > 0)
     *VAR_1 = VAR_10;
    break;
   }
   VAR_5[VAR_9++] = VAR_8;
   if (VAR_9 >= VAR_6)
    break;
  }
 }

 return VAR_9;
}
