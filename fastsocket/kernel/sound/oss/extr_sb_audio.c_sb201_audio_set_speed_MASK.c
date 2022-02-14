
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channels; int opened; int tconst; int speed; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_4__ {TYPE_1__* devc; } ;


 int VAR_0 ;
 TYPE_2__** VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2, int VAR_3)
{
 sb_devc *VAR_4 = VAR_1[VAR_2]->devc;
 int VAR_5;
 int VAR_6 = VAR_3 * VAR_4->channels;

 if (VAR_3 > 0)
 {
  if (VAR_3 < 4000)
   VAR_3 = 4000;
  if (VAR_3 > 44100)
   VAR_3 = 44100;
  if (VAR_4->opened & VAR_0 && VAR_3 > 15000)
   VAR_3 = 15000;
  VAR_4->tconst = (256 - ((1000000 + VAR_6 / 2) / VAR_6)) & 0xff;
  VAR_5 = 256 - VAR_4->tconst;
  VAR_3 = ((1000000 + VAR_5 / 2) / VAR_5) / VAR_4->channels;

  VAR_4->speed = VAR_3;
 }
 return VAR_4->speed;
}
