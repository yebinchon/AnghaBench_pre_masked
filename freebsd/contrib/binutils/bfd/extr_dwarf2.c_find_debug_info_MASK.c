
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sections; } ;
typedef TYPE_1__ bfd ;
struct TYPE_7__ {struct TYPE_7__* next; int name; } ;
typedef TYPE_2__ asection ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static asection *
FUNC_2 (bfd *VAR_2, asection *VAR_3)
{
  asection * VAR_4;

  VAR_4 = VAR_3 != ((void*)0) ? VAR_3->next : VAR_2->sections;

  while (VAR_4)
    {
      if (FUNC_1 (VAR_4->name, VAR_0) == 0)
 return VAR_4;

      if (FUNC_0 (VAR_4->name, VAR_1))
 return VAR_4;

      VAR_4 = VAR_4->next;
    }

  return ((void*)0);
}
