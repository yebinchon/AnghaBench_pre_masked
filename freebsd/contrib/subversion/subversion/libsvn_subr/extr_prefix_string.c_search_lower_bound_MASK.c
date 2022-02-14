
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* data; } ;
struct TYPE_5__ {TYPE_1__ key; } ;
typedef TYPE_2__ node_t ;



__attribute__((used)) static int
FUNC_0(node_t **VAR_0,
                   unsigned char VAR_1,
                   int VAR_2)
{
  int VAR_3 = 0;
  int VAR_4 = VAR_2 - 1;


  while (VAR_3 <= VAR_4)
    {
      int VAR_5 = VAR_3 + (VAR_4 - VAR_3) / 2;

      if ((unsigned char)VAR_0[VAR_5]->key.data[0] < VAR_1)
        VAR_3 = VAR_5 + 1;
      else
        VAR_4 = VAR_5 - 1;
    }

  return VAR_3;
}
