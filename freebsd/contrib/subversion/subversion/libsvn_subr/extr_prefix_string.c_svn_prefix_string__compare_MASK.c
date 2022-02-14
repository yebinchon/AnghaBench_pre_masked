
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* data; TYPE_2__* prefix; } ;
typedef TYPE_1__ svn_prefix_string__t ;
struct TYPE_6__ {scalar_t__ length; TYPE_1__ key; } ;
typedef TYPE_2__ node_t ;


 int FUNC_0 (int) ;

int
FUNC_1(const svn_prefix_string__t *VAR_0,
                           const svn_prefix_string__t *VAR_1)
{
  const node_t *VAR_2 = VAR_0->prefix;
  const node_t *VAR_3 = VAR_1->prefix;

  if (VAR_0 == VAR_1)
    return 0;


  while (VAR_2 != VAR_3)
    {
      if (VAR_2->length <= VAR_3->length)
        {
          VAR_1 = &VAR_3->key;
          VAR_3 = VAR_3->key.prefix;
        }
      else if (VAR_3->length <= VAR_2->length)
        {
          VAR_0 = &VAR_2->key;
          VAR_2 = VAR_2->key.prefix;
        }


      FUNC_0(VAR_2 && VAR_3);
    }


  return (int)(unsigned char)VAR_0->data[0] - (int)(unsigned char)VAR_1->data[0];
}
