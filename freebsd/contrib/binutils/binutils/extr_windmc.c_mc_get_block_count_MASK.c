
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ rc_uint_type ;
struct TYPE_3__ {scalar_t__ vid; } ;
typedef TYPE_1__ mc_node_lang ;



__attribute__((used)) static int
FUNC_0 (mc_node_lang **VAR_0, int VAR_1)
{
  rc_uint_type VAR_2;
  int VAR_3, VAR_4;

  if (! VAR_0)
    return 0;
  VAR_3 = 0;
  VAR_4 = 0;
  while (VAR_3 < VAR_1)
    {
      VAR_4++;
      VAR_2 = VAR_0[VAR_3++]->vid;
      while (VAR_3 < VAR_1 && VAR_0[VAR_3]->vid == VAR_2 + 1)
 VAR_2 = VAR_0[VAR_3++]->vid;
    }
  return VAR_4;
}
