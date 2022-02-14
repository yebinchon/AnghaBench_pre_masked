
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int protos; } ;
struct sppp {TYPE_1__ lcp; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct sppp *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0, VAR_5 = 1; VAR_4 < VAR_1; VAR_4++, VAR_5 <<= 1)
  if ((VAR_3->lcp.protos & VAR_5) && (VAR_2[VAR_4])->flags & VAR_0)
   return 1;
 return 0;
}
