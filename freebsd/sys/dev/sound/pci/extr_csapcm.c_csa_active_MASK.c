
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csa_info {int active; TYPE_1__* card; } ;
struct TYPE_2__ {int (* active ) (int) ;} ;


 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct csa_info *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_0->active;
 VAR_0->active += VAR_1;

 if ((VAR_0->active > 1) || (VAR_0->active < -1))
  VAR_0->active = 0;
 if (VAR_0->card->active)
  return (VAR_0->card->active(!(VAR_0->active && VAR_2)));

 return 0;
}
