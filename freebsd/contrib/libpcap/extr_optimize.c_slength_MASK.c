
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__ code; } ;
struct slist {TYPE_1__ s; struct slist* next; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u_int
FUNC_0(struct slist *VAR_1)
{
 u_int VAR_2 = 0;

 for (; VAR_1; VAR_1 = VAR_1->next)
  if (VAR_1->s.code != VAR_0)
   ++VAR_2;
 return VAR_2;
}
