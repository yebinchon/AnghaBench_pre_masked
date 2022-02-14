
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {short channels; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_4__ {TYPE_1__* devc; } ;


 TYPE_2__** VAR_0 ;

__attribute__((used)) static short FUNC_0(int VAR_1, short VAR_2)
{
 sb_devc *VAR_3 = VAR_0[VAR_1]->devc;
 return VAR_3->channels = 1;
}
