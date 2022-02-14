
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ submodel; int speed; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_4__ {TYPE_1__* devc; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__** VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2, int VAR_3)
{
 sb_devc *VAR_4 = VAR_1[VAR_2]->devc;
 int VAR_5 = VAR_4->submodel == VAR_0 ? 48000 : 44100;

 if (VAR_3 > 0)
 {
  if (VAR_3 < 5000)
   VAR_3 = 5000;

  if (VAR_3 > VAR_5)
   VAR_3 = VAR_5;

  VAR_4->speed = VAR_3;
 }
 return VAR_4->speed;
}
