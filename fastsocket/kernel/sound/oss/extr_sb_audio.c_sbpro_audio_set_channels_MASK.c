
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {short channels; scalar_t__ model; int speed; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_4__ {TYPE_1__* devc; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__** VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static short FUNC_1(int VAR_2, short VAR_3)
{
 sb_devc *VAR_4 = VAR_1[VAR_2]->devc;

 if (VAR_3 == 1 || VAR_3 == 2)
 {
  if (VAR_3 != VAR_4->channels)
  {
   VAR_4->channels = VAR_3;
   if (VAR_4->model == VAR_0 && VAR_4->channels == 2)
    FUNC_0(VAR_2, VAR_4->speed);
  }
 }
 return VAR_4->channels;
}
