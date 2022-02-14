
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct minstrel_ht_sta {TYPE_1__* groups; } ;
struct TYPE_4__ {scalar_t__ streams; } ;
struct TYPE_3__ {unsigned int max_tp_rate; unsigned int max_tp_rate2; int supported; } ;


 unsigned int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct minstrel_ht_sta *VAR_2, unsigned int *VAR_3,
   bool VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = VAR_5 = *VAR_3 / VAR_0;
 while (VAR_5 > 0) {
  VAR_5--;

  if (!VAR_2->groups[VAR_5].supported)
   continue;

  if (VAR_1[VAR_5].streams >
      VAR_1[VAR_6].streams)
   continue;

  if (VAR_4)
   *VAR_3 = VAR_2->groups[VAR_5].max_tp_rate;
  else
   *VAR_3 = VAR_2->groups[VAR_5].max_tp_rate2;
  break;
 }
}
