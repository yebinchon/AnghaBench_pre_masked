
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int nfilters; } ;
struct TYPE_5__ {TYPE_1__ mc5; } ;
struct adapter {TYPE_3__* filters; TYPE_2__ params; } ;
struct TYPE_6__ {scalar_t__ locked; } ;


 int FUNC_0 (struct adapter*,int,TYPE_3__*) ;
 int FUNC_1 (struct adapter*) ;

__attribute__((used)) static int
FUNC_2(struct adapter *VAR_0)
{
 int VAR_1, VAR_2;
 unsigned int VAR_3 = VAR_0->params.mc5.nfilters;

 if (!VAR_0->filters)
  return (0);

 FUNC_1(VAR_0);

 for (VAR_1 = VAR_2 = 0; VAR_1 < VAR_3 && !VAR_2; VAR_1++) {
  if (VAR_0->filters[VAR_1].locked)
   VAR_2 = FUNC_0(VAR_0, VAR_1, &VAR_0->filters[VAR_1]);
 }

 return (VAR_2);
}
