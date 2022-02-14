
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {char* name; struct bfd* the_bfd; } ;
struct coff_symbol_struct {TYPE_3__ symbol; TYPE_5__* native; } ;
struct bfd {TYPE_6__* xvec; } ;
struct TYPE_13__ {int ** symbols; } ;
typedef TYPE_4__ disassemble_info ;
struct TYPE_10__ {int n_sclass; } ;
struct TYPE_11__ {TYPE_1__ syment; } ;
struct TYPE_14__ {TYPE_2__ u; } ;
typedef TYPE_5__ combined_entry_type ;
typedef int bfd_vma ;
struct TYPE_15__ {int flavour; } ;
typedef TYPE_6__ bfd_target ;
typedef int asymbol ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (int ,TYPE_4__*) ;

__attribute__((used)) static int
FUNC_4 (bfd_vma VAR_4, disassemble_info *VAR_5)
{
  if (FUNC_1 (VAR_4))
    {
      static asymbol *VAR_6;
      static combined_entry_type VAR_7;
      static struct coff_symbol_struct VAR_8;
      static struct bfd VAR_9;
      static bfd_target VAR_10;

      if (VAR_8.native == ((void*)0))
 {






   VAR_10.flavour = VAR_3;
   VAR_9.xvec = &VAR_10;
   VAR_7.u.syment.n_sclass = VAR_1;
   VAR_8.native = &VAR_7;
   VAR_8.symbol.the_bfd = &VAR_9;
   VAR_8.symbol.name = "fake";
   VAR_6 = (asymbol *) & VAR_8;
 }

      VAR_4 = FUNC_0 (VAR_4);
      VAR_5->symbols = &VAR_6;
    }
  else
    VAR_5->symbols = ((void*)0);

  if (VAR_2 == VAR_0)
    return FUNC_2 (VAR_4, VAR_5);
  else
    return FUNC_3 (VAR_4, VAR_5);
}
