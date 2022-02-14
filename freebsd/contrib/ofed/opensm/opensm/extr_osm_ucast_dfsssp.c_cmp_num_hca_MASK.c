
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num_hca; } ;
typedef TYPE_1__ vertex_t ;
typedef scalar_t__ uint32_t ;



__attribute__((used)) static int FUNC_0(const void * VAR_0, const void * VAR_1)
{
 vertex_t *VAR_2 = *((vertex_t **) VAR_0);
 vertex_t *VAR_3 = *((vertex_t **) VAR_1);
 uint32_t VAR_4 = 0, VAR_5 = 0;

 if (VAR_2)
  VAR_4 = VAR_2->num_hca;
 if (VAR_3)
  VAR_5 = VAR_3->num_hca;

 if (VAR_4 > VAR_5)
  return -1;
 else if (VAR_4 < VAR_5)
  return 1;
 else
  return 0;
}
