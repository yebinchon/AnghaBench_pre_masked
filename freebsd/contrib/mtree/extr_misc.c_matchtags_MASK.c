
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int count; int * list; } ;
struct TYPE_6__ {int count; int * list; } ;
struct TYPE_5__ {scalar_t__ tags; } ;
typedef TYPE_1__ NODE ;


 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;

int
FUNC_1(NODE *VAR_2)
{
 int VAR_3;

 if (VAR_2->tags) {
  for (VAR_3 = 0; VAR_3 < VAR_0.count; VAR_3++)
   if (FUNC_0(VAR_2->tags, VAR_0.list[VAR_3]))
    break;
  if (VAR_3 < VAR_0.count)
   return (0);

  for (VAR_3 = 0; VAR_3 < VAR_1.count; VAR_3++)
   if (FUNC_0(VAR_2->tags, VAR_1.list[VAR_3]))
    break;
  if (VAR_3 > 0 && VAR_3 == VAR_1.count)
   return (0);
 } else if (VAR_1.count > 0) {
  return (0);
 }
 return (1);
}
