
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int bits; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_4__ {TYPE_1__* devc; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_2__** VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(int VAR_3, unsigned int VAR_4)
{
 sb_devc *VAR_5 = VAR_2[VAR_3]->devc;

 if (VAR_4 != 0)
 {
  if (VAR_4 == VAR_1 || VAR_4 == VAR_0)
   VAR_5->bits = VAR_4;
  else
   VAR_5->bits = VAR_1;
 }

 return VAR_5->bits;
}
