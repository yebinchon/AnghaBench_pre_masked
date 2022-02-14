
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {char* string; } ;
struct TYPE_6__ {scalar_t__ link; } ;
struct TYPE_7__ {TYPE_1__ i; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_4__ root; TYPE_2__ u; } ;
struct elf_link_hash_entry {int dynindx; TYPE_5__ root; } ;
struct collect_gnu_hash_codes {unsigned long* hashcodes; size_t nsyms; unsigned long* hashval; size_t min_dynindx; TYPE_3__* bed; } ;
typedef int bfd_boolean ;
struct TYPE_8__ {int (* elf_hash_symbol ) (struct elf_link_hash_entry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (char const*) ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char const*,int ) ;
 int FUNC_5 (struct elf_link_hash_entry*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (struct elf_link_hash_entry *VAR_3, void *VAR_4)
{
  struct collect_gnu_hash_codes *VAR_5 = VAR_4;
  const char *VAR_6;
  char *VAR_7;
  unsigned long VAR_8;
  char *VAR_9 = ((void*)0);

  if (VAR_3->root.type == VAR_2)
    VAR_3 = (struct elf_link_hash_entry *) VAR_3->root.u.i.link;


  if (VAR_3->dynindx == -1)
    return VAR_1;


  if (! (*VAR_5->bed->elf_hash_symbol) (VAR_3))
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



  VAR_5->hashcodes[VAR_5->nsyms] = VAR_8;
  VAR_5->hashval[VAR_3->dynindx] = VAR_8;
  ++VAR_5->nsyms;
  if (VAR_5->min_dynindx < 0 || VAR_5->min_dynindx > VAR_3->dynindx)
    VAR_5->min_dynindx = VAR_3->dynindx;

  if (VAR_9 != ((void*)0))
    FUNC_2 (VAR_9);

  return VAR_1;
}
