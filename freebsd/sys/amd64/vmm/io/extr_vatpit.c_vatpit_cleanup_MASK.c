
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vatpit {TYPE_1__* channel; } ;
struct TYPE_2__ {int callout; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vatpit*,int ) ;

void
FUNC_2(struct vatpit *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 3; VAR_2++)
  FUNC_0(&VAR_1->channel[VAR_2].callout);

 FUNC_1(VAR_1, VAR_0);
}
