
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ctf_id_t ;
struct TYPE_4__ {struct TYPE_4__* ctf_parent; } ;
typedef TYPE_1__ ctf_file_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

int
FUNC_1(ctf_file_t *VAR_0, ctf_id_t VAR_1, ctf_file_t *VAR_2, ctf_id_t VAR_3)
{
 int VAR_4;

 if (VAR_1 < VAR_3)
  VAR_4 = -1;
 else if (VAR_1 > VAR_3)
  VAR_4 = 1;
 else
  VAR_4 = 0;

 if (VAR_0 == VAR_2)
  return (VAR_4);

 if (FUNC_0(VAR_1) && VAR_0->ctf_parent != ((void*)0))
  VAR_0 = VAR_0->ctf_parent;

 if (FUNC_0(VAR_3) && VAR_2->ctf_parent != ((void*)0))
  VAR_2 = VAR_2->ctf_parent;

 if (VAR_0 < VAR_2)
  return (-1);

 if (VAR_0 > VAR_2)
  return (1);

 return (VAR_4);
}
