
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channels; int speed; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_4__ {TYPE_1__* devc; } ;


 TYPE_2__** VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_1, int VAR_2)
{
 sb_devc *VAR_3 = VAR_0[VAR_1]->devc;

 if (VAR_2 > 0)
 {
  if (VAR_2 < 4000)
   VAR_2 = 4000;
  if (VAR_2 > 44100)
   VAR_2 = 44100;
  if (VAR_3->channels > 1 && VAR_2 > 22050)
   VAR_2 = 22050;
  FUNC_0(VAR_1, VAR_2);
 }
 return VAR_3->speed;
}
