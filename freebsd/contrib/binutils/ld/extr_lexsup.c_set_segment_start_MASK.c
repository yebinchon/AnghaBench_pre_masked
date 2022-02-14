
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* name; struct TYPE_5__* next; int used; void* value; } ;
typedef TYPE_1__ segment_type ;
typedef void* bfd_vma ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (char*,char const**,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char const*,int ,TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;

__attribute__((used)) static void
FUNC_7 (const char *VAR_2, char *VAR_3)
{
  const char *VAR_4;
  const char *VAR_5;
  segment_type *VAR_6;

  bfd_vma VAR_7 = FUNC_1 (VAR_3, &VAR_5, 16);
  if (*VAR_5)
    FUNC_2 (FUNC_0("%P%F: invalid hex number `%s'\n"), VAR_3);


  VAR_4 = VAR_2 + 1;
  for (VAR_6 = VAR_1; VAR_6; VAR_6 = VAR_6->next)
    if (FUNC_6 (VAR_6->name, VAR_4) == 0)
      {
 VAR_6->value = VAR_7;
 return;
      }


  VAR_6 = FUNC_5 (sizeof (*VAR_6));
  VAR_6->name = VAR_4;
  VAR_6->value = VAR_7;
  VAR_6->used = VAR_0;

  VAR_6->next = VAR_1;
  VAR_1 = VAR_6;




  FUNC_4 (VAR_2, FUNC_3 (VAR_7), VAR_6);
}
