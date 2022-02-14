
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* varinfo_t ;
struct TYPE_3__ {char* name; unsigned int id; scalar_t__ offset; scalar_t__ fullsize; scalar_t__ size; struct TYPE_3__* next; struct TYPE_3__* collapsed_to; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,char*,char*,char*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_3 (unsigned int VAR_1)
{
  varinfo_t VAR_2 = FUNC_2 (VAR_1);
  varinfo_t VAR_3;

  for (VAR_3 = VAR_2->next; VAR_3; VAR_3 = VAR_3->next)
    {
      if (VAR_0)
 FUNC_0 (VAR_0, "Type safety: Collapsing var %s into %s\n",
   VAR_3->name, VAR_2->name);

      FUNC_1 (!VAR_3->collapsed_to);
      VAR_3->collapsed_to = VAR_2;
    }

  VAR_2->next = ((void*)0);
  VAR_2->size = VAR_2->fullsize - VAR_2->offset;

  return VAR_2->id;
}
