
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff {TYPE_1__* last; } ;
struct TYPE_2__ {scalar_t__ endspan; } ;


 scalar_t__ FUNC_0 (struct roff*) ;

__attribute__((used)) static int
FUNC_1(struct roff *VAR_0)
{
 int VAR_1;

 VAR_1 = 0;
 while (VAR_0->last != ((void*)0)) {
  if (--VAR_0->last->endspan != 0)
   break;
  VAR_1 += FUNC_0(VAR_0);
 }
 return VAR_1;
}
