
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_25__ {scalar_t__ magic; scalar_t__ sym_index; scalar_t__ string_ptr; scalar_t__ string_table; scalar_t__* table_ptr; scalar_t__ end_string_ptr; TYPE_12__* esym_ptr; TYPE_9__* native_ptr; TYPE_10__** sym_ptr_ptr; TYPE_10__* sym_ptr; int abfd; } ;
typedef TYPE_8__ pe_ILF_vars ;
typedef int flagword ;
struct TYPE_20__ {long _n_offset; } ;
struct TYPE_21__ {TYPE_3__ _n_n; } ;
struct TYPE_22__ {unsigned short n_sclass; TYPE_4__ _n; int n_scnum; } ;
struct TYPE_23__ {TYPE_5__ syment; } ;
struct TYPE_26__ {TYPE_6__ u; } ;
typedef TYPE_9__ combined_entry_type ;
struct TYPE_24__ {scalar_t__ name; int flags; TYPE_11__* section; int the_bfd; } ;
struct TYPE_15__ {TYPE_9__* native; TYPE_7__ symbol; } ;
typedef TYPE_10__ coff_symbol_type ;
typedef TYPE_11__* asection_ptr ;
struct TYPE_18__ {int e_offset; } ;
struct TYPE_19__ {TYPE_1__ e; } ;
struct TYPE_17__ {unsigned short* e_sclass; int e_scnum; TYPE_2__ e; } ;
struct TYPE_16__ {int target_index; } ;
typedef TYPE_12__ SYMENT ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (scalar_t__,char*,char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5 (pe_ILF_vars * VAR_12,
        const char * VAR_13,
        const char * VAR_14,
        asection_ptr VAR_15,
        flagword VAR_16)
{
  coff_symbol_type * VAR_17;
  combined_entry_type * VAR_18;
  SYMENT * VAR_19;
  unsigned short VAR_20;

  if (VAR_16 & VAR_3)
    VAR_20 = VAR_5;
  else
    VAR_20 = VAR_4;
  FUNC_0 (VAR_12->sym_index < VAR_9);

  VAR_17 = VAR_12->sym_ptr;
  VAR_18 = VAR_12->native_ptr;
  VAR_19 = VAR_12->esym_ptr;


  FUNC_3 (VAR_12->string_ptr, "%s%s", VAR_13, VAR_14);

  if (VAR_15 == ((void*)0))
    VAR_15 = (asection_ptr) & VAR_11;


  FUNC_2 (VAR_12->abfd, VAR_12->string_ptr - VAR_12->string_table,
     VAR_19->e.e.e_offset);
  FUNC_1 (VAR_12->abfd, VAR_15->target_index, VAR_19->e_scnum);
  VAR_19->e_sclass[0] = VAR_20;





  VAR_18->u.syment.n_sclass = VAR_20;
  VAR_18->u.syment.n_scnum = VAR_15->target_index;
  VAR_18->u.syment._n._n_n._n_offset = (long) VAR_17;

  VAR_17->symbol.the_bfd = VAR_12->abfd;
  VAR_17->symbol.name = VAR_12->string_ptr;
  VAR_17->symbol.flags = VAR_0 | VAR_2 | VAR_16;
  VAR_17->symbol.section = VAR_15;
  VAR_17->native = VAR_18;

  * VAR_12->table_ptr = VAR_12->sym_index;
  * VAR_12->sym_ptr_ptr = VAR_17;


  VAR_12->sym_index ++;
  VAR_12->sym_ptr ++;
  VAR_12->sym_ptr_ptr ++;
  VAR_12->table_ptr ++;
  VAR_12->native_ptr ++;
  VAR_12->esym_ptr ++;
  VAR_12->string_ptr += FUNC_4 (VAR_14) + FUNC_4 (VAR_13) + 1;

  FUNC_0 (VAR_12->string_ptr < VAR_12->end_string_ptr);
}
