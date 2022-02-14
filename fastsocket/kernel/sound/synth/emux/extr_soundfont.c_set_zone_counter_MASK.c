
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soundfont {int type; } ;
struct snd_sf_zone {scalar_t__ counter; } ;
struct snd_sf_list {scalar_t__ zone_counter; scalar_t__ zone_locked; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct snd_sf_list *VAR_1, struct snd_soundfont *VAR_2,
   struct snd_sf_zone *VAR_3)
{
 VAR_3->counter = VAR_1->zone_counter++;
 if (VAR_2->type & VAR_0)
  VAR_1->zone_locked = VAR_1->zone_counter;
}
