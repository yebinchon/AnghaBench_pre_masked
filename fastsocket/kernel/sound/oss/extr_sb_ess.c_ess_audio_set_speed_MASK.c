
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int speed; scalar_t__ duplex; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_5__ {TYPE_1__* devc; } ;


 TYPE_3__** VAR_0 ;
 int FUNC_0 (TYPE_1__*,int*,int*) ;

__attribute__((used)) static int FUNC_1(int VAR_1, int VAR_2)
{
 sb_devc *VAR_3 = VAR_0[VAR_1]->devc;
 int VAR_4, VAR_5, VAR_6;

 if (VAR_2 > 0) {
  VAR_4 = (VAR_3->duplex ? 6215 : 5000 );
  VAR_5 = (VAR_3->duplex ? 44100 : 48000);
  if (VAR_2 < VAR_4) VAR_2 = VAR_4;
  if (VAR_2 > VAR_5) VAR_2 = VAR_5;

  FUNC_0 (VAR_3, &VAR_2, &VAR_6);

  VAR_3->speed = VAR_2;
 }
 return VAR_3->speed;
}
