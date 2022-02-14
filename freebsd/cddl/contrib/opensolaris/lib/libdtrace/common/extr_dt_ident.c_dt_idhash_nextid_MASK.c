
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
struct TYPE_3__ {scalar_t__ dh_nextid; scalar_t__ dh_maxid; } ;
typedef TYPE_1__ dt_idhash_t ;



int
FUNC_0(dt_idhash_t *VAR_0, uint_t *VAR_1)
{
 if (VAR_0->dh_nextid >= VAR_0->dh_maxid)
  return (-1);

 *VAR_1 = VAR_0->dh_nextid++;
 return (0);
}
