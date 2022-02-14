
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_3__ {char const* name; scalar_t__ size; scalar_t__ vma; struct TYPE_3__* next; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 unsigned int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (const char * VAR_2,
   asection * VAR_3,
   bfd_vma * VAR_4)
{
  asection * VAR_5;
  unsigned int VAR_6;

  for (VAR_5 = VAR_3; VAR_5; VAR_5 = VAR_5->next)
    if (FUNC_0 (VAR_5->name, VAR_2) == 0)
      {
 *VAR_4 = VAR_5->vma;
 return VAR_1;
      }


  for (VAR_5 = VAR_3; VAR_5; VAR_5 = VAR_5->next)
    {
      VAR_6 = FUNC_1 (VAR_5->name);
      if (VAR_6 > FUNC_1 (VAR_2))
 continue;

      if (FUNC_2 (VAR_5->name, VAR_2, VAR_6) == 0)
 {
   if (FUNC_2 (".end", VAR_2 + VAR_6, 4) == 0)
     {
       *VAR_4 = VAR_5->vma + VAR_5->size;
       return VAR_1;
     }


 }
    }

  return VAR_0;
}
