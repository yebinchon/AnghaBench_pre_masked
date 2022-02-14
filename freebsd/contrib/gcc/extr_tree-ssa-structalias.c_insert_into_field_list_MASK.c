
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* varinfo_t ;
struct TYPE_4__ {struct TYPE_4__* next; } ;



__attribute__((used)) static void
FUNC_0 (varinfo_t VAR_0, varinfo_t VAR_1)
{
  varinfo_t VAR_2 = VAR_0;
  varinfo_t VAR_3 = VAR_0->next;

  VAR_1->next = VAR_3;
  VAR_2->next = VAR_1;
}
