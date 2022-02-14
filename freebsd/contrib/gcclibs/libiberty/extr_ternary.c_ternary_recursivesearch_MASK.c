
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const splitchar; struct TYPE_3__* eqkid; struct TYPE_3__* hikid; struct TYPE_3__* lokid; } ;
typedef TYPE_1__ ternary_node ;
typedef int PTR ;



__attribute__((used)) static PTR
FUNC_0 (const ternary_node *VAR_0, const char *VAR_1)
{
  if (!VAR_0)
    return 0;
  if (*VAR_1 < VAR_0->splitchar)
    return FUNC_0 (VAR_0->lokid, VAR_1);
  else if (*VAR_1 > VAR_0->splitchar)
    return FUNC_0 (VAR_0->hikid, VAR_1);
  else
    {
      if (*VAR_1 == 0)
 return (PTR) VAR_0->eqkid;
      return FUNC_0 (VAR_0->eqkid, ++VAR_1);
    }
}
