
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct internal_extra_pe_aouthdr {scalar_t__ Subsystem; } ;
struct external_PEI_IMAGE_hdr {struct external_PEI_IMAGE_hdr* nt_signature; struct external_PEI_IMAGE_hdr* e_lfanew; int e_magic; } ;
struct external_PEI_DOS_hdr {struct external_PEI_DOS_hdr* nt_signature; struct external_PEI_DOS_hdr* e_lfanew; int e_magic; } ;
struct TYPE_21__ {struct internal_extra_pe_aouthdr pe_opthdr; } ;
typedef TYPE_1__ pe_data_type ;
typedef int image_hdr ;
typedef int file_ptr ;
typedef enum arch_type { ____Placeholder_arch_type } arch_type ;
typedef int dos_hdr ;
struct TYPE_22__ {scalar_t__ flavour; } ;
typedef TYPE_2__ bfd_target ;
typedef int bfd_size_type ;
typedef struct external_PEI_IMAGE_hdr bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_23__ {TYPE_2__ const* const xvec; } ;
typedef TYPE_3__ bfd ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,struct external_PEI_IMAGE_hdr*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct external_PEI_IMAGE_hdr*,int ,TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_3__*,int,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (TYPE_2__ const* const) ;
 scalar_t__ FUNC_7 (TYPE_2__ const* const) ;
 int FUNC_8 (TYPE_2__ const* const) ;
 scalar_t__ FUNC_9 (TYPE_2__ const* const) ;
 TYPE_2__** VAR_6 ;
 TYPE_2__* FUNC_10 (TYPE_3__*) ;
 TYPE_2__ const* FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int ) ;
 TYPE_1__* FUNC_13 (TYPE_3__*) ;

__attribute__((used)) static const bfd_target *
FUNC_14 (bfd * VAR_7)
{
  bfd_byte VAR_8[4];
  struct external_PEI_DOS_hdr VAR_9;
  struct external_PEI_IMAGE_hdr VAR_10;
  file_ptr VAR_11;
  const bfd_target *VAR_12;


  if (FUNC_4 (VAR_7, (file_ptr) 0, VAR_2) != 0
      || FUNC_2 (VAR_8, (bfd_size_type) 4, VAR_7) != 4)
    {
      if (FUNC_3 () != VAR_3)
 FUNC_5 (VAR_4);
      return ((void*)0);
    }

  if (FUNC_1 (VAR_7, VAR_8) == 0xffff0000)
    return FUNC_11 (VAR_7);

  if (FUNC_4 (VAR_7, (file_ptr) 0, VAR_2) != 0
      || FUNC_2 (&VAR_9, (bfd_size_type) sizeof (VAR_9), VAR_7)
  != sizeof (VAR_9))
    {
      if (FUNC_3 () != VAR_3)
 FUNC_5 (VAR_4);
      return ((void*)0);
    }
  if (FUNC_0 (VAR_7, VAR_9.e_magic) != VAR_0)
    {
      FUNC_5 (VAR_4);
      return ((void*)0);
    }

  VAR_11 = FUNC_1 (VAR_7, VAR_9.e_lfanew);
  if (FUNC_4 (VAR_7, VAR_11, VAR_2) != 0
      || (FUNC_2 (&VAR_10, (bfd_size_type) sizeof (VAR_10), VAR_7)
   != sizeof (VAR_10)))
    {
      if (FUNC_3 () != VAR_3)
 FUNC_5 (VAR_4);
      return ((void*)0);
    }

  if (FUNC_1 (VAR_7, VAR_10.nt_signature) != 0x4550)
    {
      FUNC_5 (VAR_4);
      return ((void*)0);
    }




  if (FUNC_4 (VAR_7, (file_ptr) (VAR_11 - sizeof (VAR_9)), VAR_2) != 0)
    {
      if (FUNC_3 () != VAR_3)
 FUNC_5 (VAR_4);
      return ((void*)0);
    }

  VAR_12 = FUNC_10 (VAR_7);
  if (VAR_12)
    {
      pe_data_type *VAR_13 = FUNC_13 (VAR_7);
      struct internal_extra_pe_aouthdr *VAR_14 = &VAR_13->pe_opthdr;
      bfd_boolean VAR_15 = VAR_14->Subsystem == VAR_1;
      enum arch_type VAR_16;
      const bfd_target * const *VAR_17;


      if (FUNC_7 (VAR_7->xvec))
 VAR_16 = FUNC_12 (FUNC_6 (VAR_7->xvec));
      else
 VAR_16 = FUNC_12 (FUNC_8 (VAR_7->xvec));

      for (VAR_17 = VAR_6; *VAR_17 != ((void*)0);
    VAR_17++)
 {
   if (*VAR_17 == VAR_12
       || (*VAR_17)->flavour != VAR_5)
     continue;

   if (FUNC_7 (*VAR_17))
     {

       if (FUNC_12 (FUNC_6 (*VAR_17)) != VAR_16)
  continue;

  if (VAR_15)
    {


      FUNC_5 (VAR_4);
      return ((void*)0);
    }
     }
   else if (FUNC_9 (*VAR_17))
     {

       if (FUNC_12 (FUNC_8 (*VAR_17)) != VAR_16)
  continue;

  if (!VAR_15)
    {


      FUNC_5 (VAR_4);
      return ((void*)0);
    }
     }
 }
    }

  return VAR_12;
}
