
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ offset; } ;
struct TYPE_4__ {int offset; } ;
struct TYPE_5__ {int offset; } ;
struct ia64_unw_table_entry {TYPE_3__ info; TYPE_1__ end; TYPE_2__ start; } ;
struct ia64_unw_aux_info {int table_len; unsigned char* info; int info_addr; scalar_t__ seg_base; int strtab_size; int strtab; int nsyms; int symtab; struct ia64_unw_table_entry* table; } ;
typedef int stamp ;
typedef int bfd_vma ;


 int FUNC_0 (TYPE_3__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned char*,int) ;
 int VAR_2 ;
 int FUNC_6 (int ,int ,int ,int ,TYPE_2__,char const**,int*) ;
 int FUNC_7 (char,int ) ;
 int FUNC_8 (char const*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,...) ;
 int VAR_3 ;
 unsigned char* FUNC_11 (unsigned char const*,int,int*) ;

__attribute__((used)) static void
FUNC_12 (struct ia64_unw_aux_info *VAR_4)
{
  struct ia64_unw_table_entry *VAR_5;
  int VAR_6;

  for (VAR_5 = VAR_4->table; VAR_5 < VAR_4->table + VAR_4->table_len; ++VAR_5)
    {
      bfd_vma VAR_7;
      bfd_vma VAR_8;
      const unsigned char *VAR_9;
      const unsigned char *VAR_10;
      const char *VAR_11;

      FUNC_6 (VAR_4->symtab, VAR_4->nsyms, VAR_4->strtab,
          VAR_4->strtab_size, VAR_5->start, &VAR_11, &VAR_8);

      FUNC_8 ("\n<", VAR_3);

      if (VAR_11)
 {
   FUNC_8 (VAR_11, VAR_3);

   if (VAR_8)
     FUNC_10 ("+%lx", (unsigned long) VAR_8);
 }

      FUNC_8 (">: [", VAR_3);
      FUNC_9 (VAR_5->start.offset, VAR_0);
      FUNC_7 ('-', VAR_3);
      FUNC_9 (VAR_5->end.offset, VAR_0);
      FUNC_10 ("], info at +0x%lx\n",
       (unsigned long) (VAR_5->info.offset - VAR_4->seg_base));

      VAR_10 = VAR_4->info + (FUNC_0 (VAR_5->info) - VAR_4->info_addr);
      VAR_7 = FUNC_5 ((unsigned char *) VAR_10, sizeof (VAR_7));

      FUNC_10 ("  v%u, flags=0x%lx (%s%s), len=%lu bytes\n",
       (unsigned) FUNC_4 (VAR_7),
       (unsigned long) ((VAR_7 & VAR_1) >> 32),
       FUNC_1 (VAR_7) ? " ehandler" : "",
       FUNC_2 (VAR_7) ? " uhandler" : "",
       (unsigned long) (VAR_2 * FUNC_3 (VAR_7)));

      if (FUNC_4 (VAR_7) != 1)
 {
   FUNC_10 ("\tUnknown version.\n");
   continue;
 }

      VAR_6 = 0;
      for (VAR_9 = VAR_10 + 8; VAR_9 < VAR_10 + 8 + VAR_2 * FUNC_3 (VAR_7);)
 VAR_9 = FUNC_11 (VAR_9, VAR_6, & VAR_6);
    }
}
