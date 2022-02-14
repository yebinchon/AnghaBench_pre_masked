
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ code; } ;
struct slist {struct slist* next; TYPE_1__ s; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline struct slist *
FUNC_0(struct slist *VAR_1)
{
 while (VAR_1 != 0 && VAR_1->s.code == VAR_0)
  VAR_1 = VAR_1->next;
 return VAR_1;
}
