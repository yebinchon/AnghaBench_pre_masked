
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channels; int tconst; int speed; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_4__ {TYPE_1__* devc; } ;


 TYPE_2__** VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, int VAR_2)
{
 sb_devc *VAR_3 = VAR_0[VAR_1]->devc;

 if (VAR_2 > 0)
 {
  int VAR_4;
  int VAR_5 = VAR_2 * VAR_3->channels;

  if (VAR_2 < 5000)
   VAR_2 = 5000;
  if (VAR_2 > 44100)
   VAR_2 = 44100;

  VAR_3->tconst = (256 - ((1000000 + VAR_5 / 2) / VAR_5)) & 0xff;

  VAR_4 = 256 - VAR_3->tconst;
  VAR_2 = ((1000000 + VAR_4 / 2) / VAR_4) / VAR_3->channels;

  VAR_3->speed = VAR_2;
 }
 return VAR_3->speed;
}
