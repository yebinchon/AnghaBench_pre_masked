
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned short* map; int timestamp; scalar_t__* alloc_times; } ;
struct TYPE_3__ {int (* alloc_voice ) (int,int,int,TYPE_2__*) ;TYPE_2__ alloc; } ;


 int FUNC_0 (int,int,int,TYPE_2__*) ;
 TYPE_1__** VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1, int VAR_2, int VAR_3)
{
 unsigned short VAR_4;
 int VAR_5;

 VAR_4 = (VAR_2 << 8) | (VAR_3 + 1);

 VAR_5 = VAR_0[VAR_1]->alloc_voice(VAR_1, VAR_2, VAR_3,
          &VAR_0[VAR_1]->alloc);
 VAR_0[VAR_1]->alloc.map[VAR_5] = VAR_4;
 VAR_0[VAR_1]->alloc.alloc_times[VAR_5] =
   VAR_0[VAR_1]->alloc.timestamp++;
 return VAR_5;
}
