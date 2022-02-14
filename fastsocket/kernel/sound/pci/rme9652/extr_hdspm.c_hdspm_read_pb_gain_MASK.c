
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hdspm {TYPE_2__* mixer; } ;
struct TYPE_4__ {TYPE_1__* ch; } ;
struct TYPE_3__ {int* pb; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct hdspm * VAR_1, unsigned int VAR_2,
         unsigned int VAR_3)
{
 if (VAR_2 >= VAR_0 || VAR_3 >= VAR_0)
  return 0;
 return VAR_1->mixer->ch[VAR_2].pb[VAR_3];
}
