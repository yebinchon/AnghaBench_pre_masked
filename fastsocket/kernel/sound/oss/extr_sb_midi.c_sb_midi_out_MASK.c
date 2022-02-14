
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int midi_broken; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_5__ {TYPE_1__* devc; } ;


 TYPE_3__** VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char) ;

__attribute__((used)) static int FUNC_1(int VAR_1, unsigned char VAR_2)
{
 sb_devc *VAR_3 = VAR_0[VAR_1]->devc;

 if (VAR_3 == ((void*)0))
  return 1;

 if (VAR_3->midi_broken)
  return 1;

 if (!FUNC_0(VAR_3, VAR_2))
 {
  VAR_3->midi_broken = 1;
  return 1;
 }
 return 1;
}
