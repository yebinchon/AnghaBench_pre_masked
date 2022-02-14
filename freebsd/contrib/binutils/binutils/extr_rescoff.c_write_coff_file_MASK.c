
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int windres_bfd ;
struct TYPE_16__ {unsigned long length; TYPE_4__* d; int * last; } ;
struct TYPE_15__ {unsigned long length; TYPE_5__* d; int * last; } ;
struct TYPE_20__ {int length; TYPE_5__* d; int * last; } ;
struct TYPE_14__ {unsigned long length; TYPE_5__* d; int * last; } ;
struct coff_write_info {unsigned long dirsize; int dirstrsize; unsigned long dataentsize; int * relocs; int * wrbfd; TYPE_3__ resources; TYPE_2__ dataents; TYPE_8__ dirstrs; TYPE_1__ dirs; scalar_t__ reloc_count; int sympp; } ;
typedef int rc_uint_type ;
typedef int rc_res_directory ;
struct TYPE_17__ {scalar_t__ length; int res; struct TYPE_17__* next; } ;
typedef TYPE_4__ coff_res_data ;
struct TYPE_18__ {scalar_t__ length; int data; struct TYPE_18__* next; } ;
typedef TYPE_5__ bindata ;
typedef scalar_t__ bfd_byte ;
typedef int bfd ;
struct TYPE_19__ {int symbol_ptr_ptr; struct TYPE_19__* output_section; } ;
typedef TYPE_6__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*) ;
 TYPE_6__* FUNC_4 (int *,char*) ;
 int VAR_11 ;
 int * FUNC_5 (char const*,char const*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,TYPE_6__*,int *,scalar_t__) ;
 int FUNC_10 (int *,TYPE_6__*,int ,unsigned long,scalar_t__) ;
 int FUNC_11 (int *,TYPE_6__*,int) ;
 int FUNC_12 (int *,TYPE_6__*,unsigned long) ;
 int FUNC_13 (int *,int ,int) ;
 scalar_t__* FUNC_14 (TYPE_8__*,int) ;
 int FUNC_15 (int const*,struct coff_write_info*) ;
 int FUNC_16 (int const*,struct coff_write_info*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ,int ) ;
 int FUNC_20 (int *,int *,TYPE_6__*,int ) ;
 int FUNC_21 (int *,int ,unsigned long,scalar_t__) ;

void
FUNC_22 (const char *VAR_12, const char *VAR_13,
   const rc_res_directory *VAR_14)
{
  bfd *VAR_15;
  asection *VAR_16;
  struct coff_write_info VAR_17;
  windres_bfd VAR_18;
  bindata *VAR_19;
  coff_res_data *VAR_20;
  unsigned long VAR_21, VAR_22;

  if (VAR_12 == ((void*)0))
    FUNC_17 (FUNC_0("filename required for COFF output"));

  VAR_15 = FUNC_5 (VAR_12, VAR_13);
  if (VAR_15 == ((void*)0))
    FUNC_3 (VAR_12);

  if (! FUNC_8 (VAR_15, VAR_11))
    FUNC_3 ("bfd_set_format");
  if (! FUNC_6 (VAR_15, VAR_8, 0))
    FUNC_3 ("bfd_set_arch_mach(i386)");


  if (! FUNC_7 (VAR_15, VAR_1 | VAR_0))
    FUNC_3 ("bfd_set_file_flags");

  VAR_16 = FUNC_4 (VAR_15, ".rsrc");
  if (VAR_16 == ((void*)0))
    FUNC_3 ("bfd_make_section");

  if (! FUNC_11 (VAR_15, VAR_16,
          (VAR_4 | VAR_2
    | VAR_5 | VAR_3)))
    FUNC_3 ("bfd_set_section_flags");

  if (! FUNC_13 (VAR_15, VAR_16->symbol_ptr_ptr, 1))
    FUNC_3 ("bfd_set_symtab");


  VAR_16->output_section = VAR_16;
  FUNC_20 (&VAR_18, VAR_15, VAR_16, VAR_6);

  VAR_17.wrbfd = &VAR_18;
  VAR_17.sympp = VAR_16->symbol_ptr_ptr;
  VAR_17.dirsize = 0;
  VAR_17.dirstrsize = 0;
  VAR_17.dataentsize = 0;
  VAR_17.dirs.d = ((void*)0);
  VAR_17.dirs.last = ((void*)0);
  VAR_17.dirs.length = 0;
  VAR_17.dirstrs.d = ((void*)0);
  VAR_17.dirstrs.last = ((void*)0);
  VAR_17.dirstrs.length = 0;
  VAR_17.dataents.d = ((void*)0);
  VAR_17.dataents.last = ((void*)0);
  VAR_17.dataents.length = 0;
  VAR_17.resources.d = ((void*)0);
  VAR_17.resources.last = ((void*)0);
  VAR_17.resources.length = 0;
  VAR_17.relocs = ((void*)0);
  VAR_17.reloc_count = 0;



  FUNC_15 (VAR_14, &VAR_17);



  VAR_17.dirstrsize = (VAR_17.dirstrsize + 3) &~ 3;


  FUNC_16 (VAR_14, &VAR_17);



  if ((VAR_17.dirstrs.length & 3) != 0)
    {
      bfd_byte *VAR_23;

      VAR_23 = FUNC_14 (&VAR_17.dirstrs, 2);
      VAR_23[0] = 0;
      VAR_23[1] = 0;
    }



  FUNC_1 (VAR_17.dirs.length == VAR_17.dirsize);
  FUNC_1 (VAR_17.dirstrs.length == VAR_17.dirstrsize);
  FUNC_1 (VAR_17.dataents.length == VAR_17.dataentsize);

  VAR_21 = (VAR_17.dirsize
     + VAR_17.dirstrsize
     + VAR_17.dataentsize
     + VAR_17.resources.length);

  if (! FUNC_12 (VAR_15, VAR_16, VAR_21))
    FUNC_3 ("bfd_set_section_size");

  FUNC_9 (VAR_15, VAR_16, VAR_17.relocs, VAR_17.reloc_count);

  VAR_22 = 0;
  for (VAR_19 = VAR_17.dirs.d; VAR_19 != ((void*)0); VAR_19 = VAR_19->next)
    {
      if (! FUNC_10 (VAR_15, VAR_16, VAR_19->data, VAR_22, VAR_19->length))
 FUNC_3 ("bfd_set_section_contents");
      VAR_22 += VAR_19->length;
    }
  for (VAR_19 = VAR_17.dirstrs.d; VAR_19 != ((void*)0); VAR_19 = VAR_19->next)
    {
      FUNC_21 (&VAR_18, VAR_19->data, VAR_22, VAR_19->length);
      VAR_22 += VAR_19->length;
    }
  for (VAR_19 = VAR_17.dataents.d; VAR_19 != ((void*)0); VAR_19 = VAR_19->next)
    {
      FUNC_21 (&VAR_18, VAR_19->data, VAR_22, VAR_19->length);
      VAR_22 += VAR_19->length;
    }
  for (VAR_20 = VAR_17.resources.d; VAR_20 != ((void*)0); VAR_20 = VAR_20->next)
    {
      FUNC_19 (VAR_17.wrbfd, (rc_uint_type) VAR_22, VAR_20->res);
      VAR_22 += VAR_20->length;
    }

  FUNC_1 (VAR_22 == VAR_21);

  if (! FUNC_2 (VAR_15))
    FUNC_3 ("bfd_close");


  FUNC_18 (VAR_17.relocs);
}
