
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {unsigned long elf_hash_value; } ;
struct TYPE_8__ {char* string; } ;
struct TYPE_6__ {scalar_t__ link; } ;
struct TYPE_7__ {TYPE_1__ i; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_3__ root; TYPE_2__ u; } ;
struct elf_link_hash_entry {int dynindx; TYPE_5__ u; TYPE_4__ root; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (char const*) ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char const*,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (struct elf_link_hash_entry *VAR_3, void *VAR_4)
{
  unsigned long **VAR_5 = VAR_4;
  const char *VAR_6;
  char *VAR_7;
  unsigned long VAR_8;
  char *VAR_9 = ((void*)0);

  if (VAR_3->root.type == VAR_2)
    VAR_3 = (struct elf_link_hash_entry *) VAR_3->root.u.i.link;


  if (VAR_3->dynindx == -1)
    return VAR_1;

  VAR_6 = VAR_3->root.root.string;
  VAR_7 = FUNC_4 (VAR_6, VAR_0);
  if (VAR_7 != ((void*)0))
    {
      VAR_9 = FUNC_1 (VAR_7 - VAR_6 + 1);
      FUNC_3 (VAR_9, VAR_6, VAR_7 - VAR_6);
      VAR_9[VAR_7 - VAR_6] = '\0';
      VAR_6 = VAR_9;
    }


  VAR_8 = FUNC_0 (VAR_6);


  *(*VAR_5)++ = VAR_8;



  VAR_3->u.elf_hash_value = VAR_8;

  if (VAR_9 != ((void*)0))
    FUNC_2 (VAR_9);

  return VAR_1;
}
