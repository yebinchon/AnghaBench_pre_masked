
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct via_info {TYPE_2__* rch; TYPE_1__* pch; } ;
struct TYPE_4__ {scalar_t__ active; } ;
struct TYPE_3__ {scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __inline int
FUNC_0(struct via_info *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 if (VAR_3 == ((void*)0))
  return (0);

 for (VAR_4 = 0; VAR_4 < VAR_0 + VAR_1; VAR_4++)
  VAR_5 += VAR_3->pch[VAR_4].active;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_5 += VAR_3->rch[VAR_4].active;

 return (VAR_5);
}
